/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateCatalogBehavior.h>
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
      namespace UpdateCatalogBehaviorMapper
      {

        static const int UPDATE_IN_DATABASE_HASH = HashingUtils::HashString("UPDATE_IN_DATABASE");
        static const int LOG_HASH = HashingUtils::HashString("LOG");


        UpdateCatalogBehavior GetUpdateCatalogBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_IN_DATABASE_HASH)
          {
            return UpdateCatalogBehavior::UPDATE_IN_DATABASE;
          }
          else if (hashCode == LOG_HASH)
          {
            return UpdateCatalogBehavior::LOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateCatalogBehavior>(hashCode);
          }

          return UpdateCatalogBehavior::NOT_SET;
        }

        Aws::String GetNameForUpdateCatalogBehavior(UpdateCatalogBehavior enumValue)
        {
          switch(enumValue)
          {
          case UpdateCatalogBehavior::NOT_SET:
            return {};
          case UpdateCatalogBehavior::UPDATE_IN_DATABASE:
            return "UPDATE_IN_DATABASE";
          case UpdateCatalogBehavior::LOG:
            return "LOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateCatalogBehaviorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
