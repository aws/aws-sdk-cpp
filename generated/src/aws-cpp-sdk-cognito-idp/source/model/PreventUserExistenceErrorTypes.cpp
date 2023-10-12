/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/PreventUserExistenceErrorTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace PreventUserExistenceErrorTypesMapper
      {

        static constexpr uint32_t LEGACY_HASH = ConstExprHashingUtils::HashString("LEGACY");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        PreventUserExistenceErrorTypes GetPreventUserExistenceErrorTypesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEGACY_HASH)
          {
            return PreventUserExistenceErrorTypes::LEGACY;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return PreventUserExistenceErrorTypes::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreventUserExistenceErrorTypes>(hashCode);
          }

          return PreventUserExistenceErrorTypes::NOT_SET;
        }

        Aws::String GetNameForPreventUserExistenceErrorTypes(PreventUserExistenceErrorTypes enumValue)
        {
          switch(enumValue)
          {
          case PreventUserExistenceErrorTypes::NOT_SET:
            return {};
          case PreventUserExistenceErrorTypes::LEGACY:
            return "LEGACY";
          case PreventUserExistenceErrorTypes::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreventUserExistenceErrorTypesMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
