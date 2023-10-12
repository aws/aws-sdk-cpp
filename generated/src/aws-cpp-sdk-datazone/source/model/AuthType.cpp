/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace AuthTypeMapper
      {

        static constexpr uint32_t IAM_IDC_HASH = ConstExprHashingUtils::HashString("IAM_IDC");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        AuthType GetAuthTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_IDC_HASH)
          {
            return AuthType::IAM_IDC;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AuthType::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthType>(hashCode);
          }

          return AuthType::NOT_SET;
        }

        Aws::String GetNameForAuthType(AuthType enumValue)
        {
          switch(enumValue)
          {
          case AuthType::NOT_SET:
            return {};
          case AuthType::IAM_IDC:
            return "IAM_IDC";
          case AuthType::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
