/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ContainerRepositoryService.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ContainerRepositoryServiceMapper
      {

        static const int ECR_HASH = HashingUtils::HashString("ECR");


        ContainerRepositoryService GetContainerRepositoryServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECR_HASH)
          {
            return ContainerRepositoryService::ECR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerRepositoryService>(hashCode);
          }

          return ContainerRepositoryService::NOT_SET;
        }

        Aws::String GetNameForContainerRepositoryService(ContainerRepositoryService enumValue)
        {
          switch(enumValue)
          {
          case ContainerRepositoryService::NOT_SET:
            return {};
          case ContainerRepositoryService::ECR:
            return "ECR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerRepositoryServiceMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
