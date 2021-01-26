/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContactMethodStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ContactMethodStatusMapper
      {

        static const int PendingVerification_HASH = HashingUtils::HashString("PendingVerification");
        static const int Valid_HASH = HashingUtils::HashString("Valid");
        static const int Invalid_HASH = HashingUtils::HashString("Invalid");


        ContactMethodStatus GetContactMethodStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingVerification_HASH)
          {
            return ContactMethodStatus::PendingVerification;
          }
          else if (hashCode == Valid_HASH)
          {
            return ContactMethodStatus::Valid;
          }
          else if (hashCode == Invalid_HASH)
          {
            return ContactMethodStatus::Invalid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactMethodStatus>(hashCode);
          }

          return ContactMethodStatus::NOT_SET;
        }

        Aws::String GetNameForContactMethodStatus(ContactMethodStatus enumValue)
        {
          switch(enumValue)
          {
          case ContactMethodStatus::PendingVerification:
            return "PendingVerification";
          case ContactMethodStatus::Valid:
            return "Valid";
          case ContactMethodStatus::Invalid:
            return "Invalid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactMethodStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
