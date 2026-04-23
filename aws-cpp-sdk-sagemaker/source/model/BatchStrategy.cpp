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

#include <aws/sagemaker/model/BatchStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace BatchStrategyMapper
      {

        static const int MultiRecord_HASH = HashingUtils::HashString("MultiRecord");
        static const int SingleRecord_HASH = HashingUtils::HashString("SingleRecord");


        BatchStrategy GetBatchStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MultiRecord_HASH)
          {
            return BatchStrategy::MultiRecord;
          }
          else if (hashCode == SingleRecord_HASH)
          {
            return BatchStrategy::SingleRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchStrategy>(hashCode);
          }

          return BatchStrategy::NOT_SET;
        }

        Aws::String GetNameForBatchStrategy(BatchStrategy enumValue)
        {
          switch(enumValue)
          {
          case BatchStrategy::MultiRecord:
            return "MultiRecord";
          case BatchStrategy::SingleRecord:
            return "SingleRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchStrategyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
