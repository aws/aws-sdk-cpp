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

#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
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
      namespace ReturnValuesOnConditionCheckFailureMapper
      {

        static const int ALL_OLD_HASH = HashingUtils::HashString("ALL_OLD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ReturnValuesOnConditionCheckFailure GetReturnValuesOnConditionCheckFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_OLD_HASH)
          {
            return ReturnValuesOnConditionCheckFailure::ALL_OLD;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReturnValuesOnConditionCheckFailure::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReturnValuesOnConditionCheckFailure>(hashCode);
          }

          return ReturnValuesOnConditionCheckFailure::NOT_SET;
        }

        Aws::String GetNameForReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure enumValue)
        {
          switch(enumValue)
          {
          case ReturnValuesOnConditionCheckFailure::ALL_OLD:
            return "ALL_OLD";
          case ReturnValuesOnConditionCheckFailure::NONE:
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

      } // namespace ReturnValuesOnConditionCheckFailureMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
