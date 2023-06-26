/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CatalogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace CatalogTypeMapper
      {

        static const int GLUE_HASH = HashingUtils::HashString("GLUE");


        CatalogType GetCatalogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GLUE_HASH)
          {
            return CatalogType::GLUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CatalogType>(hashCode);
          }

          return CatalogType::NOT_SET;
        }

        Aws::String GetNameForCatalogType(CatalogType enumValue)
        {
          switch(enumValue)
          {
          case CatalogType::GLUE:
            return "GLUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CatalogTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
