/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AuthorizationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace AuthorizationTypeMapper
      {

        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");


        AuthorizationType GetAuthorizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_IAM_HASH)
          {
            return AuthorizationType::AWS_IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationType>(hashCode);
          }

          return AuthorizationType::NOT_SET;
        }

        Aws::String GetNameForAuthorizationType(AuthorizationType enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationType::AWS_IAM:
            return "AWS_IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
