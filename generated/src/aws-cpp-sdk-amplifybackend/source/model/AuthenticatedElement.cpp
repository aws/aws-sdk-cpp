/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/AuthenticatedElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace AuthenticatedElementMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int CREATE_AND_UPDATE_HASH = HashingUtils::HashString("CREATE_AND_UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        AuthenticatedElement GetAuthenticatedElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return AuthenticatedElement::READ;
          }
          else if (hashCode == CREATE_AND_UPDATE_HASH)
          {
            return AuthenticatedElement::CREATE_AND_UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return AuthenticatedElement::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticatedElement>(hashCode);
          }

          return AuthenticatedElement::NOT_SET;
        }

        Aws::String GetNameForAuthenticatedElement(AuthenticatedElement enumValue)
        {
          switch(enumValue)
          {
          case AuthenticatedElement::NOT_SET:
            return {};
          case AuthenticatedElement::READ:
            return "READ";
          case AuthenticatedElement::CREATE_AND_UPDATE:
            return "CREATE_AND_UPDATE";
          case AuthenticatedElement::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticatedElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
