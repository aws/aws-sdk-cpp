/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ManagedDataIdentifierSelector.h>
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
      namespace ManagedDataIdentifierSelectorMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");
        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t RECOMMENDED_HASH = ConstExprHashingUtils::HashString("RECOMMENDED");


        ManagedDataIdentifierSelector GetManagedDataIdentifierSelectorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ManagedDataIdentifierSelector::ALL;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return ManagedDataIdentifierSelector::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return ManagedDataIdentifierSelector::INCLUDE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ManagedDataIdentifierSelector::NONE;
          }
          else if (hashCode == RECOMMENDED_HASH)
          {
            return ManagedDataIdentifierSelector::RECOMMENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedDataIdentifierSelector>(hashCode);
          }

          return ManagedDataIdentifierSelector::NOT_SET;
        }

        Aws::String GetNameForManagedDataIdentifierSelector(ManagedDataIdentifierSelector enumValue)
        {
          switch(enumValue)
          {
          case ManagedDataIdentifierSelector::NOT_SET:
            return {};
          case ManagedDataIdentifierSelector::ALL:
            return "ALL";
          case ManagedDataIdentifierSelector::EXCLUDE:
            return "EXCLUDE";
          case ManagedDataIdentifierSelector::INCLUDE:
            return "INCLUDE";
          case ManagedDataIdentifierSelector::NONE:
            return "NONE";
          case ManagedDataIdentifierSelector::RECOMMENDED:
            return "RECOMMENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedDataIdentifierSelectorMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
