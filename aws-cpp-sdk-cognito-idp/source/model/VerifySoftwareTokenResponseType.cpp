/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
