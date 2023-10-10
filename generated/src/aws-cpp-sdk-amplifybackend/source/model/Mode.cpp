/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/Mode.h>
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
      namespace ModeMapper
      {

        static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");
        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");
        static const int AMAZON_COGNITO_USER_POOLS_HASH = HashingUtils::HashString("AMAZON_COGNITO_USER_POOLS");
        static const int OPENID_CONNECT_HASH = HashingUtils::HashString("OPENID_CONNECT");


        Mode GetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_KEY_HASH)
          {
            return Mode::API_KEY;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return Mode::AWS_IAM;
          }
          else if (hashCode == AMAZON_COGNITO_USER_POOLS_HASH)
          {
            return Mode::AMAZON_COGNITO_USER_POOLS;
          }
          else if (hashCode == OPENID_CONNECT_HASH)
          {
            return Mode::OPENID_CONNECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mode>(hashCode);
          }

          return Mode::NOT_SET;
        }

        Aws::String GetNameForMode(Mode enumValue)
        {
          switch(enumValue)
          {
          case Mode::NOT_SET:
            return {};
          case Mode::API_KEY:
            return "API_KEY";
          case Mode::AWS_IAM:
            return "AWS_IAM";
          case Mode::AMAZON_COGNITO_USER_POOLS:
            return "AMAZON_COGNITO_USER_POOLS";
          case Mode::OPENID_CONNECT:
            return "OPENID_CONNECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModeMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
