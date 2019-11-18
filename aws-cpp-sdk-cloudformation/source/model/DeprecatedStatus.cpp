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

#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace DeprecatedStatusMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        DeprecatedStatus GetDeprecatedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return DeprecatedStatus::LIVE;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return DeprecatedStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeprecatedStatus>(hashCode);
          }

          return DeprecatedStatus::NOT_SET;
        }

        Aws::String GetNameForDeprecatedStatus(DeprecatedStatus enumValue)
        {
          switch(enumValue)
          {
          case DeprecatedStatus::LIVE:
            return "LIVE";
          case DeprecatedStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeprecatedStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
