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

#include <aws/fms/model/ViolationReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace ViolationReasonMapper
      {

        static const int WEB_ACL_MISSING_RULE_GROUP_HASH = HashingUtils::HashString("WEB_ACL_MISSING_RULE_GROUP");
        static const int RESOURCE_MISSING_WEB_ACL_HASH = HashingUtils::HashString("RESOURCE_MISSING_WEB_ACL");
        static const int RESOURCE_INCORRECT_WEB_ACL_HASH = HashingUtils::HashString("RESOURCE_INCORRECT_WEB_ACL");
        static const int RESOURCE_MISSING_SHIELD_PROTECTION_HASH = HashingUtils::HashString("RESOURCE_MISSING_SHIELD_PROTECTION");
        static const int RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION_HASH = HashingUtils::HashString("RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION");
        static const int RESOURCE_MISSING_SECURITY_GROUP_HASH = HashingUtils::HashString("RESOURCE_MISSING_SECURITY_GROUP");
        static const int RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP_HASH = HashingUtils::HashString("RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP");
        static const int SECURITY_GROUP_UNUSED_HASH = HashingUtils::HashString("SECURITY_GROUP_UNUSED");
        static const int SECURITY_GROUP_REDUNDANT_HASH = HashingUtils::HashString("SECURITY_GROUP_REDUNDANT");


        ViolationReason GetViolationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_ACL_MISSING_RULE_GROUP_HASH)
          {
            return ViolationReason::WEB_ACL_MISSING_RULE_GROUP;
          }
          else if (hashCode == RESOURCE_MISSING_WEB_ACL_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_WEB_ACL;
          }
          else if (hashCode == RESOURCE_INCORRECT_WEB_ACL_HASH)
          {
            return ViolationReason::RESOURCE_INCORRECT_WEB_ACL;
          }
          else if (hashCode == RESOURCE_MISSING_SHIELD_PROTECTION_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_SHIELD_PROTECTION;
          }
          else if (hashCode == RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION;
          }
          else if (hashCode == RESOURCE_MISSING_SECURITY_GROUP_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_SECURITY_GROUP;
          }
          else if (hashCode == RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP_HASH)
          {
            return ViolationReason::RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP;
          }
          else if (hashCode == SECURITY_GROUP_UNUSED_HASH)
          {
            return ViolationReason::SECURITY_GROUP_UNUSED;
          }
          else if (hashCode == SECURITY_GROUP_REDUNDANT_HASH)
          {
            return ViolationReason::SECURITY_GROUP_REDUNDANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViolationReason>(hashCode);
          }

          return ViolationReason::NOT_SET;
        }

        Aws::String GetNameForViolationReason(ViolationReason enumValue)
        {
          switch(enumValue)
          {
          case ViolationReason::WEB_ACL_MISSING_RULE_GROUP:
            return "WEB_ACL_MISSING_RULE_GROUP";
          case ViolationReason::RESOURCE_MISSING_WEB_ACL:
            return "RESOURCE_MISSING_WEB_ACL";
          case ViolationReason::RESOURCE_INCORRECT_WEB_ACL:
            return "RESOURCE_INCORRECT_WEB_ACL";
          case ViolationReason::RESOURCE_MISSING_SHIELD_PROTECTION:
            return "RESOURCE_MISSING_SHIELD_PROTECTION";
          case ViolationReason::RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION:
            return "RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION";
          case ViolationReason::RESOURCE_MISSING_SECURITY_GROUP:
            return "RESOURCE_MISSING_SECURITY_GROUP";
          case ViolationReason::RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP:
            return "RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP";
          case ViolationReason::SECURITY_GROUP_UNUSED:
            return "SECURITY_GROUP_UNUSED";
          case ViolationReason::SECURITY_GROUP_REDUNDANT:
            return "SECURITY_GROUP_REDUNDANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViolationReasonMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
