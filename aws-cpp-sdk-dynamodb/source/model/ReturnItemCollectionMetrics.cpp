/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ReturnItemCollectionMetricsMapper
      {

        static const int SIZE_HASH = HashingUtils::HashString("SIZE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ReturnItemCollectionMetrics GetReturnItemCollectionMetricsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIZE_HASH)
          {
            return ReturnItemCollectionMetrics::SIZE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReturnItemCollectionMetrics::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReturnItemCollectionMetrics>(hashCode);
          }

          return ReturnItemCollectionMetrics::NOT_SET;
        }

        Aws::String GetNameForReturnItemCollectionMetrics(ReturnItemCollectionMetrics enumValue)
        {
          switch(enumValue)
          {
          case ReturnItemCollectionMetrics::SIZE:
            return "SIZE";
          case ReturnItemCollectionMetrics::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReturnItemCollectionMetricsMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
