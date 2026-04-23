/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/es/model/ReservedElasticsearchInstancePaymentOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace ReservedElasticsearchInstancePaymentOptionMapper
      {

        static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
        static const int PARTIAL_UPFRONT_HASH = HashingUtils::HashString("PARTIAL_UPFRONT");
        static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");


        ReservedElasticsearchInstancePaymentOption GetReservedElasticsearchInstancePaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_UPFRONT_HASH)
          {
            return ReservedElasticsearchInstancePaymentOption::ALL_UPFRONT;
          }
          else if (hashCode == PARTIAL_UPFRONT_HASH)
          {
            return ReservedElasticsearchInstancePaymentOption::PARTIAL_UPFRONT;
          }
          else if (hashCode == NO_UPFRONT_HASH)
          {
            return ReservedElasticsearchInstancePaymentOption::NO_UPFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedElasticsearchInstancePaymentOption>(hashCode);
          }

          return ReservedElasticsearchInstancePaymentOption::NOT_SET;
        }

        Aws::String GetNameForReservedElasticsearchInstancePaymentOption(ReservedElasticsearchInstancePaymentOption enumValue)
        {
          switch(enumValue)
          {
          case ReservedElasticsearchInstancePaymentOption::ALL_UPFRONT:
            return "ALL_UPFRONT";
          case ReservedElasticsearchInstancePaymentOption::PARTIAL_UPFRONT:
            return "PARTIAL_UPFRONT";
          case ReservedElasticsearchInstancePaymentOption::NO_UPFRONT:
            return "NO_UPFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedElasticsearchInstancePaymentOptionMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
