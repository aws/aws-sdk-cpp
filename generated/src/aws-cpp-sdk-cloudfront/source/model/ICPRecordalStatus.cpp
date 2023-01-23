/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ICPRecordalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ICPRecordalStatusMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ICPRecordalStatus GetICPRecordalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return ICPRecordalStatus::APPROVED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return ICPRecordalStatus::SUSPENDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ICPRecordalStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICPRecordalStatus>(hashCode);
          }

          return ICPRecordalStatus::NOT_SET;
        }

        Aws::String GetNameForICPRecordalStatus(ICPRecordalStatus enumValue)
        {
          switch(enumValue)
          {
          case ICPRecordalStatus::APPROVED:
            return "APPROVED";
          case ICPRecordalStatus::SUSPENDED:
            return "SUSPENDED";
          case ICPRecordalStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICPRecordalStatusMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
