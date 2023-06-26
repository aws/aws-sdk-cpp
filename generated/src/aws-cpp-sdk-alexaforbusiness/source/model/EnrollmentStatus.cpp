/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/EnrollmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace EnrollmentStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");


        EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return EnrollmentStatus::INITIALIZED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EnrollmentStatus::PENDING;
          }
          else if (hashCode == REGISTERED_HASH)
          {
            return EnrollmentStatus::REGISTERED;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return EnrollmentStatus::DISASSOCIATING;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return EnrollmentStatus::DEREGISTERING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnrollmentStatus>(hashCode);
          }

          return EnrollmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnrollmentStatus(EnrollmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnrollmentStatus::INITIALIZED:
            return "INITIALIZED";
          case EnrollmentStatus::PENDING:
            return "PENDING";
          case EnrollmentStatus::REGISTERED:
            return "REGISTERED";
          case EnrollmentStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case EnrollmentStatus::DEREGISTERING:
            return "DEREGISTERING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnrollmentStatusMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
