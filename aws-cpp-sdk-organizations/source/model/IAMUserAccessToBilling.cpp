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
#include <aws/organizations/model/IAMUserAccessToBilling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace IAMUserAccessToBillingMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        IAMUserAccessToBilling GetIAMUserAccessToBillingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return IAMUserAccessToBilling::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return IAMUserAccessToBilling::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IAMUserAccessToBilling>(hashCode);
          }

          return IAMUserAccessToBilling::NOT_SET;
        }

        Aws::String GetNameForIAMUserAccessToBilling(IAMUserAccessToBilling enumValue)
        {
          switch(enumValue)
          {
          case IAMUserAccessToBilling::ALLOW:
            return "ALLOW";
          case IAMUserAccessToBilling::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace IAMUserAccessToBillingMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
