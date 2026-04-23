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

#include <aws/cognito-idp/model/UsernameAttributeType.h>
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
      namespace UsernameAttributeTypeMapper
      {

        static const int phone_number_HASH = HashingUtils::HashString("phone_number");
        static const int email_HASH = HashingUtils::HashString("email");


        UsernameAttributeType GetUsernameAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == phone_number_HASH)
          {
            return UsernameAttributeType::phone_number;
          }
          else if (hashCode == email_HASH)
          {
            return UsernameAttributeType::email;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsernameAttributeType>(hashCode);
          }

          return UsernameAttributeType::NOT_SET;
        }

        Aws::String GetNameForUsernameAttributeType(UsernameAttributeType enumValue)
        {
          switch(enumValue)
          {
          case UsernameAttributeType::phone_number:
            return "phone_number";
          case UsernameAttributeType::email:
            return "email";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsernameAttributeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
