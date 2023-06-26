/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEventsData
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int InvalidRequestException_HASH = HashingUtils::HashString("InvalidRequestException");
        static const int InternalFailureException_HASH = HashingUtils::HashString("InternalFailureException");
        static const int ServiceUnavailableException_HASH = HashingUtils::HashString("ServiceUnavailableException");
        static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return ErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == InvalidRequestException_HASH)
          {
            return ErrorCode::InvalidRequestException;
          }
          else if (hashCode == InternalFailureException_HASH)
          {
            return ErrorCode::InternalFailureException;
          }
          else if (hashCode == ServiceUnavailableException_HASH)
          {
            return ErrorCode::ServiceUnavailableException;
          }
          else if (hashCode == ThrottlingException_HASH)
          {
            return ErrorCode::ThrottlingException;
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
          case ErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case ErrorCode::InvalidRequestException:
            return "InvalidRequestException";
          case ErrorCode::InternalFailureException:
            return "InternalFailureException";
          case ErrorCode::ServiceUnavailableException:
            return "ServiceUnavailableException";
          case ErrorCode::ThrottlingException:
            return "ThrottlingException";
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
  } // namespace IoTEventsData
} // namespace Aws
