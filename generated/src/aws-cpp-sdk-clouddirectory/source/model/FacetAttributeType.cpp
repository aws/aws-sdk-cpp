/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t BINARY_HASH = ConstExprHashingUtils::HashString("BINARY");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t NUMBER_HASH = ConstExprHashingUtils::HashString("NUMBER");
        static constexpr uint32_t DATETIME_HASH = ConstExprHashingUtils::HashString("DATETIME");
        static constexpr uint32_t VARIANT_HASH = ConstExprHashingUtils::HashString("VARIANT");


        FacetAttributeType GetFacetAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == VARIANT_HASH)
          {
            return FacetAttributeType::VARIANT;
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
          case FacetAttributeType::NOT_SET:
            return {};
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
          case FacetAttributeType::VARIANT:
            return "VARIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FacetAttributeTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
