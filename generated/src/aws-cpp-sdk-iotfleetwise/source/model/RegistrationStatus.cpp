/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace RegistrationStatusMapper
      {

        static const int REGISTRATION_PENDING_HASH = HashingUtils::HashString("REGISTRATION_PENDING");
        static const int REGISTRATION_SUCCESS_HASH = HashingUtils::HashString("REGISTRATION_SUCCESS");
        static const int REGISTRATION_FAILURE_HASH = HashingUtils::HashString("REGISTRATION_FAILURE");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTRATION_PENDING_HASH)
          {
            return RegistrationStatus::REGISTRATION_PENDING;
          }
          else if (hashCode == REGISTRATION_SUCCESS_HASH)
          {
            return RegistrationStatus::REGISTRATION_SUCCESS;
          }
          else if (hashCode == REGISTRATION_FAILURE_HASH)
          {
            return RegistrationStatus::REGISTRATION_FAILURE;
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
          case RegistrationStatus::REGISTRATION_PENDING:
            return "REGISTRATION_PENDING";
          case RegistrationStatus::REGISTRATION_SUCCESS:
            return "REGISTRATION_SUCCESS";
          case RegistrationStatus::REGISTRATION_FAILURE:
            return "REGISTRATION_FAILURE";
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
  } // namespace IoTFleetWise
} // namespace Aws
