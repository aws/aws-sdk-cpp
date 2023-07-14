/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ProvisioningType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ProvisioningTypeMapper
      {

        static const int NON_PROVISIONABLE_HASH = HashingUtils::HashString("NON_PROVISIONABLE");
        static const int IMMUTABLE_HASH = HashingUtils::HashString("IMMUTABLE");
        static const int FULLY_MUTABLE_HASH = HashingUtils::HashString("FULLY_MUTABLE");


        ProvisioningType GetProvisioningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NON_PROVISIONABLE_HASH)
          {
            return ProvisioningType::NON_PROVISIONABLE;
          }
          else if (hashCode == IMMUTABLE_HASH)
          {
            return ProvisioningType::IMMUTABLE;
          }
          else if (hashCode == FULLY_MUTABLE_HASH)
          {
            return ProvisioningType::FULLY_MUTABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningType>(hashCode);
          }

          return ProvisioningType::NOT_SET;
        }

        Aws::String GetNameForProvisioningType(ProvisioningType enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningType::NON_PROVISIONABLE:
            return "NON_PROVISIONABLE";
          case ProvisioningType::IMMUTABLE:
            return "IMMUTABLE";
          case ProvisioningType::FULLY_MUTABLE:
            return "FULLY_MUTABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
