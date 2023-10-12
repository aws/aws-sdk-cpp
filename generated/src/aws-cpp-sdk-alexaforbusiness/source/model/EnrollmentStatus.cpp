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

        static constexpr uint32_t INITIALIZED_HASH = ConstExprHashingUtils::HashString("INITIALIZED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t REGISTERED_HASH = ConstExprHashingUtils::HashString("REGISTERED");
        static constexpr uint32_t DISASSOCIATING_HASH = ConstExprHashingUtils::HashString("DISASSOCIATING");
        static constexpr uint32_t DEREGISTERING_HASH = ConstExprHashingUtils::HashString("DEREGISTERING");


        EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EnrollmentStatus::NOT_SET:
            return {};
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
