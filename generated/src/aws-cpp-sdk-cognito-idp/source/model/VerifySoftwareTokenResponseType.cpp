/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/VerifySoftwareTokenResponseType.h>
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
      namespace VerifySoftwareTokenResponseTypeMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        VerifySoftwareTokenResponseType GetVerifySoftwareTokenResponseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return VerifySoftwareTokenResponseType::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return VerifySoftwareTokenResponseType::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifySoftwareTokenResponseType>(hashCode);
          }

          return VerifySoftwareTokenResponseType::NOT_SET;
        }

        Aws::String GetNameForVerifySoftwareTokenResponseType(VerifySoftwareTokenResponseType enumValue)
        {
          switch(enumValue)
          {
          case VerifySoftwareTokenResponseType::SUCCESS:
            return "SUCCESS";
          case VerifySoftwareTokenResponseType::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifySoftwareTokenResponseTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
