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

#include <aws/medialive/model/AuthenticationScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AuthenticationSchemeMapper
      {

        static const int AKAMAI_HASH = HashingUtils::HashString("AKAMAI");
        static const int COMMON_HASH = HashingUtils::HashString("COMMON");


        AuthenticationScheme GetAuthenticationSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AKAMAI_HASH)
          {
            return AuthenticationScheme::AKAMAI;
          }
          else if (hashCode == COMMON_HASH)
          {
            return AuthenticationScheme::COMMON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationScheme>(hashCode);
          }

          return AuthenticationScheme::NOT_SET;
        }

        Aws::String GetNameForAuthenticationScheme(AuthenticationScheme enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationScheme::AKAMAI:
            return "AKAMAI";
          case AuthenticationScheme::COMMON:
            return "COMMON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationSchemeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
