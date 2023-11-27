/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessCheckPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AccessCheckPolicyTypeMapper
      {

        static const int IDENTITY_POLICY_HASH = HashingUtils::HashString("IDENTITY_POLICY");
        static const int RESOURCE_POLICY_HASH = HashingUtils::HashString("RESOURCE_POLICY");


        AccessCheckPolicyType GetAccessCheckPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTITY_POLICY_HASH)
          {
            return AccessCheckPolicyType::IDENTITY_POLICY;
          }
          else if (hashCode == RESOURCE_POLICY_HASH)
          {
            return AccessCheckPolicyType::RESOURCE_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessCheckPolicyType>(hashCode);
          }

          return AccessCheckPolicyType::NOT_SET;
        }

        Aws::String GetNameForAccessCheckPolicyType(AccessCheckPolicyType enumValue)
        {
          switch(enumValue)
          {
          case AccessCheckPolicyType::NOT_SET:
            return {};
          case AccessCheckPolicyType::IDENTITY_POLICY:
            return "IDENTITY_POLICY";
          case AccessCheckPolicyType::RESOURCE_POLICY:
            return "RESOURCE_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessCheckPolicyTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
