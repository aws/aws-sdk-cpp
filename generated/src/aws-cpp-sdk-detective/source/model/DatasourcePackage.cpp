﻿/**
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

        static const int DETECTIVE_CORE_HASH = HashingUtils::HashString("DETECTIVE_CORE");
        static const int EKS_AUDIT_HASH = HashingUtils::HashString("EKS_AUDIT");


        DatasourcePackage GetDatasourcePackageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETECTIVE_CORE_HASH)
          {
            return DatasourcePackage::DETECTIVE_CORE;
          }
          else if (hashCode == EKS_AUDIT_HASH)
          {
            return DatasourcePackage::EKS_AUDIT;
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
          case DatasourcePackage::DETECTIVE_CORE:
            return "DETECTIVE_CORE";
          case DatasourcePackage::EKS_AUDIT:
            return "EKS_AUDIT";
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
