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
#include <aws/clouddirectory/model/FacetAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace FacetAttributeTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int BINARY_HASH = HashingUtils::HashString("BINARY");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");


        FacetAttributeType GetFacetAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return FacetAttributeType::STRING;
          }
          else if (hashCode == BINARY_HASH)
          {
            return FacetAttributeType::BINARY;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return FacetAttributeType::BOOLEAN;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return FacetAttributeType::NUMBER;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return FacetAttributeType::DATETIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FacetAttributeType>(hashCode);
          }

          return FacetAttributeType::NOT_SET;
        }

        Aws::String GetNameForFacetAttributeType(FacetAttributeType enumValue)
        {
          switch(enumValue)
          {
          case FacetAttributeType::STRING:
            return "STRING";
          case FacetAttributeType::BINARY:
            return "BINARY";
          case FacetAttributeType::BOOLEAN:
            return "BOOLEAN";
          case FacetAttributeType::NUMBER:
            return "NUMBER";
          case FacetAttributeType::DATETIME:
            return "DATETIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FacetAttributeTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
