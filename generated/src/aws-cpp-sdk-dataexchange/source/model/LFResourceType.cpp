/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LFResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace LFResourceTypeMapper
      {

        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");


        LFResourceType GetLFResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLE_HASH)
          {
            return LFResourceType::TABLE;
          }
          else if (hashCode == DATABASE_HASH)
          {
            return LFResourceType::DATABASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LFResourceType>(hashCode);
          }

          return LFResourceType::NOT_SET;
        }

        Aws::String GetNameForLFResourceType(LFResourceType enumValue)
        {
          switch(enumValue)
          {
          case LFResourceType::TABLE:
            return "TABLE";
          case LFResourceType::DATABASE:
            return "DATABASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LFResourceTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
