/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/PingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PingStatusMapper
      {

        static const int Online_HASH = HashingUtils::HashString("Online");
        static const int ConnectionLost_HASH = HashingUtils::HashString("ConnectionLost");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        PingStatus GetPingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Online_HASH)
          {
            return PingStatus::Online;
          }
          else if (hashCode == ConnectionLost_HASH)
          {
            return PingStatus::ConnectionLost;
          }
          else if (hashCode == Inactive_HASH)
          {
            return PingStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PingStatus>(hashCode);
          }

          return PingStatus::NOT_SET;
        }

        Aws::String GetNameForPingStatus(PingStatus enumValue)
        {
          switch(enumValue)
          {
          case PingStatus::Online:
            return "Online";
          case PingStatus::ConnectionLost:
            return "ConnectionLost";
          case PingStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PingStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
