/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UnAuthenticatedElement.h>
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
      namespace UnAuthenticatedElementMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int CREATE_AND_UPDATE_HASH = HashingUtils::HashString("CREATE_AND_UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        UnAuthenticatedElement GetUnAuthenticatedElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return UnAuthenticatedElement::READ;
          }
          else if (hashCode == CREATE_AND_UPDATE_HASH)
          {
            return UnAuthenticatedElement::CREATE_AND_UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return UnAuthenticatedElement::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnAuthenticatedElement>(hashCode);
          }

          return UnAuthenticatedElement::NOT_SET;
        }

        Aws::String GetNameForUnAuthenticatedElement(UnAuthenticatedElement enumValue)
        {
          switch(enumValue)
          {
          case UnAuthenticatedElement::NOT_SET:
            return {};
          case UnAuthenticatedElement::READ:
            return "READ";
          case UnAuthenticatedElement::CREATE_AND_UPDATE:
            return "CREATE_AND_UPDATE";
          case UnAuthenticatedElement::DELETE_:
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

      } // namespace UnAuthenticatedElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
