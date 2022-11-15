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

        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        EphemerisStatus GetEphemerisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
