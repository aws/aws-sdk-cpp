/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");
        static const int DATASET_HASH = HashingUtils::HashString("DATASET");
        static const int MODEL_HASH = HashingUtils::HashString("MODEL");
        static const int TRIAL_HASH = HashingUtils::HashString("TRIAL");
        static const int MODEL_PACKAGE_JOB_HASH = HashingUtils::HashString("MODEL_PACKAGE_JOB");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECT_HASH)
          {
            return ResourceType::PROJECT;
          }
          else if (hashCode == DATASET_HASH)
          {
            return ResourceType::DATASET;
          }
          else if (hashCode == MODEL_HASH)
          {
            return ResourceType::MODEL;
          }
          else if (hashCode == TRIAL_HASH)
          {
            return ResourceType::TRIAL;
          }
          else if (hashCode == MODEL_PACKAGE_JOB_HASH)
          {
            return ResourceType::MODEL_PACKAGE_JOB;
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
          case ResourceType::PROJECT:
            return "PROJECT";
          case ResourceType::DATASET:
            return "DATASET";
          case ResourceType::MODEL:
            return "MODEL";
          case ResourceType::TRIAL:
            return "TRIAL";
          case ResourceType::MODEL_PACKAGE_JOB:
            return "MODEL_PACKAGE_JOB";
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
  } // namespace LookoutforVision
} // namespace Aws
