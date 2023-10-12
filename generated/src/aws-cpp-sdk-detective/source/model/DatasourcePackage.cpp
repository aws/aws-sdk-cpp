/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/DatasourcePackage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace DatasourcePackageMapper
      {

        static constexpr uint32_t DETECTIVE_CORE_HASH = ConstExprHashingUtils::HashString("DETECTIVE_CORE");
        static constexpr uint32_t EKS_AUDIT_HASH = ConstExprHashingUtils::HashString("EKS_AUDIT");
        static constexpr uint32_t ASFF_SECURITYHUB_FINDING_HASH = ConstExprHashingUtils::HashString("ASFF_SECURITYHUB_FINDING");


        DatasourcePackage GetDatasourcePackageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETECTIVE_CORE_HASH)
          {
            return DatasourcePackage::DETECTIVE_CORE;
          }
          else if (hashCode == EKS_AUDIT_HASH)
          {
            return DatasourcePackage::EKS_AUDIT;
          }
          else if (hashCode == ASFF_SECURITYHUB_FINDING_HASH)
          {
            return DatasourcePackage::ASFF_SECURITYHUB_FINDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasourcePackage>(hashCode);
          }

          return DatasourcePackage::NOT_SET;
        }

        Aws::String GetNameForDatasourcePackage(DatasourcePackage enumValue)
        {
          switch(enumValue)
          {
          case DatasourcePackage::NOT_SET:
            return {};
          case DatasourcePackage::DETECTIVE_CORE:
            return "DETECTIVE_CORE";
          case DatasourcePackage::EKS_AUDIT:
            return "EKS_AUDIT";
          case DatasourcePackage::ASFF_SECURITYHUB_FINDING:
            return "ASFF_SECURITYHUB_FINDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasourcePackageMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
