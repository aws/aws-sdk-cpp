/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobEntityErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace JobEntityErrorCodeMapper
      {

        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
        static const int InternalServerException_HASH = HashingUtils::HashString("InternalServerException");
        static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int MaxPayloadSizeExceeded_HASH = HashingUtils::HashString("MaxPayloadSizeExceeded");
        static const int ConflictException_HASH = HashingUtils::HashString("ConflictException");


        JobEntityErrorCode GetJobEntityErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDeniedException_HASH)
          {
            return JobEntityErrorCode::AccessDeniedException;
          }
          else if (hashCode == InternalServerException_HASH)
          {
            return JobEntityErrorCode::InternalServerException;
          }
          else if (hashCode == ValidationException_HASH)
          {
            return JobEntityErrorCode::ValidationException;
          }
          else if (hashCode == ResourceNotFoundException_HASH)
          {
            return JobEntityErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == MaxPayloadSizeExceeded_HASH)
          {
            return JobEntityErrorCode::MaxPayloadSizeExceeded;
          }
          else if (hashCode == ConflictException_HASH)
          {
            return JobEntityErrorCode::ConflictException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobEntityErrorCode>(hashCode);
          }

          return JobEntityErrorCode::NOT_SET;
        }

        Aws::String GetNameForJobEntityErrorCode(JobEntityErrorCode enumValue)
        {
          switch(enumValue)
          {
          case JobEntityErrorCode::NOT_SET:
            return {};
          case JobEntityErrorCode::AccessDeniedException:
            return "AccessDeniedException";
          case JobEntityErrorCode::InternalServerException:
            return "InternalServerException";
          case JobEntityErrorCode::ValidationException:
            return "ValidationException";
          case JobEntityErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case JobEntityErrorCode::MaxPayloadSizeExceeded:
            return "MaxPayloadSizeExceeded";
          case JobEntityErrorCode::ConflictException:
            return "ConflictException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobEntityErrorCodeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
