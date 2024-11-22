/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ReferenceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReferenceStatus GetReferenceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ReferenceStatus::AVAILABLE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReferenceStatus::DELETED;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return ReferenceStatus::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ReferenceStatus::REJECTED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ReferenceStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReferenceStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceStatus>(hashCode);
          }

          return ReferenceStatus::NOT_SET;
        }

        Aws::String GetNameForReferenceStatus(ReferenceStatus enumValue)
        {
          switch(enumValue)
          {
          case ReferenceStatus::NOT_SET:
            return {};
          case ReferenceStatus::AVAILABLE:
            return "AVAILABLE";
          case ReferenceStatus::DELETED:
            return "DELETED";
          case ReferenceStatus::APPROVED:
            return "APPROVED";
          case ReferenceStatus::REJECTED:
            return "REJECTED";
          case ReferenceStatus::PROCESSING:
            return "PROCESSING";
          case ReferenceStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
