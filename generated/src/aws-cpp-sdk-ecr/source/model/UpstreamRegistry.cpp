/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/UpstreamRegistry.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace UpstreamRegistryMapper
      {

        static const int ecr_public_HASH = HashingUtils::HashString("ecr-public");
        static const int quay_HASH = HashingUtils::HashString("quay");
        static const int k8s_HASH = HashingUtils::HashString("k8s");
        static const int docker_hub_HASH = HashingUtils::HashString("docker-hub");
        static const int github_container_registry_HASH = HashingUtils::HashString("github-container-registry");
        static const int azure_container_registry_HASH = HashingUtils::HashString("azure-container-registry");


        UpstreamRegistry GetUpstreamRegistryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ecr_public_HASH)
          {
            return UpstreamRegistry::ecr_public;
          }
          else if (hashCode == quay_HASH)
          {
            return UpstreamRegistry::quay;
          }
          else if (hashCode == k8s_HASH)
          {
            return UpstreamRegistry::k8s;
          }
          else if (hashCode == docker_hub_HASH)
          {
            return UpstreamRegistry::docker_hub;
          }
          else if (hashCode == github_container_registry_HASH)
          {
            return UpstreamRegistry::github_container_registry;
          }
          else if (hashCode == azure_container_registry_HASH)
          {
            return UpstreamRegistry::azure_container_registry;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpstreamRegistry>(hashCode);
          }

          return UpstreamRegistry::NOT_SET;
        }

        Aws::String GetNameForUpstreamRegistry(UpstreamRegistry enumValue)
        {
          switch(enumValue)
          {
          case UpstreamRegistry::NOT_SET:
            return {};
          case UpstreamRegistry::ecr_public:
            return "ecr-public";
          case UpstreamRegistry::quay:
            return "quay";
          case UpstreamRegistry::k8s:
            return "k8s";
          case UpstreamRegistry::docker_hub:
            return "docker-hub";
          case UpstreamRegistry::github_container_registry:
            return "github-container-registry";
          case UpstreamRegistry::azure_container_registry:
            return "azure-container-registry";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpstreamRegistryMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
