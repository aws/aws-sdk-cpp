/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/InputAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace InputAuthenticationTypeMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int no_password_required_HASH = HashingUtils::HashString("no-password-required");
        static const int iam_HASH = HashingUtils::HashString("iam");


        InputAuthenticationType GetInputAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return InputAuthenticationType::password;
          }
          else if (hashCode == no_password_required_HASH)
          {
            return InputAuthenticationType::no_password_required;
          }
          else if (hashCode == iam_HASH)
          {
            return InputAuthenticationType::iam;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputAuthenticationType>(hashCode);
          }

          return InputAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForInputAuthenticationType(InputAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case InputAuthenticationType::password:
            return "password";
          case InputAuthenticationType::no_password_required:
            return "no-password-required";
          case InputAuthenticationType::iam:
            return "iam";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputAuthenticationTypeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
