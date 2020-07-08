/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EffectivePolicyType.h>
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
      namespace EffectivePolicyTypeMapper
      {

        static const int TAG_POLICY_HASH = HashingUtils::HashString("TAG_POLICY");
        static const int BACKUP_POLICY_HASH = HashingUtils::HashString("BACKUP_POLICY");
        static const int AISERVICES_OPT_OUT_POLICY_HASH = HashingUtils::HashString("AISERVICES_OPT_OUT_POLICY");


        EffectivePolicyType GetEffectivePolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAG_POLICY_HASH)
          {
            return EffectivePolicyType::TAG_POLICY;
          }
          else if (hashCode == BACKUP_POLICY_HASH)
          {
            return EffectivePolicyType::BACKUP_POLICY;
          }
          else if (hashCode == AISERVICES_OPT_OUT_POLICY_HASH)
          {
            return EffectivePolicyType::AISERVICES_OPT_OUT_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EffectivePolicyType>(hashCode);
          }

          return EffectivePolicyType::NOT_SET;
        }

        Aws::String GetNameForEffectivePolicyType(EffectivePolicyType enumValue)
        {
          switch(enumValue)
          {
          case EffectivePolicyType::TAG_POLICY:
            return "TAG_POLICY";
          case EffectivePolicyType::BACKUP_POLICY:
            return "BACKUP_POLICY";
          case EffectivePolicyType::AISERVICES_OPT_OUT_POLICY:
            return "AISERVICES_OPT_OUT_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EffectivePolicyTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
