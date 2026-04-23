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

#include <aws/dms/model/AuthTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace AuthTypeValueMapper
      {

        static const int no_HASH = HashingUtils::HashString("no");
        static const int password_HASH = HashingUtils::HashString("password");


        AuthTypeValue GetAuthTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == no_HASH)
          {
            return AuthTypeValue::no;
          }
          else if (hashCode == password_HASH)
          {
            return AuthTypeValue::password;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthTypeValue>(hashCode);
          }

          return AuthTypeValue::NOT_SET;
        }

        Aws::String GetNameForAuthTypeValue(AuthTypeValue enumValue)
        {
          switch(enumValue)
          {
          case AuthTypeValue::no:
            return "no";
          case AuthTypeValue::password:
            return "password";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
