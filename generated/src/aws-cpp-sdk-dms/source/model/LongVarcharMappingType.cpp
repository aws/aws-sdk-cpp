/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/LongVarcharMappingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace LongVarcharMappingTypeMapper
      {

        static const int wstring_HASH = HashingUtils::HashString("wstring");
        static const int clob_HASH = HashingUtils::HashString("clob");
        static const int nclob_HASH = HashingUtils::HashString("nclob");


        LongVarcharMappingType GetLongVarcharMappingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == wstring_HASH)
          {
            return LongVarcharMappingType::wstring;
          }
          else if (hashCode == clob_HASH)
          {
            return LongVarcharMappingType::clob;
          }
          else if (hashCode == nclob_HASH)
          {
            return LongVarcharMappingType::nclob;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LongVarcharMappingType>(hashCode);
          }

          return LongVarcharMappingType::NOT_SET;
        }

        Aws::String GetNameForLongVarcharMappingType(LongVarcharMappingType enumValue)
        {
          switch(enumValue)
          {
          case LongVarcharMappingType::NOT_SET:
            return {};
          case LongVarcharMappingType::wstring:
            return "wstring";
          case LongVarcharMappingType::clob:
            return "clob";
          case LongVarcharMappingType::nclob:
            return "nclob";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LongVarcharMappingTypeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
