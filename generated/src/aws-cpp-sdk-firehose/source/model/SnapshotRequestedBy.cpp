/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnapshotRequestedBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace SnapshotRequestedByMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int FIREHOSE_HASH = HashingUtils::HashString("FIREHOSE");


        SnapshotRequestedBy GetSnapshotRequestedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return SnapshotRequestedBy::USER;
          }
          else if (hashCode == FIREHOSE_HASH)
          {
            return SnapshotRequestedBy::FIREHOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotRequestedBy>(hashCode);
          }

          return SnapshotRequestedBy::NOT_SET;
        }

        Aws::String GetNameForSnapshotRequestedBy(SnapshotRequestedBy enumValue)
        {
          switch(enumValue)
          {
          case SnapshotRequestedBy::NOT_SET:
            return {};
          case SnapshotRequestedBy::USER:
            return "USER";
          case SnapshotRequestedBy::FIREHOSE:
            return "FIREHOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotRequestedByMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
