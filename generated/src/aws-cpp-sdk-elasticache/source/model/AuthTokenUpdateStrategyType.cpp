/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AuthTokenUpdateStrategyType.h>
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
      namespace AuthTokenUpdateStrategyTypeMapper
      {

        static const int SET_HASH = HashingUtils::HashString("SET");
        static const int ROTATE_HASH = HashingUtils::HashString("ROTATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        AuthTokenUpdateStrategyType GetAuthTokenUpdateStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SET_HASH)
          {
            return AuthTokenUpdateStrategyType::SET;
          }
          else if (hashCode == ROTATE_HASH)
          {
            return AuthTokenUpdateStrategyType::ROTATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return AuthTokenUpdateStrategyType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthTokenUpdateStrategyType>(hashCode);
          }

          return AuthTokenUpdateStrategyType::NOT_SET;
        }

        Aws::String GetNameForAuthTokenUpdateStrategyType(AuthTokenUpdateStrategyType enumValue)
        {
          switch(enumValue)
          {
          case AuthTokenUpdateStrategyType::SET:
            return "SET";
          case AuthTokenUpdateStrategyType::ROTATE:
            return "ROTATE";
          case AuthTokenUpdateStrategyType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTokenUpdateStrategyTypeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
