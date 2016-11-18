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
#include <aws/datapipeline/model/OperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataPipeline
  {
    namespace Model
    {
      namespace OperatorTypeMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int REF_EQ_HASH = HashingUtils::HashString("REF_EQ");
        static const int LE_HASH = HashingUtils::HashString("LE");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        OperatorType GetOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return OperatorType::EQ;
          }
          else if (hashCode == REF_EQ_HASH)
          {
            return OperatorType::REF_EQ;
          }
          else if (hashCode == LE_HASH)
          {
            return OperatorType::LE;
          }
          else if (hashCode == GE_HASH)
          {
            return OperatorType::GE;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return OperatorType::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatorType>(hashCode);
          }

          return OperatorType::NOT_SET;
        }

        Aws::String GetNameForOperatorType(OperatorType enumValue)
        {
          switch(enumValue)
          {
          case OperatorType::EQ:
            return "EQ";
          case OperatorType::REF_EQ:
            return "REF_EQ";
          case OperatorType::LE:
            return "LE";
          case OperatorType::GE:
            return "GE";
          case OperatorType::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OperatorTypeMapper
    } // namespace Model
  } // namespace DataPipeline
} // namespace Aws
