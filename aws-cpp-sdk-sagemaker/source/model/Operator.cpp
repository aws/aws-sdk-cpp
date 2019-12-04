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

#include <aws/sagemaker/model/Operator.h>
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
      namespace OperatorMapper
      {

        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int GreaterThanOrEqualTo_HASH = HashingUtils::HashString("GreaterThanOrEqualTo");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int LessThanOrEqualTo_HASH = HashingUtils::HashString("LessThanOrEqualTo");
        static const int Contains_HASH = HashingUtils::HashString("Contains");
        static const int Exists_HASH = HashingUtils::HashString("Exists");
        static const int NotExists_HASH = HashingUtils::HashString("NotExists");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return Operator::Equals;
          }
          else if (hashCode == NotEquals_HASH)
          {
            return Operator::NotEquals;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return Operator::GreaterThan;
          }
          else if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return Operator::GreaterThanOrEqualTo;
          }
          else if (hashCode == LessThan_HASH)
          {
            return Operator::LessThan;
          }
          else if (hashCode == LessThanOrEqualTo_HASH)
          {
            return Operator::LessThanOrEqualTo;
          }
          else if (hashCode == Contains_HASH)
          {
            return Operator::Contains;
          }
          else if (hashCode == Exists_HASH)
          {
            return Operator::Exists;
          }
          else if (hashCode == NotExists_HASH)
          {
            return Operator::NotExists;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operator>(hashCode);
          }

          return Operator::NOT_SET;
        }

        Aws::String GetNameForOperator(Operator enumValue)
        {
          switch(enumValue)
          {
          case Operator::Equals:
            return "Equals";
          case Operator::NotEquals:
            return "NotEquals";
          case Operator::GreaterThan:
            return "GreaterThan";
          case Operator::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          case Operator::LessThan:
            return "LessThan";
          case Operator::LessThanOrEqualTo:
            return "LessThanOrEqualTo";
          case Operator::Contains:
            return "Contains";
          case Operator::Exists:
            return "Exists";
          case Operator::NotExists:
            return "NotExists";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
