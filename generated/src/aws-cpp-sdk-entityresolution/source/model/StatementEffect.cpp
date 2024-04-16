/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/StatementEffect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace StatementEffectMapper
      {

        static const int Allow_HASH = HashingUtils::HashString("Allow");
        static const int Deny_HASH = HashingUtils::HashString("Deny");


        StatementEffect GetStatementEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allow_HASH)
          {
            return StatementEffect::Allow;
          }
          else if (hashCode == Deny_HASH)
          {
            return StatementEffect::Deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatementEffect>(hashCode);
          }

          return StatementEffect::NOT_SET;
        }

        Aws::String GetNameForStatementEffect(StatementEffect enumValue)
        {
          switch(enumValue)
          {
          case StatementEffect::NOT_SET:
            return {};
          case StatementEffect::Allow:
            return "Allow";
          case StatementEffect::Deny:
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

      } // namespace StatementEffectMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
