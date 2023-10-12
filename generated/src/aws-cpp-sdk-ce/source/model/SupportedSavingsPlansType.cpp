/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace SupportedSavingsPlansTypeMapper
      {

        static constexpr uint32_t COMPUTE_SP_HASH = ConstExprHashingUtils::HashString("COMPUTE_SP");
        static constexpr uint32_t EC2_INSTANCE_SP_HASH = ConstExprHashingUtils::HashString("EC2_INSTANCE_SP");
        static constexpr uint32_t SAGEMAKER_SP_HASH = ConstExprHashingUtils::HashString("SAGEMAKER_SP");


        SupportedSavingsPlansType GetSupportedSavingsPlansTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPUTE_SP_HASH)
          {
            return SupportedSavingsPlansType::COMPUTE_SP;
          }
          else if (hashCode == EC2_INSTANCE_SP_HASH)
          {
            return SupportedSavingsPlansType::EC2_INSTANCE_SP;
          }
          else if (hashCode == SAGEMAKER_SP_HASH)
          {
            return SupportedSavingsPlansType::SAGEMAKER_SP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedSavingsPlansType>(hashCode);
          }

          return SupportedSavingsPlansType::NOT_SET;
        }

        Aws::String GetNameForSupportedSavingsPlansType(SupportedSavingsPlansType enumValue)
        {
          switch(enumValue)
          {
          case SupportedSavingsPlansType::NOT_SET:
            return {};
          case SupportedSavingsPlansType::COMPUTE_SP:
            return "COMPUTE_SP";
          case SupportedSavingsPlansType::EC2_INSTANCE_SP:
            return "EC2_INSTANCE_SP";
          case SupportedSavingsPlansType::SAGEMAKER_SP:
            return "SAGEMAKER_SP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedSavingsPlansTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
