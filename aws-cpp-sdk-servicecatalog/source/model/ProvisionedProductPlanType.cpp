/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProvisionedProductPlanTypeMapper
      {

        static const int CLOUDFORMATION_HASH = HashingUtils::HashString("CLOUDFORMATION");


        ProvisionedProductPlanType GetProvisionedProductPlanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFORMATION_HASH)
          {
            return ProvisionedProductPlanType::CLOUDFORMATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedProductPlanType>(hashCode);
          }

          return ProvisionedProductPlanType::NOT_SET;
        }

        Aws::String GetNameForProvisionedProductPlanType(ProvisionedProductPlanType enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedProductPlanType::CLOUDFORMATION:
            return "CLOUDFORMATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedProductPlanTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
