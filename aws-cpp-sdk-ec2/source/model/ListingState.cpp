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
#include <aws/ec2/model/ListingState.h>
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
      namespace ListingStateMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int sold_HASH = HashingUtils::HashString("sold");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int pending_HASH = HashingUtils::HashString("pending");


        ListingState GetListingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return ListingState::available;
          }
          else if (hashCode == sold_HASH)
          {
            return ListingState::sold;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ListingState::cancelled;
          }
          else if (hashCode == pending_HASH)
          {
            return ListingState::pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListingState>(hashCode);
          }

          return ListingState::NOT_SET;
        }

        Aws::String GetNameForListingState(ListingState enumValue)
        {
          switch(enumValue)
          {
          case ListingState::available:
            return "available";
          case ListingState::sold:
            return "sold";
          case ListingState::cancelled:
            return "cancelled";
          case ListingState::pending:
            return "pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ListingStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
