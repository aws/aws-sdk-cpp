/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
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
      namespace SnapshotBlockPublicAccessStateMapper
      {

        static const int block_all_sharing_HASH = HashingUtils::HashString("block-all-sharing");
        static const int block_new_sharing_HASH = HashingUtils::HashString("block-new-sharing");
        static const int unblocked_HASH = HashingUtils::HashString("unblocked");


        SnapshotBlockPublicAccessState GetSnapshotBlockPublicAccessStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == block_all_sharing_HASH)
          {
            return SnapshotBlockPublicAccessState::block_all_sharing;
          }
          else if (hashCode == block_new_sharing_HASH)
          {
            return SnapshotBlockPublicAccessState::block_new_sharing;
          }
          else if (hashCode == unblocked_HASH)
          {
            return SnapshotBlockPublicAccessState::unblocked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotBlockPublicAccessState>(hashCode);
          }

          return SnapshotBlockPublicAccessState::NOT_SET;
        }

        Aws::String GetNameForSnapshotBlockPublicAccessState(SnapshotBlockPublicAccessState enumValue)
        {
          switch(enumValue)
          {
          case SnapshotBlockPublicAccessState::NOT_SET:
            return {};
          case SnapshotBlockPublicAccessState::block_all_sharing:
            return "block-all-sharing";
          case SnapshotBlockPublicAccessState::block_new_sharing:
            return "block-new-sharing";
          case SnapshotBlockPublicAccessState::unblocked:
            return "unblocked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotBlockPublicAccessStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
