/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ManifestStatus.h>
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
      namespace ManifestStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");


        ManifestStatus GetManifestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ManifestStatus::ACTIVE;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return ManifestStatus::DRAFT;
          }
          else if (hashCode == INVALID_HASH)
          {
            return ManifestStatus::INVALID;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return ManifestStatus::VALIDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManifestStatus>(hashCode);
          }

          return ManifestStatus::NOT_SET;
        }

        Aws::String GetNameForManifestStatus(ManifestStatus enumValue)
        {
          switch(enumValue)
          {
          case ManifestStatus::NOT_SET:
            return {};
          case ManifestStatus::ACTIVE:
            return "ACTIVE";
          case ManifestStatus::DRAFT:
            return "DRAFT";
          case ManifestStatus::INVALID:
            return "INVALID";
          case ManifestStatus::VALIDATING:
            return "VALIDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManifestStatusMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
