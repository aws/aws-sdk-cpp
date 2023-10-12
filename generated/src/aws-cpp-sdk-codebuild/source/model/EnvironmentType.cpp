/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace EnvironmentTypeMapper
      {

        static constexpr uint32_t WINDOWS_CONTAINER_HASH = ConstExprHashingUtils::HashString("WINDOWS_CONTAINER");
        static constexpr uint32_t LINUX_CONTAINER_HASH = ConstExprHashingUtils::HashString("LINUX_CONTAINER");
        static constexpr uint32_t LINUX_GPU_CONTAINER_HASH = ConstExprHashingUtils::HashString("LINUX_GPU_CONTAINER");
        static constexpr uint32_t ARM_CONTAINER_HASH = ConstExprHashingUtils::HashString("ARM_CONTAINER");
        static constexpr uint32_t WINDOWS_SERVER_2019_CONTAINER_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2019_CONTAINER");


        EnvironmentType GetEnvironmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_CONTAINER_HASH)
          {
            return EnvironmentType::WINDOWS_CONTAINER;
          }
          else if (hashCode == LINUX_CONTAINER_HASH)
          {
            return EnvironmentType::LINUX_CONTAINER;
          }
          else if (hashCode == LINUX_GPU_CONTAINER_HASH)
          {
            return EnvironmentType::LINUX_GPU_CONTAINER;
          }
          else if (hashCode == ARM_CONTAINER_HASH)
          {
            return EnvironmentType::ARM_CONTAINER;
          }
          else if (hashCode == WINDOWS_SERVER_2019_CONTAINER_HASH)
          {
            return EnvironmentType::WINDOWS_SERVER_2019_CONTAINER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentType>(hashCode);
          }

          return EnvironmentType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentType(EnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentType::NOT_SET:
            return {};
          case EnvironmentType::WINDOWS_CONTAINER:
            return "WINDOWS_CONTAINER";
          case EnvironmentType::LINUX_CONTAINER:
            return "LINUX_CONTAINER";
          case EnvironmentType::LINUX_GPU_CONTAINER:
            return "LINUX_GPU_CONTAINER";
          case EnvironmentType::ARM_CONTAINER:
            return "ARM_CONTAINER";
          case EnvironmentType::WINDOWS_SERVER_2019_CONTAINER:
            return "WINDOWS_SERVER_2019_CONTAINER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
