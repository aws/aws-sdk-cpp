/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/ProxySessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace ProxySessionStatusMapper
      {

        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Closed_HASH = HashingUtils::HashString("Closed");


        ProxySessionStatus GetProxySessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Open_HASH)
          {
            return ProxySessionStatus::Open;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ProxySessionStatus::InProgress;
          }
          else if (hashCode == Closed_HASH)
          {
            return ProxySessionStatus::Closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProxySessionStatus>(hashCode);
          }

          return ProxySessionStatus::NOT_SET;
        }

        Aws::String GetNameForProxySessionStatus(ProxySessionStatus enumValue)
        {
          switch(enumValue)
          {
          case ProxySessionStatus::Open:
            return "Open";
          case ProxySessionStatus::InProgress:
            return "InProgress";
          case ProxySessionStatus::Closed:
            return "Closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProxySessionStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
