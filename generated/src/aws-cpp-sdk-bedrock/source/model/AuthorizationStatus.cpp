/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AuthorizationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AuthorizationStatusMapper
      {

        static const int AUTHORIZED_HASH = HashingUtils::HashString("AUTHORIZED");
        static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NOT_AUTHORIZED");


        AuthorizationStatus GetAuthorizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHORIZED_HASH)
          {
            return AuthorizationStatus::AUTHORIZED;
          }
          else if (hashCode == NOT_AUTHORIZED_HASH)
          {
            return AuthorizationStatus::NOT_AUTHORIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationStatus>(hashCode);
          }

          return AuthorizationStatus::NOT_SET;
        }

        Aws::String GetNameForAuthorizationStatus(AuthorizationStatus enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationStatus::NOT_SET:
            return {};
          case AuthorizationStatus::AUTHORIZED:
            return "AUTHORIZED";
          case AuthorizationStatus::NOT_AUTHORIZED:
            return "NOT_AUTHORIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
