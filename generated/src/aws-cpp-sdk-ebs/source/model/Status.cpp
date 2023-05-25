/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int error_HASH = HashingUtils::HashString("error");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == completed_HASH)
          {
            return Status::completed;
          }
          else if (hashCode == pending_HASH)
          {
            return Status::pending;
          }
          else if (hashCode == error_HASH)
          {
            return Status::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::completed:
            return "completed";
          case Status::pending:
            return "pending";
          case Status::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
