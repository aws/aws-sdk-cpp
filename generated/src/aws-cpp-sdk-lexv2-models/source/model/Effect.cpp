/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/Effect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace EffectMapper
      {

        static const int Allow_HASH = HashingUtils::HashString("Allow");
        static const int Deny_HASH = HashingUtils::HashString("Deny");


        Effect GetEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allow_HASH)
          {
            return Effect::Allow;
          }
          else if (hashCode == Deny_HASH)
          {
            return Effect::Deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Effect>(hashCode);
          }

          return Effect::NOT_SET;
        }

        Aws::String GetNameForEffect(Effect enumValue)
        {
          switch(enumValue)
          {
          case Effect::NOT_SET:
            return {};
          case Effect::Allow:
            return "Allow";
          case Effect::Deny:
            return "Deny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EffectMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
