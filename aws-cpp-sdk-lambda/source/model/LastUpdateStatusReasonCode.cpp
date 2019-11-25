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

#include <aws/lambda/model/LastUpdateStatusReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace LastUpdateStatusReasonCodeMapper
      {

        static const int EniLimitExceeded_HASH = HashingUtils::HashString("EniLimitExceeded");
        static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
        static const int InvalidConfiguration_HASH = HashingUtils::HashString("InvalidConfiguration");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");


        LastUpdateStatusReasonCode GetLastUpdateStatusReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EniLimitExceeded_HASH)
          {
            return LastUpdateStatusReasonCode::EniLimitExceeded;
          }
          else if (hashCode == InsufficientRolePermissions_HASH)
          {
            return LastUpdateStatusReasonCode::InsufficientRolePermissions;
          }
          else if (hashCode == InvalidConfiguration_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidConfiguration;
          }
          else if (hashCode == InternalError_HASH)
          {
            return LastUpdateStatusReasonCode::InternalError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatusReasonCode>(hashCode);
          }

          return LastUpdateStatusReasonCode::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatusReasonCode(LastUpdateStatusReasonCode enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatusReasonCode::EniLimitExceeded:
            return "EniLimitExceeded";
          case LastUpdateStatusReasonCode::InsufficientRolePermissions:
            return "InsufficientRolePermissions";
          case LastUpdateStatusReasonCode::InvalidConfiguration:
            return "InvalidConfiguration";
          case LastUpdateStatusReasonCode::InternalError:
            return "InternalError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastUpdateStatusReasonCodeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
