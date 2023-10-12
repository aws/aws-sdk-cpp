/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t default__HASH = ConstExprHashingUtils::HashString("default");
        static constexpr uint32_t mongodb_cr_HASH = ConstExprHashingUtils::HashString("mongodb_cr");
        static constexpr uint32_t scram_sha_1_HASH = ConstExprHashingUtils::HashString("scram_sha_1");


        AuthMechanismValue GetAuthMechanismValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AuthMechanismValue::NOT_SET:
            return {};
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
