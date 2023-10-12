/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabasePasswordVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace RelationalDatabasePasswordVersionMapper
      {

        static constexpr uint32_t CURRENT_HASH = ConstExprHashingUtils::HashString("CURRENT");
        static constexpr uint32_t PREVIOUS_HASH = ConstExprHashingUtils::HashString("PREVIOUS");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        RelationalDatabasePasswordVersion GetRelationalDatabasePasswordVersionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return RelationalDatabasePasswordVersion::CURRENT;
          }
          else if (hashCode == PREVIOUS_HASH)
          {
            return RelationalDatabasePasswordVersion::PREVIOUS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return RelationalDatabasePasswordVersion::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationalDatabasePasswordVersion>(hashCode);
          }

          return RelationalDatabasePasswordVersion::NOT_SET;
        }

        Aws::String GetNameForRelationalDatabasePasswordVersion(RelationalDatabasePasswordVersion enumValue)
        {
          switch(enumValue)
          {
          case RelationalDatabasePasswordVersion::NOT_SET:
            return {};
          case RelationalDatabasePasswordVersion::CURRENT:
            return "CURRENT";
          case RelationalDatabasePasswordVersion::PREVIOUS:
            return "PREVIOUS";
          case RelationalDatabasePasswordVersion::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationalDatabasePasswordVersionMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
