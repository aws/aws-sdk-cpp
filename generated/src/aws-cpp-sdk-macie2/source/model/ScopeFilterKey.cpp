/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ScopeFilterKey.h>
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
      namespace ScopeFilterKeyMapper
      {

        static constexpr uint32_t OBJECT_EXTENSION_HASH = ConstExprHashingUtils::HashString("OBJECT_EXTENSION");
        static constexpr uint32_t OBJECT_LAST_MODIFIED_DATE_HASH = ConstExprHashingUtils::HashString("OBJECT_LAST_MODIFIED_DATE");
        static constexpr uint32_t OBJECT_SIZE_HASH = ConstExprHashingUtils::HashString("OBJECT_SIZE");
        static constexpr uint32_t OBJECT_KEY_HASH = ConstExprHashingUtils::HashString("OBJECT_KEY");


        ScopeFilterKey GetScopeFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OBJECT_EXTENSION_HASH)
          {
            return ScopeFilterKey::OBJECT_EXTENSION;
          }
          else if (hashCode == OBJECT_LAST_MODIFIED_DATE_HASH)
          {
            return ScopeFilterKey::OBJECT_LAST_MODIFIED_DATE;
          }
          else if (hashCode == OBJECT_SIZE_HASH)
          {
            return ScopeFilterKey::OBJECT_SIZE;
          }
          else if (hashCode == OBJECT_KEY_HASH)
          {
            return ScopeFilterKey::OBJECT_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopeFilterKey>(hashCode);
          }

          return ScopeFilterKey::NOT_SET;
        }

        Aws::String GetNameForScopeFilterKey(ScopeFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ScopeFilterKey::NOT_SET:
            return {};
          case ScopeFilterKey::OBJECT_EXTENSION:
            return "OBJECT_EXTENSION";
          case ScopeFilterKey::OBJECT_LAST_MODIFIED_DATE:
            return "OBJECT_LAST_MODIFIED_DATE";
          case ScopeFilterKey::OBJECT_SIZE:
            return "OBJECT_SIZE";
          case ScopeFilterKey::OBJECT_KEY:
            return "OBJECT_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeFilterKeyMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
