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

        static constexpr uint32_t DATA_SET_HASH = ConstExprHashingUtils::HashString("DATA_SET");
        static constexpr uint32_t REVISION_HASH = ConstExprHashingUtils::HashString("REVISION");
        static constexpr uint32_t ASSET_HASH = ConstExprHashingUtils::HashString("ASSET");
        static constexpr uint32_t JOB_HASH = ConstExprHashingUtils::HashString("JOB");
        static constexpr uint32_t EVENT_ACTION_HASH = ConstExprHashingUtils::HashString("EVENT_ACTION");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == EVENT_ACTION_HASH)
          {
            return ResourceType::EVENT_ACTION;
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
          case ResourceType::DATA_SET:
            return "DATA_SET";
          case ResourceType::REVISION:
            return "REVISION";
          case ResourceType::ASSET:
            return "ASSET";
          case ResourceType::JOB:
            return "JOB";
          case ResourceType::EVENT_ACTION:
            return "EVENT_ACTION";
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
