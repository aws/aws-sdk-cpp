/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AuthMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace AuthModeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int SSO_HASH = HashingUtils::HashString("SSO");


        AuthMode GetAuthModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return AuthMode::IAM;
          }
          else if (hashCode == SSO_HASH)
          {
            return AuthMode::SSO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthMode>(hashCode);
          }

          return AuthMode::NOT_SET;
        }

        Aws::String GetNameForAuthMode(AuthMode enumValue)
        {
          switch(enumValue)
          {
          case AuthMode::IAM:
            return "IAM";
          case AuthMode::SSO:
            return "SSO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthModeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
