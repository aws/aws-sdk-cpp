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
#include <aws/mturk-requester/model/HITReviewStatus.h>
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
      namespace HITReviewStatusMapper
      {

        static const int NotReviewed_HASH = HashingUtils::HashString("NotReviewed");
        static const int MarkedForReview_HASH = HashingUtils::HashString("MarkedForReview");
        static const int ReviewedAppropriate_HASH = HashingUtils::HashString("ReviewedAppropriate");
        static const int ReviewedInappropriate_HASH = HashingUtils::HashString("ReviewedInappropriate");


        HITReviewStatus GetHITReviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotReviewed_HASH)
          {
            return HITReviewStatus::NotReviewed;
          }
          else if (hashCode == MarkedForReview_HASH)
          {
            return HITReviewStatus::MarkedForReview;
          }
          else if (hashCode == ReviewedAppropriate_HASH)
          {
            return HITReviewStatus::ReviewedAppropriate;
          }
          else if (hashCode == ReviewedInappropriate_HASH)
          {
            return HITReviewStatus::ReviewedInappropriate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HITReviewStatus>(hashCode);
          }

          return HITReviewStatus::NOT_SET;
        }

        Aws::String GetNameForHITReviewStatus(HITReviewStatus enumValue)
        {
          switch(enumValue)
          {
          case HITReviewStatus::NotReviewed:
            return "NotReviewed";
          case HITReviewStatus::MarkedForReview:
            return "MarkedForReview";
          case HITReviewStatus::ReviewedAppropriate:
            return "ReviewedAppropriate";
          case HITReviewStatus::ReviewedInappropriate:
            return "ReviewedInappropriate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HITReviewStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
