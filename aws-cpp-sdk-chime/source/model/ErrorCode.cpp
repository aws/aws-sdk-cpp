/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/chime/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int Unauthorized_HASH = HashingUtils::HashString("Unauthorized");
        static const int Forbidden_HASH = HashingUtils::HashString("Forbidden");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");
        static const int BadRequest_HASH = HashingUtils::HashString("BadRequest");
        static const int Conflict_HASH = HashingUtils::HashString("Conflict");
        static const int ServiceFailure_HASH = HashingUtils::HashString("ServiceFailure");
        static const int ServiceUnavailable_HASH = HashingUtils::HashString("ServiceUnavailable");
        static const int Unprocessable_HASH = HashingUtils::HashString("Unprocessable");
        static const int Throttled_HASH = HashingUtils::HashString("Throttled");
        static const int PreconditionFailed_HASH = HashingUtils::HashString("PreconditionFailed");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unauthorized_HASH)
          {
            return ErrorCode::Unauthorized;
          }
          else if (hashCode == Forbidden_HASH)
          {
            return ErrorCode::Forbidden;
          }
          else if (hashCode == NotFound_HASH)
          {
            return ErrorCode::NotFound;
          }
          else if (hashCode == BadRequest_HASH)
          {
            return ErrorCode::BadRequest;
          }
          else if (hashCode == Conflict_HASH)
          {
            return ErrorCode::Conflict;
          }
          else if (hashCode == ServiceFailure_HASH)
          {
            return ErrorCode::ServiceFailure;
          }
          else if (hashCode == ServiceUnavailable_HASH)
          {
            return ErrorCode::ServiceUnavailable;
          }
          else if (hashCode == Unprocessable_HASH)
          {
            return ErrorCode::Unprocessable;
          }
          else if (hashCode == Throttled_HASH)
          {
            return ErrorCode::Throttled;
          }
          else if (hashCode == PreconditionFailed_HASH)
          {
            return ErrorCode::PreconditionFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::Unauthorized:
            return "Unauthorized";
          case ErrorCode::Forbidden:
            return "Forbidden";
          case ErrorCode::NotFound:
            return "NotFound";
          case ErrorCode::BadRequest:
            return "BadRequest";
          case ErrorCode::Conflict:
            return "Conflict";
          case ErrorCode::ServiceFailure:
            return "ServiceFailure";
          case ErrorCode::ServiceUnavailable:
            return "ServiceUnavailable";
          case ErrorCode::Unprocessable:
            return "Unprocessable";
          case ErrorCode::Throttled:
            return "Throttled";
          case ErrorCode::PreconditionFailed:
            return "PreconditionFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
