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

#include <aws/dms/model/AuthMechanismValue.h>
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
      namespace AuthMechanismValueMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int mongodb_cr_HASH = HashingUtils::HashString("mongodb_cr");
        static const int scram_sha_1_HASH = HashingUtils::HashString("scram_sha_1");


        AuthMechanismValue GetAuthMechanismValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return AuthMechanismValue::default_;
          }
          else if (hashCode == mongodb_cr_HASH)
          {
            return AuthMechanismValue::mongodb_cr;
          }
          else if (hashCode == scram_sha_1_HASH)
          {
            return AuthMechanismValue::scram_sha_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthMechanismValue>(hashCode);
          }

          return AuthMechanismValue::NOT_SET;
        }

        Aws::String GetNameForAuthMechanismValue(AuthMechanismValue enumValue)
        {
          switch(enumValue)
          {
          case AuthMechanismValue::default_:
            return "default";
          case AuthMechanismValue::mongodb_cr:
            return "mongodb_cr";
          case AuthMechanismValue::scram_sha_1:
            return "scram_sha_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthMechanismValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
