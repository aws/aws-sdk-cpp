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

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DRAFT_HASH = ConstExprHashingUtils::HashString("DRAFT");


        ManifestStatus GetManifestStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ManifestStatus::ACTIVE;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return ManifestStatus::DRAFT;
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
