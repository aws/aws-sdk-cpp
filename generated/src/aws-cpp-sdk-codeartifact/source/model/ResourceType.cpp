/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t domain_HASH = ConstExprHashingUtils::HashString("domain");
        static constexpr uint32_t repository_HASH = ConstExprHashingUtils::HashString("repository");
        static constexpr uint32_t package_HASH = ConstExprHashingUtils::HashString("package");
        static constexpr uint32_t package_version_HASH = ConstExprHashingUtils::HashString("package-version");
        static constexpr uint32_t asset_HASH = ConstExprHashingUtils::HashString("asset");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == domain_HASH)
          {
            return ResourceType::domain;
          }
          else if (hashCode == repository_HASH)
          {
            return ResourceType::repository;
          }
          else if (hashCode == package_HASH)
          {
            return ResourceType::package;
          }
          else if (hashCode == package_version_HASH)
          {
            return ResourceType::package_version;
          }
          else if (hashCode == asset_HASH)
          {
            return ResourceType::asset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::domain:
            return "domain";
          case ResourceType::repository:
            return "repository";
          case ResourceType::package:
            return "package";
          case ResourceType::package_version:
            return "package-version";
          case ResourceType::asset:
            return "asset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
