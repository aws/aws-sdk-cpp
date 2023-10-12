/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DataIdentifierSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace DataIdentifierSeverityMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        DataIdentifierSeverity GetDataIdentifierSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return DataIdentifierSeverity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return DataIdentifierSeverity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return DataIdentifierSeverity::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIdentifierSeverity>(hashCode);
          }

          return DataIdentifierSeverity::NOT_SET;
        }

        Aws::String GetNameForDataIdentifierSeverity(DataIdentifierSeverity enumValue)
        {
          switch(enumValue)
          {
          case DataIdentifierSeverity::NOT_SET:
            return {};
          case DataIdentifierSeverity::LOW:
            return "LOW";
          case DataIdentifierSeverity::MEDIUM:
            return "MEDIUM";
          case DataIdentifierSeverity::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIdentifierSeverityMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
