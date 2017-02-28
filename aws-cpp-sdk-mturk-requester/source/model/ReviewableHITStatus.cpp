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
#include <aws/mturk-requester/model/ReviewableHITStatus.h>
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
      namespace ReviewableHITStatusMapper
      {

        static const int Reviewable_HASH = HashingUtils::HashString("Reviewable");
        static const int Reviewing_HASH = HashingUtils::HashString("Reviewing");


        ReviewableHITStatus GetReviewableHITStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Reviewable_HASH)
          {
            return ReviewableHITStatus::Reviewable;
          }
          else if (hashCode == Reviewing_HASH)
          {
            return ReviewableHITStatus::Reviewing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewableHITStatus>(hashCode);
          }

          return ReviewableHITStatus::NOT_SET;
        }

        Aws::String GetNameForReviewableHITStatus(ReviewableHITStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewableHITStatus::Reviewable:
            return "Reviewable";
          case ReviewableHITStatus::Reviewing:
            return "Reviewing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReviewableHITStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
