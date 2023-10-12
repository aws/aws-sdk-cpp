/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static constexpr uint32_t ACU_1_HASH = ConstExprHashingUtils::HashString("ACU_1");
        static constexpr uint32_t ACU_2_HASH = ConstExprHashingUtils::HashString("ACU_2");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACU_1_HASH)
          {
            return ComputeType::ACU_1;
          }
          else if (hashCode == ACU_2_HASH)
          {
            return ComputeType::ACU_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::NOT_SET:
            return {};
          case ComputeType::ACU_1:
            return "ACU_1";
          case ComputeType::ACU_2:
            return "ACU_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
