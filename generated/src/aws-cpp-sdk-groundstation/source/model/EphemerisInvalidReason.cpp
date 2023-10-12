/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisInvalidReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace EphemerisInvalidReasonMapper
      {

        static constexpr uint32_t METADATA_INVALID_HASH = ConstExprHashingUtils::HashString("METADATA_INVALID");
        static constexpr uint32_t TIME_RANGE_INVALID_HASH = ConstExprHashingUtils::HashString("TIME_RANGE_INVALID");
        static constexpr uint32_t TRAJECTORY_INVALID_HASH = ConstExprHashingUtils::HashString("TRAJECTORY_INVALID");
        static constexpr uint32_t KMS_KEY_INVALID_HASH = ConstExprHashingUtils::HashString("KMS_KEY_INVALID");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");


        EphemerisInvalidReason GetEphemerisInvalidReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METADATA_INVALID_HASH)
          {
            return EphemerisInvalidReason::METADATA_INVALID;
          }
          else if (hashCode == TIME_RANGE_INVALID_HASH)
          {
            return EphemerisInvalidReason::TIME_RANGE_INVALID;
          }
          else if (hashCode == TRAJECTORY_INVALID_HASH)
          {
            return EphemerisInvalidReason::TRAJECTORY_INVALID;
          }
          else if (hashCode == KMS_KEY_INVALID_HASH)
          {
            return EphemerisInvalidReason::KMS_KEY_INVALID;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return EphemerisInvalidReason::VALIDATION_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EphemerisInvalidReason>(hashCode);
          }

          return EphemerisInvalidReason::NOT_SET;
        }

        Aws::String GetNameForEphemerisInvalidReason(EphemerisInvalidReason enumValue)
        {
          switch(enumValue)
          {
          case EphemerisInvalidReason::NOT_SET:
            return {};
          case EphemerisInvalidReason::METADATA_INVALID:
            return "METADATA_INVALID";
          case EphemerisInvalidReason::TIME_RANGE_INVALID:
            return "TIME_RANGE_INVALID";
          case EphemerisInvalidReason::TRAJECTORY_INVALID:
            return "TRAJECTORY_INVALID";
          case EphemerisInvalidReason::KMS_KEY_INVALID:
            return "KMS_KEY_INVALID";
          case EphemerisInvalidReason::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EphemerisInvalidReasonMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
