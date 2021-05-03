/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ErrorCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ErrorCategoryMapper
      {

        static const int The_inputs_to_this_request_are_invalid_HASH = HashingUtils::HashString("The_inputs_to_this_request_are_invalid");
        static const int Service_limits_have_been_exceeded_HASH = HashingUtils::HashString("Service_limits_have_been_exceeded");
        static const int Missing_required_permission_to_perform_this_request_HASH = HashingUtils::HashString("Missing_required_permission_to_perform_this_request");
        static const int One_or_more_inputs_to_this_request_were_not_found_HASH = HashingUtils::HashString("One_or_more_inputs_to_this_request_were_not_found");
        static const int The_system_temporarily_lacks_sufficient_resources_to_process_the_request_HASH = HashingUtils::HashString("The_system_temporarily_lacks_sufficient_resources_to_process_the_request");
        static const int An_internal_error_has_occurred_HASH = HashingUtils::HashString("An_internal_error_has_occurred");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int A_user_recoverable_error_has_occurred_HASH = HashingUtils::HashString("A_user_recoverable_error_has_occurred");


        ErrorCategory GetErrorCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == The_inputs_to_this_request_are_invalid_HASH)
          {
            return ErrorCategory::The_inputs_to_this_request_are_invalid;
          }
          else if (hashCode == Service_limits_have_been_exceeded_HASH)
          {
            return ErrorCategory::Service_limits_have_been_exceeded;
          }
          else if (hashCode == Missing_required_permission_to_perform_this_request_HASH)
          {
            return ErrorCategory::Missing_required_permission_to_perform_this_request;
          }
          else if (hashCode == One_or_more_inputs_to_this_request_were_not_found_HASH)
          {
            return ErrorCategory::One_or_more_inputs_to_this_request_were_not_found;
          }
          else if (hashCode == The_system_temporarily_lacks_sufficient_resources_to_process_the_request_HASH)
          {
            return ErrorCategory::The_system_temporarily_lacks_sufficient_resources_to_process_the_request;
          }
          else if (hashCode == An_internal_error_has_occurred_HASH)
          {
            return ErrorCategory::An_internal_error_has_occurred;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ErrorCategory::Cancelled;
          }
          else if (hashCode == A_user_recoverable_error_has_occurred_HASH)
          {
            return ErrorCategory::A_user_recoverable_error_has_occurred;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCategory>(hashCode);
          }

          return ErrorCategory::NOT_SET;
        }

        Aws::String GetNameForErrorCategory(ErrorCategory enumValue)
        {
          switch(enumValue)
          {
          case ErrorCategory::The_inputs_to_this_request_are_invalid:
            return "The_inputs_to_this_request_are_invalid";
          case ErrorCategory::Service_limits_have_been_exceeded:
            return "Service_limits_have_been_exceeded";
          case ErrorCategory::Missing_required_permission_to_perform_this_request:
            return "Missing_required_permission_to_perform_this_request";
          case ErrorCategory::One_or_more_inputs_to_this_request_were_not_found:
            return "One_or_more_inputs_to_this_request_were_not_found";
          case ErrorCategory::The_system_temporarily_lacks_sufficient_resources_to_process_the_request:
            return "The_system_temporarily_lacks_sufficient_resources_to_process_the_request";
          case ErrorCategory::An_internal_error_has_occurred:
            return "An_internal_error_has_occurred";
          case ErrorCategory::Cancelled:
            return "Cancelled";
          case ErrorCategory::A_user_recoverable_error_has_occurred:
            return "A_user_recoverable_error_has_occurred";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCategoryMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
