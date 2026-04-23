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

#include <aws/cognito-idp/model/CompromisedCredentialsEventActionType.h>
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
      namespace CompromisedCredentialsEventActionTypeMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int NO_ACTION_HASH = HashingUtils::HashString("NO_ACTION");


        CompromisedCredentialsEventActionType GetCompromisedCredentialsEventActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return CompromisedCredentialsEventActionType::BLOCK;
          }
          else if (hashCode == NO_ACTION_HASH)
          {
            return CompromisedCredentialsEventActionType::NO_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompromisedCredentialsEventActionType>(hashCode);
          }

          return CompromisedCredentialsEventActionType::NOT_SET;
        }

        Aws::String GetNameForCompromisedCredentialsEventActionType(CompromisedCredentialsEventActionType enumValue)
        {
          switch(enumValue)
          {
          case CompromisedCredentialsEventActionType::BLOCK:
            return "BLOCK";
          case CompromisedCredentialsEventActionType::NO_ACTION:
            return "NO_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompromisedCredentialsEventActionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
