﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/model/RoleMappingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentity
  {
    namespace Model
    {
      namespace RoleMappingTypeMapper
      {

        static const int Token_HASH = HashingUtils::HashString("Token");
        static const int Rules_HASH = HashingUtils::HashString("Rules");


        RoleMappingType GetRoleMappingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Token_HASH)
          {
            return RoleMappingType::Token;
          }
          else if (hashCode == Rules_HASH)
          {
            return RoleMappingType::Rules;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoleMappingType>(hashCode);
          }

          return RoleMappingType::NOT_SET;
        }

        Aws::String GetNameForRoleMappingType(RoleMappingType enumValue)
        {
          switch(enumValue)
          {
          case RoleMappingType::Token:
            return "Token";
          case RoleMappingType::Rules:
            return "Rules";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RoleMappingTypeMapper
    } // namespace Model
  } // namespace CognitoIdentity
} // namespace Aws
