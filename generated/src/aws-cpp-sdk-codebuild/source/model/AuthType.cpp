﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/AuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace AuthTypeMapper
      {

        static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");
        static const int BASIC_AUTH_HASH = HashingUtils::HashString("BASIC_AUTH");
        static const int PERSONAL_ACCESS_TOKEN_HASH = HashingUtils::HashString("PERSONAL_ACCESS_TOKEN");
        static const int CODECONNECTIONS_HASH = HashingUtils::HashString("CODECONNECTIONS");
        static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");


        AuthType GetAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OAUTH_HASH)
          {
            return AuthType::OAUTH;
          }
          else if (hashCode == BASIC_AUTH_HASH)
          {
            return AuthType::BASIC_AUTH;
          }
          else if (hashCode == PERSONAL_ACCESS_TOKEN_HASH)
          {
            return AuthType::PERSONAL_ACCESS_TOKEN;
          }
          else if (hashCode == CODECONNECTIONS_HASH)
          {
            return AuthType::CODECONNECTIONS;
          }
          else if (hashCode == SECRETS_MANAGER_HASH)
          {
            return AuthType::SECRETS_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthType>(hashCode);
          }

          return AuthType::NOT_SET;
        }

        Aws::String GetNameForAuthType(AuthType enumValue)
        {
          switch(enumValue)
          {
          case AuthType::NOT_SET:
            return {};
          case AuthType::OAUTH:
            return "OAUTH";
          case AuthType::BASIC_AUTH:
            return "BASIC_AUTH";
          case AuthType::PERSONAL_ACCESS_TOKEN:
            return "PERSONAL_ACCESS_TOKEN";
          case AuthType::CODECONNECTIONS:
            return "CODECONNECTIONS";
          case AuthType::SECRETS_MANAGER:
            return "SECRETS_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
