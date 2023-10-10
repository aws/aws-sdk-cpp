﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotState.h>
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
      namespace SnapshotStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int error_HASH = HashingUtils::HashString("error");
        static const int recoverable_HASH = HashingUtils::HashString("recoverable");
        static const int recovering_HASH = HashingUtils::HashString("recovering");


        SnapshotState GetSnapshotStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return SnapshotState::pending;
          }
          else if (hashCode == completed_HASH)
          {
            return SnapshotState::completed;
          }
          else if (hashCode == error_HASH)
          {
            return SnapshotState::error;
          }
          else if (hashCode == recoverable_HASH)
          {
            return SnapshotState::recoverable;
          }
          else if (hashCode == recovering_HASH)
          {
            return SnapshotState::recovering;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotState>(hashCode);
          }

          return SnapshotState::NOT_SET;
        }

        Aws::String GetNameForSnapshotState(SnapshotState enumValue)
        {
          switch(enumValue)
          {
          case SnapshotState::NOT_SET:
            return {};
          case SnapshotState::pending:
            return "pending";
          case SnapshotState::completed:
            return "completed";
          case SnapshotState::error:
            return "error";
          case SnapshotState::recoverable:
            return "recoverable";
          case SnapshotState::recovering:
            return "recovering";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
