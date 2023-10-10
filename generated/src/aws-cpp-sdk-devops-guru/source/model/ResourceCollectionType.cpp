/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourceCollectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ResourceCollectionTypeMapper
      {

        static const int AWS_CLOUD_FORMATION_HASH = HashingUtils::HashString("AWS_CLOUD_FORMATION");
        static const int AWS_SERVICE_HASH = HashingUtils::HashString("AWS_SERVICE");
        static const int AWS_TAGS_HASH = HashingUtils::HashString("AWS_TAGS");


        ResourceCollectionType GetResourceCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CLOUD_FORMATION_HASH)
          {
            return ResourceCollectionType::AWS_CLOUD_FORMATION;
          }
          else if (hashCode == AWS_SERVICE_HASH)
          {
            return ResourceCollectionType::AWS_SERVICE;
          }
          else if (hashCode == AWS_TAGS_HASH)
          {
            return ResourceCollectionType::AWS_TAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCollectionType>(hashCode);
          }

          return ResourceCollectionType::NOT_SET;
        }

        Aws::String GetNameForResourceCollectionType(ResourceCollectionType enumValue)
        {
          switch(enumValue)
          {
          case ResourceCollectionType::NOT_SET:
            return {};
          case ResourceCollectionType::AWS_CLOUD_FORMATION:
            return "AWS_CLOUD_FORMATION";
          case ResourceCollectionType::AWS_SERVICE:
            return "AWS_SERVICE";
          case ResourceCollectionType::AWS_TAGS:
            return "AWS_TAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCollectionTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
