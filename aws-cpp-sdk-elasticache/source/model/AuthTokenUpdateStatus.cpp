/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AuthTokenUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace AuthTokenUpdateStatusMapper
      {

        static const int SETTING_HASH = HashingUtils::HashString("SETTING");
        static const int ROTATING_HASH = HashingUtils::HashString("ROTATING");


        AuthTokenUpdateStatus GetAuthTokenUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SETTING_HASH)
          {
            return AuthTokenUpdateStatus::SETTING;
          }
          else if (hashCode == ROTATING_HASH)
          {
            return AuthTokenUpdateStatus::ROTATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthTokenUpdateStatus>(hashCode);
          }

          return AuthTokenUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForAuthTokenUpdateStatus(AuthTokenUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case AuthTokenUpdateStatus::SETTING:
            return "SETTING";
          case AuthTokenUpdateStatus::ROTATING:
            return "ROTATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTokenUpdateStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
