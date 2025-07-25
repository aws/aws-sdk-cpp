/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ContactHandlingScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppIntegrationsService
  {
    namespace Model
    {
      namespace ContactHandlingScopeMapper
      {

        static const int CROSS_CONTACTS_HASH = HashingUtils::HashString("CROSS_CONTACTS");
        static const int PER_CONTACT_HASH = HashingUtils::HashString("PER_CONTACT");


        ContactHandlingScope GetContactHandlingScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CROSS_CONTACTS_HASH)
          {
            return ContactHandlingScope::CROSS_CONTACTS;
          }
          else if (hashCode == PER_CONTACT_HASH)
          {
            return ContactHandlingScope::PER_CONTACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactHandlingScope>(hashCode);
          }

          return ContactHandlingScope::NOT_SET;
        }

        Aws::String GetNameForContactHandlingScope(ContactHandlingScope enumValue)
        {
          switch(enumValue)
          {
          case ContactHandlingScope::NOT_SET:
            return {};
          case ContactHandlingScope::CROSS_CONTACTS:
            return "CROSS_CONTACTS";
          case ContactHandlingScope::PER_CONTACT:
            return "PER_CONTACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactHandlingScopeMapper
    } // namespace Model
  } // namespace AppIntegrationsService
} // namespace Aws
