/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace RegistrationStatusMapper
      {

        static const int Unregistered_HASH = HashingUtils::HashString("Unregistered");
        static const int Registered_HASH = HashingUtils::HashString("Registered");
        static const int Suspended_HASH = HashingUtils::HashString("Suspended");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unregistered_HASH)
          {
            return RegistrationStatus::Unregistered;
          }
          else if (hashCode == Registered_HASH)
          {
            return RegistrationStatus::Registered;
          }
          else if (hashCode == Suspended_HASH)
          {
            return RegistrationStatus::Suspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationStatus>(hashCode);
          }

          return RegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForRegistrationStatus(RegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistrationStatus::Unregistered:
            return "Unregistered";
          case RegistrationStatus::Registered:
            return "Registered";
          case RegistrationStatus::Suspended:
            return "Suspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
