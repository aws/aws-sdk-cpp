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
#include <aws/snowball/model/JobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace JobStateMapper
      {

        static const int New_HASH = HashingUtils::HashString("New");
        static const int PreparingAppliance_HASH = HashingUtils::HashString("PreparingAppliance");
        static const int PreparingShipment_HASH = HashingUtils::HashString("PreparingShipment");
        static const int InTransitToCustomer_HASH = HashingUtils::HashString("InTransitToCustomer");
        static const int WithCustomer_HASH = HashingUtils::HashString("WithCustomer");
        static const int InTransitToAWS_HASH = HashingUtils::HashString("InTransitToAWS");
        static const int WithAWS_HASH = HashingUtils::HashString("WithAWS");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Listing_HASH = HashingUtils::HashString("Listing");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        JobState GetJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == New_HASH)
          {
            return JobState::New;
          }
          else if (hashCode == PreparingAppliance_HASH)
          {
            return JobState::PreparingAppliance;
          }
          else if (hashCode == PreparingShipment_HASH)
          {
            return JobState::PreparingShipment;
          }
          else if (hashCode == InTransitToCustomer_HASH)
          {
            return JobState::InTransitToCustomer;
          }
          else if (hashCode == WithCustomer_HASH)
          {
            return JobState::WithCustomer;
          }
          else if (hashCode == InTransitToAWS_HASH)
          {
            return JobState::InTransitToAWS;
          }
          else if (hashCode == WithAWS_HASH)
          {
            return JobState::WithAWS;
          }
          else if (hashCode == InProgress_HASH)
          {
            return JobState::InProgress;
          }
          else if (hashCode == Complete_HASH)
          {
            return JobState::Complete;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return JobState::Cancelled;
          }
          else if (hashCode == Listing_HASH)
          {
            return JobState::Listing;
          }
          else if (hashCode == Pending_HASH)
          {
            return JobState::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobState>(hashCode);
          }

          return JobState::NOT_SET;
        }

        Aws::String GetNameForJobState(JobState enumValue)
        {
          switch(enumValue)
          {
          case JobState::New:
            return "New";
          case JobState::PreparingAppliance:
            return "PreparingAppliance";
          case JobState::PreparingShipment:
            return "PreparingShipment";
          case JobState::InTransitToCustomer:
            return "InTransitToCustomer";
          case JobState::WithCustomer:
            return "WithCustomer";
          case JobState::InTransitToAWS:
            return "InTransitToAWS";
          case JobState::WithAWS:
            return "WithAWS";
          case JobState::InProgress:
            return "InProgress";
          case JobState::Complete:
            return "Complete";
          case JobState::Cancelled:
            return "Cancelled";
          case JobState::Listing:
            return "Listing";
          case JobState::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace JobStateMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
