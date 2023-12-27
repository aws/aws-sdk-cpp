/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ActivationOverrideBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace ActivationOverrideBehaviorMapper
      {

        static const int DISTRIBUTED_GRANTS_ONLY_HASH = HashingUtils::HashString("DISTRIBUTED_GRANTS_ONLY");
        static const int ALL_GRANTS_PERMITTED_BY_ISSUER_HASH = HashingUtils::HashString("ALL_GRANTS_PERMITTED_BY_ISSUER");


        ActivationOverrideBehavior GetActivationOverrideBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISTRIBUTED_GRANTS_ONLY_HASH)
          {
            return ActivationOverrideBehavior::DISTRIBUTED_GRANTS_ONLY;
          }
          else if (hashCode == ALL_GRANTS_PERMITTED_BY_ISSUER_HASH)
          {
            return ActivationOverrideBehavior::ALL_GRANTS_PERMITTED_BY_ISSUER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivationOverrideBehavior>(hashCode);
          }

          return ActivationOverrideBehavior::NOT_SET;
        }

        Aws::String GetNameForActivationOverrideBehavior(ActivationOverrideBehavior enumValue)
        {
          switch(enumValue)
          {
          case ActivationOverrideBehavior::NOT_SET:
            return {};
          case ActivationOverrideBehavior::DISTRIBUTED_GRANTS_ONLY:
            return "DISTRIBUTED_GRANTS_ONLY";
          case ActivationOverrideBehavior::ALL_GRANTS_PERMITTED_BY_ISSUER:
            return "ALL_GRANTS_PERMITTED_BY_ISSUER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivationOverrideBehaviorMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
