/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeModificationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VolumeModificationStateMapper
      {

        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int optimizing_HASH = HashingUtils::HashString("optimizing");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int failed_HASH = HashingUtils::HashString("failed");


        VolumeModificationState GetVolumeModificationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == modifying_HASH)
          {
            return VolumeModificationState::modifying;
          }
          else if (hashCode == optimizing_HASH)
          {
            return VolumeModificationState::optimizing;
          }
          else if (hashCode == completed_HASH)
          {
            return VolumeModificationState::completed;
          }
          else if (hashCode == failed_HASH)
          {
            return VolumeModificationState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeModificationState>(hashCode);
          }

          return VolumeModificationState::NOT_SET;
        }

        Aws::String GetNameForVolumeModificationState(VolumeModificationState enumValue)
        {
          switch(enumValue)
          {
          case VolumeModificationState::modifying:
            return "modifying";
          case VolumeModificationState::optimizing:
            return "optimizing";
          case VolumeModificationState::completed:
            return "completed";
          case VolumeModificationState::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeModificationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
