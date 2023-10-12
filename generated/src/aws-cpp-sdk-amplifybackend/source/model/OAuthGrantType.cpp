/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/OAuthGrantType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace OAuthGrantTypeMapper
      {

        static constexpr uint32_t CODE_HASH = ConstExprHashingUtils::HashString("CODE");
        static constexpr uint32_t IMPLICIT_HASH = ConstExprHashingUtils::HashString("IMPLICIT");


        OAuthGrantType GetOAuthGrantTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODE_HASH)
          {
            return OAuthGrantType::CODE;
          }
          else if (hashCode == IMPLICIT_HASH)
          {
            return OAuthGrantType::IMPLICIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OAuthGrantType>(hashCode);
          }

          return OAuthGrantType::NOT_SET;
        }

        Aws::String GetNameForOAuthGrantType(OAuthGrantType enumValue)
        {
          switch(enumValue)
          {
          case OAuthGrantType::NOT_SET:
            return {};
          case OAuthGrantType::CODE:
            return "CODE";
          case OAuthGrantType::IMPLICIT:
            return "IMPLICIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OAuthGrantTypeMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
