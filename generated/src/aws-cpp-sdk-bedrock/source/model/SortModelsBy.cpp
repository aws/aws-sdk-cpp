/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SortModelsBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace SortModelsByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortModelsBy GetSortModelsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SortModelsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortModelsBy>(hashCode);
          }

          return SortModelsBy::NOT_SET;
        }

        Aws::String GetNameForSortModelsBy(SortModelsBy enumValue)
        {
          switch(enumValue)
          {
          case SortModelsBy::NOT_SET:
            return {};
          case SortModelsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortModelsByMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
