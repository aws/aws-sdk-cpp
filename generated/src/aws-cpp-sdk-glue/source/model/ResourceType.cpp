/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int JAR_HASH = HashingUtils::HashString("JAR");
        static const int FILE_HASH = HashingUtils::HashString("FILE");
        static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JAR_HASH)
          {
            return ResourceType::JAR;
          }
          else if (hashCode == FILE_HASH)
          {
            return ResourceType::FILE;
          }
          else if (hashCode == ARCHIVE_HASH)
          {
            return ResourceType::ARCHIVE;
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
          case ResourceType::JAR:
            return "JAR";
          case ResourceType::FILE:
            return "FILE";
          case ResourceType::ARCHIVE:
            return "ARCHIVE";
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
  } // namespace Glue
} // namespace Aws
