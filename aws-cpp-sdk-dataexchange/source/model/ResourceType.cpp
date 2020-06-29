/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int DATA_SET_HASH = HashingUtils::HashString("DATA_SET");
        static const int REVISION_HASH = HashingUtils::HashString("REVISION");
        static const int ASSET_HASH = HashingUtils::HashString("ASSET");
        static const int JOB_HASH = HashingUtils::HashString("JOB");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_SET_HASH)
          {
            return ResourceType::DATA_SET;
          }
          else if (hashCode == REVISION_HASH)
          {
            return ResourceType::REVISION;
          }
          else if (hashCode == ASSET_HASH)
          {
            return ResourceType::ASSET;
          }
          else if (hashCode == JOB_HASH)
          {
            return ResourceType::JOB;
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
          case ResourceType::DATA_SET:
            return "DATA_SET";
          case ResourceType::REVISION:
            return "REVISION";
          case ResourceType::ASSET:
            return "ASSET";
          case ResourceType::JOB:
            return "JOB";
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
  } // namespace DataExchange
} // namespace Aws
