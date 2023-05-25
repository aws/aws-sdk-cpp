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

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int NAMESPACE_HASH = HashingUtils::HashString("NAMESPACE");
        static const int SEMANTIC_TYPE_PATH_HASH = HashingUtils::HashString("SEMANTIC_TYPE_PATH");
        static const int REFERENCED_ENTITY_ID_HASH = HashingUtils::HashString("REFERENCED_ENTITY_ID");


        EntityFilterName GetEntityFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
