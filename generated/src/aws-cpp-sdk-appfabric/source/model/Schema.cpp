/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Schema.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace SchemaMapper
      {

        static const int ocsf_HASH = HashingUtils::HashString("ocsf");
        static const int raw_HASH = HashingUtils::HashString("raw");


        Schema GetSchemaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ocsf_HASH)
          {
            return Schema::ocsf;
          }
          else if (hashCode == raw_HASH)
          {
            return Schema::raw;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Schema>(hashCode);
          }

          return Schema::NOT_SET;
        }

        Aws::String GetNameForSchema(Schema enumValue)
        {
          switch(enumValue)
          {
          case Schema::NOT_SET:
            return {};
          case Schema::ocsf:
            return "ocsf";
          case Schema::raw:
            return "raw";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
