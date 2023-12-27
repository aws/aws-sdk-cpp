/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace VolumeLifecycleMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int MISCONFIGURED_HASH = HashingUtils::HashString("MISCONFIGURED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        VolumeLifecycle GetVolumeLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VolumeLifecycle::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return VolumeLifecycle::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VolumeLifecycle::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VolumeLifecycle::FAILED;
          }
          else if (hashCode == MISCONFIGURED_HASH)
          {
            return VolumeLifecycle::MISCONFIGURED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return VolumeLifecycle::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return VolumeLifecycle::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeLifecycle>(hashCode);
          }

          return VolumeLifecycle::NOT_SET;
        }

        Aws::String GetNameForVolumeLifecycle(VolumeLifecycle enumValue)
        {
          switch(enumValue)
          {
          case VolumeLifecycle::NOT_SET:
            return {};
          case VolumeLifecycle::CREATING:
            return "CREATING";
          case VolumeLifecycle::CREATED:
            return "CREATED";
          case VolumeLifecycle::DELETING:
            return "DELETING";
          case VolumeLifecycle::FAILED:
            return "FAILED";
          case VolumeLifecycle::MISCONFIGURED:
            return "MISCONFIGURED";
          case VolumeLifecycle::PENDING:
            return "PENDING";
          case VolumeLifecycle::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
