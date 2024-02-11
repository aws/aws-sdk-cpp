/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/CmkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace CmkTypeMapper
      {

        static const int CUSTOMER_MANAGED_KMS_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KMS_KEY");
        static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");


        CmkType GetCmkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_KMS_KEY_HASH)
          {
            return CmkType::CUSTOMER_MANAGED_KMS_KEY;
          }
          else if (hashCode == AWS_OWNED_KMS_KEY_HASH)
          {
            return CmkType::AWS_OWNED_KMS_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmkType>(hashCode);
          }

          return CmkType::NOT_SET;
        }

        Aws::String GetNameForCmkType(CmkType enumValue)
        {
          switch(enumValue)
          {
          case CmkType::NOT_SET:
            return {};
          case CmkType::CUSTOMER_MANAGED_KMS_KEY:
            return "CUSTOMER_MANAGED_KMS_KEY";
          case CmkType::AWS_OWNED_KMS_KEY:
            return "AWS_OWNED_KMS_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmkTypeMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
