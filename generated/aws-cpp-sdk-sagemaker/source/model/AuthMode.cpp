/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AuthMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AuthModeMapper
      {

        static const int SSO_HASH = HashingUtils::HashString("SSO");
        static const int IAM_HASH = HashingUtils::HashString("IAM");


        AuthMode GetAuthModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSO_HASH)
          {
            return AuthMode::SSO;
          }
          else if (hashCode == IAM_HASH)
          {
            return AuthMode::IAM;
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
          case AuthMode::SSO:
            return "SSO";
          case AuthMode::IAM:
            return "IAM";
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
  } // namespace SageMaker
} // namespace Aws
