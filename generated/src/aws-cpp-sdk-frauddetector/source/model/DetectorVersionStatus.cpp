/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DetectorVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace DetectorVersionStatusMapper
      {

        static constexpr uint32_t DRAFT_HASH = ConstExprHashingUtils::HashString("DRAFT");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        DetectorVersionStatus GetDetectorVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return DetectorVersionStatus::DRAFT;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DetectorVersionStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DetectorVersionStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectorVersionStatus>(hashCode);
          }

          return DetectorVersionStatus::NOT_SET;
        }

        Aws::String GetNameForDetectorVersionStatus(DetectorVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case DetectorVersionStatus::NOT_SET:
            return {};
          case DetectorVersionStatus::DRAFT:
            return "DRAFT";
          case DetectorVersionStatus::ACTIVE:
            return "ACTIVE";
          case DetectorVersionStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetectorVersionStatusMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
