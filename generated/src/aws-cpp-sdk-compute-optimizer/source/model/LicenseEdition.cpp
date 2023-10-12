/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseEdition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace LicenseEditionMapper
      {

        static constexpr uint32_t Enterprise_HASH = ConstExprHashingUtils::HashString("Enterprise");
        static constexpr uint32_t Standard_HASH = ConstExprHashingUtils::HashString("Standard");
        static constexpr uint32_t Free_HASH = ConstExprHashingUtils::HashString("Free");
        static constexpr uint32_t NoLicenseEditionFound_HASH = ConstExprHashingUtils::HashString("NoLicenseEditionFound");


        LicenseEdition GetLicenseEditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enterprise_HASH)
          {
            return LicenseEdition::Enterprise;
          }
          else if (hashCode == Standard_HASH)
          {
            return LicenseEdition::Standard;
          }
          else if (hashCode == Free_HASH)
          {
            return LicenseEdition::Free;
          }
          else if (hashCode == NoLicenseEditionFound_HASH)
          {
            return LicenseEdition::NoLicenseEditionFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseEdition>(hashCode);
          }

          return LicenseEdition::NOT_SET;
        }

        Aws::String GetNameForLicenseEdition(LicenseEdition enumValue)
        {
          switch(enumValue)
          {
          case LicenseEdition::NOT_SET:
            return {};
          case LicenseEdition::Enterprise:
            return "Enterprise";
          case LicenseEdition::Standard:
            return "Standard";
          case LicenseEdition::Free:
            return "Free";
          case LicenseEdition::NoLicenseEditionFound:
            return "NoLicenseEditionFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseEditionMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
