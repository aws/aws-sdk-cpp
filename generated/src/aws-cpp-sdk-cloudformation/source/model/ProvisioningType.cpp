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

        static constexpr uint32_t NON_PROVISIONABLE_HASH = ConstExprHashingUtils::HashString("NON_PROVISIONABLE");
        static constexpr uint32_t IMMUTABLE_HASH = ConstExprHashingUtils::HashString("IMMUTABLE");
        static constexpr uint32_t FULLY_MUTABLE_HASH = ConstExprHashingUtils::HashString("FULLY_MUTABLE");


        ProvisioningType GetProvisioningTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ProvisioningType::NOT_SET:
            return {};
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
