/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace LustreDeploymentTypeMapper
      {

        static constexpr uint32_t SCRATCH_1_HASH = ConstExprHashingUtils::HashString("SCRATCH_1");
        static constexpr uint32_t SCRATCH_2_HASH = ConstExprHashingUtils::HashString("SCRATCH_2");
        static constexpr uint32_t PERSISTENT_1_HASH = ConstExprHashingUtils::HashString("PERSISTENT_1");
        static constexpr uint32_t PERSISTENT_2_HASH = ConstExprHashingUtils::HashString("PERSISTENT_2");


        LustreDeploymentType GetLustreDeploymentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCRATCH_1_HASH)
          {
            return LustreDeploymentType::SCRATCH_1;
          }
          else if (hashCode == SCRATCH_2_HASH)
          {
            return LustreDeploymentType::SCRATCH_2;
          }
          else if (hashCode == PERSISTENT_1_HASH)
          {
            return LustreDeploymentType::PERSISTENT_1;
          }
          else if (hashCode == PERSISTENT_2_HASH)
          {
            return LustreDeploymentType::PERSISTENT_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LustreDeploymentType>(hashCode);
          }

          return LustreDeploymentType::NOT_SET;
        }

        Aws::String GetNameForLustreDeploymentType(LustreDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case LustreDeploymentType::NOT_SET:
            return {};
          case LustreDeploymentType::SCRATCH_1:
            return "SCRATCH_1";
          case LustreDeploymentType::SCRATCH_2:
            return "SCRATCH_2";
          case LustreDeploymentType::PERSISTENT_1:
            return "PERSISTENT_1";
          case LustreDeploymentType::PERSISTENT_2:
            return "PERSISTENT_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LustreDeploymentTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
