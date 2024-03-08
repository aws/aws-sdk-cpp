/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/MissingAttributeKeyStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace MissingAttributeKeyStrategyMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int COLLAPSE_HASH = HashingUtils::HashString("COLLAPSE");
        static const int EXPAND_HASH = HashingUtils::HashString("EXPAND");


        MissingAttributeKeyStrategy GetMissingAttributeKeyStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return MissingAttributeKeyStrategy::IGNORE;
          }
          else if (hashCode == COLLAPSE_HASH)
          {
            return MissingAttributeKeyStrategy::COLLAPSE;
          }
          else if (hashCode == EXPAND_HASH)
          {
            return MissingAttributeKeyStrategy::EXPAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MissingAttributeKeyStrategy>(hashCode);
          }

          return MissingAttributeKeyStrategy::NOT_SET;
        }

        Aws::String GetNameForMissingAttributeKeyStrategy(MissingAttributeKeyStrategy enumValue)
        {
          switch(enumValue)
          {
          case MissingAttributeKeyStrategy::NOT_SET:
            return {};
          case MissingAttributeKeyStrategy::IGNORE:
            return "IGNORE";
          case MissingAttributeKeyStrategy::COLLAPSE:
            return "COLLAPSE";
          case MissingAttributeKeyStrategy::EXPAND:
            return "EXPAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MissingAttributeKeyStrategyMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
