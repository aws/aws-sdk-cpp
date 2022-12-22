/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DataIdentifierType.h>
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
      namespace DataIdentifierTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");


        DataIdentifierType GetDataIdentifierTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return DataIdentifierType::CUSTOM;
          }
          else if (hashCode == MANAGED_HASH)
          {
            return DataIdentifierType::MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIdentifierType>(hashCode);
          }

          return DataIdentifierType::NOT_SET;
        }

        Aws::String GetNameForDataIdentifierType(DataIdentifierType enumValue)
        {
          switch(enumValue)
          {
          case DataIdentifierType::CUSTOM:
            return "CUSTOM";
          case DataIdentifierType::MANAGED:
            return "MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIdentifierTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
