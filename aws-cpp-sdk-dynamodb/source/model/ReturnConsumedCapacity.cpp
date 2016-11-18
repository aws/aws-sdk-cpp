/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
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
      namespace ReturnConsumedCapacityMapper
      {

        static const int INDEXES_HASH = HashingUtils::HashString("INDEXES");
        static const int TOTAL_HASH = HashingUtils::HashString("TOTAL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ReturnConsumedCapacity GetReturnConsumedCapacityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEXES_HASH)
          {
            return ReturnConsumedCapacity::INDEXES;
          }
          else if (hashCode == TOTAL_HASH)
          {
            return ReturnConsumedCapacity::TOTAL;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReturnConsumedCapacity::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReturnConsumedCapacity>(hashCode);
          }

          return ReturnConsumedCapacity::NOT_SET;
        }

        Aws::String GetNameForReturnConsumedCapacity(ReturnConsumedCapacity enumValue)
        {
          switch(enumValue)
          {
          case ReturnConsumedCapacity::INDEXES:
            return "INDEXES";
          case ReturnConsumedCapacity::TOTAL:
            return "TOTAL";
          case ReturnConsumedCapacity::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReturnConsumedCapacityMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
