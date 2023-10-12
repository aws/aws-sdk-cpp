/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisStatus.h>
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
      namespace EphemerisStatusMapper
      {

        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t INVALID_HASH = ConstExprHashingUtils::HashString("INVALID");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        EphemerisStatus GetEphemerisStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATING_HASH)
          {
            return EphemerisStatus::VALIDATING;
          }
          else if (hashCode == INVALID_HASH)
          {
            return EphemerisStatus::INVALID;
          }
          else if (hashCode == ERROR__HASH)
          {
            return EphemerisStatus::ERROR_;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return EphemerisStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EphemerisStatus::DISABLED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return EphemerisStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EphemerisStatus>(hashCode);
          }

          return EphemerisStatus::NOT_SET;
        }

        Aws::String GetNameForEphemerisStatus(EphemerisStatus enumValue)
        {
          switch(enumValue)
          {
          case EphemerisStatus::NOT_SET:
            return {};
          case EphemerisStatus::VALIDATING:
            return "VALIDATING";
          case EphemerisStatus::INVALID:
            return "INVALID";
          case EphemerisStatus::ERROR_:
            return "ERROR";
          case EphemerisStatus::ENABLED:
            return "ENABLED";
          case EphemerisStatus::DISABLED:
            return "DISABLED";
          case EphemerisStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EphemerisStatusMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
