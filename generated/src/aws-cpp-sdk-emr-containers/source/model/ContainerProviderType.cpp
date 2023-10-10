/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ContainerProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace ContainerProviderTypeMapper
      {

        static const int EKS_HASH = HashingUtils::HashString("EKS");


        ContainerProviderType GetContainerProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_HASH)
          {
            return ContainerProviderType::EKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerProviderType>(hashCode);
          }

          return ContainerProviderType::NOT_SET;
        }

        Aws::String GetNameForContainerProviderType(ContainerProviderType enumValue)
        {
          switch(enumValue)
          {
          case ContainerProviderType::NOT_SET:
            return {};
          case ContainerProviderType::EKS:
            return "EKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerProviderTypeMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
