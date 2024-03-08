/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DatasetKind.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace DatasetKindMapper
      {

        static const int TABULAR_HASH = HashingUtils::HashString("TABULAR");
        static const int NON_TABULAR_HASH = HashingUtils::HashString("NON_TABULAR");


        DatasetKind GetDatasetKindForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABULAR_HASH)
          {
            return DatasetKind::TABULAR;
          }
          else if (hashCode == NON_TABULAR_HASH)
          {
            return DatasetKind::NON_TABULAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetKind>(hashCode);
          }

          return DatasetKind::NOT_SET;
        }

        Aws::String GetNameForDatasetKind(DatasetKind enumValue)
        {
          switch(enumValue)
          {
          case DatasetKind::NOT_SET:
            return {};
          case DatasetKind::TABULAR:
            return "TABULAR";
          case DatasetKind::NON_TABULAR:
            return "NON_TABULAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetKindMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
