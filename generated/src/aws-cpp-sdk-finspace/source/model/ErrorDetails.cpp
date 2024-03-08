/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ErrorDetails.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace ErrorDetailsMapper
      {

        static const int The_inputs_to_this_request_are_invalid_HASH = HashingUtils::HashString("The inputs to this request are invalid.");
        static const int Service_limits_have_been_exceeded_HASH = HashingUtils::HashString("Service limits have been exceeded.");
        static const int Missing_required_permission_to_perform_this_request_HASH = HashingUtils::HashString("Missing required permission to perform this request.");
        static const int One_or_more_inputs_to_this_request_were_not_found_HASH = HashingUtils::HashString("One or more inputs to this request were not found.");
        static const int The_system_temporarily_lacks_sufficient_resources_to_process_the_request_HASH = HashingUtils::HashString("The system temporarily lacks sufficient resources to process the request.");
        static const int An_internal_error_has_occurred_HASH = HashingUtils::HashString("An internal error has occurred.");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int A_user_recoverable_error_has_occurred_HASH = HashingUtils::HashString("A user recoverable error has occurred");


        ErrorDetails GetErrorDetailsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == The_inputs_to_this_request_are_invalid_HASH)
          {
            return ErrorDetails::The_inputs_to_this_request_are_invalid;
          }
          else if (hashCode == Service_limits_have_been_exceeded_HASH)
          {
            return ErrorDetails::Service_limits_have_been_exceeded;
          }
          else if (hashCode == Missing_required_permission_to_perform_this_request_HASH)
          {
            return ErrorDetails::Missing_required_permission_to_perform_this_request;
          }
          else if (hashCode == One_or_more_inputs_to_this_request_were_not_found_HASH)
          {
            return ErrorDetails::One_or_more_inputs_to_this_request_were_not_found;
          }
          else if (hashCode == The_system_temporarily_lacks_sufficient_resources_to_process_the_request_HASH)
          {
            return ErrorDetails::The_system_temporarily_lacks_sufficient_resources_to_process_the_request;
          }
          else if (hashCode == An_internal_error_has_occurred_HASH)
          {
            return ErrorDetails::An_internal_error_has_occurred;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ErrorDetails::Cancelled;
          }
          else if (hashCode == A_user_recoverable_error_has_occurred_HASH)
          {
            return ErrorDetails::A_user_recoverable_error_has_occurred;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorDetails>(hashCode);
          }

          return ErrorDetails::NOT_SET;
        }

        Aws::String GetNameForErrorDetails(ErrorDetails enumValue)
        {
          switch(enumValue)
          {
          case ErrorDetails::NOT_SET:
            return {};
          case ErrorDetails::The_inputs_to_this_request_are_invalid:
            return "The inputs to this request are invalid.";
          case ErrorDetails::Service_limits_have_been_exceeded:
            return "Service limits have been exceeded.";
          case ErrorDetails::Missing_required_permission_to_perform_this_request:
            return "Missing required permission to perform this request.";
          case ErrorDetails::One_or_more_inputs_to_this_request_were_not_found:
            return "One or more inputs to this request were not found.";
          case ErrorDetails::The_system_temporarily_lacks_sufficient_resources_to_process_the_request:
            return "The system temporarily lacks sufficient resources to process the request.";
          case ErrorDetails::An_internal_error_has_occurred:
            return "An internal error has occurred.";
          case ErrorDetails::Cancelled:
            return "Cancelled";
          case ErrorDetails::A_user_recoverable_error_has_occurred:
            return "A user recoverable error has occurred";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorDetailsMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
