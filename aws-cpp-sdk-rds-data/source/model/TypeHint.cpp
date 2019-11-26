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

#include <aws/rds-data/model/TypeHint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDSDataService
  {
    namespace Model
    {
      namespace TypeHintMapper
      {

        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int TIME_HASH = HashingUtils::HashString("TIME");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        TypeHint GetTypeHintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATE_HASH)
          {
            return TypeHint::DATE;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return TypeHint::DECIMAL;
          }
          else if (hashCode == TIME_HASH)
          {
            return TypeHint::TIME;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return TypeHint::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypeHint>(hashCode);
          }

          return TypeHint::NOT_SET;
        }

        Aws::String GetNameForTypeHint(TypeHint enumValue)
        {
          switch(enumValue)
          {
          case TypeHint::DATE:
            return "DATE";
          case TypeHint::DECIMAL:
            return "DECIMAL";
          case TypeHint::TIME:
            return "TIME";
          case TypeHint::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeHintMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws
