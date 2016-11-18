/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/ListingStatus.h>
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
      namespace ListingStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int closed_HASH = HashingUtils::HashString("closed");


        ListingStatus GetListingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ListingStatus::active;
          }
          else if (hashCode == pending_HASH)
          {
            return ListingStatus::pending;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ListingStatus::cancelled;
          }
          else if (hashCode == closed_HASH)
          {
            return ListingStatus::closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListingStatus>(hashCode);
          }

          return ListingStatus::NOT_SET;
        }

        Aws::String GetNameForListingStatus(ListingStatus enumValue)
        {
          switch(enumValue)
          {
          case ListingStatus::active:
            return "active";
          case ListingStatus::pending:
            return "pending";
          case ListingStatus::cancelled:
            return "cancelled";
          case ListingStatus::closed:
            return "closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ListingStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
