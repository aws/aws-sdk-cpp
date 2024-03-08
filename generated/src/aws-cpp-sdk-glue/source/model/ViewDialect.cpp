/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ViewDialect.h>
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
      namespace ViewDialectMapper
      {

        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int SPARK_HASH = HashingUtils::HashString("SPARK");


        ViewDialect GetViewDialectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_HASH)
          {
            return ViewDialect::REDSHIFT;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return ViewDialect::ATHENA;
          }
          else if (hashCode == SPARK_HASH)
          {
            return ViewDialect::SPARK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewDialect>(hashCode);
          }

          return ViewDialect::NOT_SET;
        }

        Aws::String GetNameForViewDialect(ViewDialect enumValue)
        {
          switch(enumValue)
          {
          case ViewDialect::NOT_SET:
            return {};
          case ViewDialect::REDSHIFT:
            return "REDSHIFT";
          case ViewDialect::ATHENA:
            return "ATHENA";
          case ViewDialect::SPARK:
            return "SPARK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewDialectMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
