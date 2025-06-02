/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSStorageFindingReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace RDSStorageFindingReasonCodeMapper
      {

        static const int EBSVolumeAllocatedStorageUnderprovisioned_HASH = HashingUtils::HashString("EBSVolumeAllocatedStorageUnderprovisioned");
        static const int EBSVolumeThroughputUnderprovisioned_HASH = HashingUtils::HashString("EBSVolumeThroughputUnderprovisioned");
        static const int EBSVolumeIOPSOverprovisioned_HASH = HashingUtils::HashString("EBSVolumeIOPSOverprovisioned");
        static const int EBSVolumeThroughputOverprovisioned_HASH = HashingUtils::HashString("EBSVolumeThroughputOverprovisioned");
        static const int NewGenerationStorageTypeAvailable_HASH = HashingUtils::HashString("NewGenerationStorageTypeAvailable");
        static const int DBClusterStorageOptionAvailable_HASH = HashingUtils::HashString("DBClusterStorageOptionAvailable");
        static const int DBClusterStorageSavingsAvailable_HASH = HashingUtils::HashString("DBClusterStorageSavingsAvailable");


        RDSStorageFindingReasonCode GetRDSStorageFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EBSVolumeAllocatedStorageUnderprovisioned_HASH)
          {
            return RDSStorageFindingReasonCode::EBSVolumeAllocatedStorageUnderprovisioned;
          }
          else if (hashCode == EBSVolumeThroughputUnderprovisioned_HASH)
          {
            return RDSStorageFindingReasonCode::EBSVolumeThroughputUnderprovisioned;
          }
          else if (hashCode == EBSVolumeIOPSOverprovisioned_HASH)
          {
            return RDSStorageFindingReasonCode::EBSVolumeIOPSOverprovisioned;
          }
          else if (hashCode == EBSVolumeThroughputOverprovisioned_HASH)
          {
            return RDSStorageFindingReasonCode::EBSVolumeThroughputOverprovisioned;
          }
          else if (hashCode == NewGenerationStorageTypeAvailable_HASH)
          {
            return RDSStorageFindingReasonCode::NewGenerationStorageTypeAvailable;
          }
          else if (hashCode == DBClusterStorageOptionAvailable_HASH)
          {
            return RDSStorageFindingReasonCode::DBClusterStorageOptionAvailable;
          }
          else if (hashCode == DBClusterStorageSavingsAvailable_HASH)
          {
            return RDSStorageFindingReasonCode::DBClusterStorageSavingsAvailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSStorageFindingReasonCode>(hashCode);
          }

          return RDSStorageFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForRDSStorageFindingReasonCode(RDSStorageFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case RDSStorageFindingReasonCode::NOT_SET:
            return {};
          case RDSStorageFindingReasonCode::EBSVolumeAllocatedStorageUnderprovisioned:
            return "EBSVolumeAllocatedStorageUnderprovisioned";
          case RDSStorageFindingReasonCode::EBSVolumeThroughputUnderprovisioned:
            return "EBSVolumeThroughputUnderprovisioned";
          case RDSStorageFindingReasonCode::EBSVolumeIOPSOverprovisioned:
            return "EBSVolumeIOPSOverprovisioned";
          case RDSStorageFindingReasonCode::EBSVolumeThroughputOverprovisioned:
            return "EBSVolumeThroughputOverprovisioned";
          case RDSStorageFindingReasonCode::NewGenerationStorageTypeAvailable:
            return "NewGenerationStorageTypeAvailable";
          case RDSStorageFindingReasonCode::DBClusterStorageOptionAvailable:
            return "DBClusterStorageOptionAvailable";
          case RDSStorageFindingReasonCode::DBClusterStorageSavingsAvailable:
            return "DBClusterStorageSavingsAvailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSStorageFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
