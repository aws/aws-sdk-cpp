/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/EntityFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace EntityFilterNameMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t NAMESPACE_HASH = ConstExprHashingUtils::HashString("NAMESPACE");
        static constexpr uint32_t SEMANTIC_TYPE_PATH_HASH = ConstExprHashingUtils::HashString("SEMANTIC_TYPE_PATH");
        static constexpr uint32_t REFERENCED_ENTITY_ID_HASH = ConstExprHashingUtils::HashString("REFERENCED_ENTITY_ID");


        EntityFilterName GetEntityFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return EntityFilterName::NAME;
          }
          else if (hashCode == NAMESPACE_HASH)
          {
            return EntityFilterName::NAMESPACE;
          }
          else if (hashCode == SEMANTIC_TYPE_PATH_HASH)
          {
            return EntityFilterName::SEMANTIC_TYPE_PATH;
          }
          else if (hashCode == REFERENCED_ENTITY_ID_HASH)
          {
            return EntityFilterName::REFERENCED_ENTITY_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityFilterName>(hashCode);
          }

          return EntityFilterName::NOT_SET;
        }

        Aws::String GetNameForEntityFilterName(EntityFilterName enumValue)
        {
          switch(enumValue)
          {
          case EntityFilterName::NOT_SET:
            return {};
          case EntityFilterName::NAME:
            return "NAME";
          case EntityFilterName::NAMESPACE:
            return "NAMESPACE";
          case EntityFilterName::SEMANTIC_TYPE_PATH:
            return "SEMANTIC_TYPE_PATH";
          case EntityFilterName::REFERENCED_ENTITY_ID:
            return "REFERENCED_ENTITY_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityFilterNameMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
