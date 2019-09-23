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

#include <aws/rds-data/model/DecimalReturnType.h>
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
      namespace DecimalReturnTypeMapper
      {

        static const int DOUBLE_OR_LONG_HASH = HashingUtils::HashString("DOUBLE_OR_LONG");
        static const int STRING_HASH = HashingUtils::HashString("STRING");


        DecimalReturnType GetDecimalReturnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOUBLE_OR_LONG_HASH)
          {
            return DecimalReturnType::DOUBLE_OR_LONG;
          }
          else if (hashCode == STRING_HASH)
          {
            return DecimalReturnType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecimalReturnType>(hashCode);
          }

          return DecimalReturnType::NOT_SET;
        }

        Aws::String GetNameForDecimalReturnType(DecimalReturnType enumValue)
        {
          switch(enumValue)
          {
          case DecimalReturnType::DOUBLE_OR_LONG:
            return "DOUBLE_OR_LONG";
          case DecimalReturnType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecimalReturnTypeMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws
