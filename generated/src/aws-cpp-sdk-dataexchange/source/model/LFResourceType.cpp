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

        static constexpr uint32_t TABLE_HASH = ConstExprHashingUtils::HashString("TABLE");
        static constexpr uint32_t DATABASE_HASH = ConstExprHashingUtils::HashString("DATABASE");


        LFResourceType GetLFResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LFResourceType::NOT_SET:
            return {};
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
