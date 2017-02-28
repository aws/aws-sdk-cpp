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
#include <aws/mturk-requester/model/ReviewActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace ReviewActionStatusMapper
      {

        static const int Intended_HASH = HashingUtils::HashString("Intended");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        ReviewActionStatus GetReviewActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Intended_HASH)
          {
            return ReviewActionStatus::Intended;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ReviewActionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return ReviewActionStatus::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ReviewActionStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewActionStatus>(hashCode);
          }

          return ReviewActionStatus::NOT_SET;
        }

        Aws::String GetNameForReviewActionStatus(ReviewActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewActionStatus::Intended:
            return "Intended";
          case ReviewActionStatus::Succeeded:
            return "Succeeded";
          case ReviewActionStatus::Failed:
            return "Failed";
          case ReviewActionStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReviewActionStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
