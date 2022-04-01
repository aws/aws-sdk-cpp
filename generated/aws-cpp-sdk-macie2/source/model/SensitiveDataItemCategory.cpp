/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SensitiveDataItemCategory.h>
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
      namespace SensitiveDataItemCategoryMapper
      {

        static const int FINANCIAL_INFORMATION_HASH = HashingUtils::HashString("FINANCIAL_INFORMATION");
        static const int PERSONAL_INFORMATION_HASH = HashingUtils::HashString("PERSONAL_INFORMATION");
        static const int CREDENTIALS_HASH = HashingUtils::HashString("CREDENTIALS");
        static const int CUSTOM_IDENTIFIER_HASH = HashingUtils::HashString("CUSTOM_IDENTIFIER");


        SensitiveDataItemCategory GetSensitiveDataItemCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINANCIAL_INFORMATION_HASH)
          {
            return SensitiveDataItemCategory::FINANCIAL_INFORMATION;
          }
          else if (hashCode == PERSONAL_INFORMATION_HASH)
          {
            return SensitiveDataItemCategory::PERSONAL_INFORMATION;
          }
          else if (hashCode == CREDENTIALS_HASH)
          {
            return SensitiveDataItemCategory::CREDENTIALS;
          }
          else if (hashCode == CUSTOM_IDENTIFIER_HASH)
          {
            return SensitiveDataItemCategory::CUSTOM_IDENTIFIER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SensitiveDataItemCategory>(hashCode);
          }

          return SensitiveDataItemCategory::NOT_SET;
        }

        Aws::String GetNameForSensitiveDataItemCategory(SensitiveDataItemCategory enumValue)
        {
          switch(enumValue)
          {
          case SensitiveDataItemCategory::FINANCIAL_INFORMATION:
            return "FINANCIAL_INFORMATION";
          case SensitiveDataItemCategory::PERSONAL_INFORMATION:
            return "PERSONAL_INFORMATION";
          case SensitiveDataItemCategory::CREDENTIALS:
            return "CREDENTIALS";
          case SensitiveDataItemCategory::CUSTOM_IDENTIFIER:
            return "CUSTOM_IDENTIFIER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SensitiveDataItemCategoryMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
