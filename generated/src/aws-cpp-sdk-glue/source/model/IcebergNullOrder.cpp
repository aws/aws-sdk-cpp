/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergNullOrder.h>
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
      namespace IcebergNullOrderMapper
      {

        static const int nulls_first_HASH = HashingUtils::HashString("nulls-first");
        static const int nulls_last_HASH = HashingUtils::HashString("nulls-last");


        IcebergNullOrder GetIcebergNullOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nulls_first_HASH)
          {
            return IcebergNullOrder::nulls_first;
          }
          else if (hashCode == nulls_last_HASH)
          {
            return IcebergNullOrder::nulls_last;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergNullOrder>(hashCode);
          }

          return IcebergNullOrder::NOT_SET;
        }

        Aws::String GetNameForIcebergNullOrder(IcebergNullOrder enumValue)
        {
          switch(enumValue)
          {
          case IcebergNullOrder::NOT_SET:
            return {};
          case IcebergNullOrder::nulls_first:
            return "nulls-first";
          case IcebergNullOrder::nulls_last:
            return "nulls-last";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IcebergNullOrderMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
