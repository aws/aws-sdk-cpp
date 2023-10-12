/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/PolicyScopeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace PolicyScopeTypeMapper
      {

        static constexpr uint32_t All_HASH = ConstExprHashingUtils::HashString("All");
        static constexpr uint32_t AWS_HASH = ConstExprHashingUtils::HashString("AWS");
        static constexpr uint32_t Local_HASH = ConstExprHashingUtils::HashString("Local");


        PolicyScopeType GetPolicyScopeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return PolicyScopeType::All;
          }
          else if (hashCode == AWS_HASH)
          {
            return PolicyScopeType::AWS;
          }
          else if (hashCode == Local_HASH)
          {
            return PolicyScopeType::Local;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyScopeType>(hashCode);
          }

          return PolicyScopeType::NOT_SET;
        }

        Aws::String GetNameForPolicyScopeType(PolicyScopeType enumValue)
        {
          switch(enumValue)
          {
          case PolicyScopeType::NOT_SET:
            return {};
          case PolicyScopeType::All:
            return "All";
          case PolicyScopeType::AWS:
            return "AWS";
          case PolicyScopeType::Local:
            return "Local";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyScopeTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
