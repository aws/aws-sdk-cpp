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

        static constexpr uint32_t ResourceNotFoundException_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundException");
        static constexpr uint32_t InvalidRequestException_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
        static constexpr uint32_t InternalFailureException_HASH = ConstExprHashingUtils::HashString("InternalFailureException");
        static constexpr uint32_t ServiceUnavailableException_HASH = ConstExprHashingUtils::HashString("ServiceUnavailableException");
        static constexpr uint32_t ThrottlingException_HASH = ConstExprHashingUtils::HashString("ThrottlingException");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ErrorCode::NOT_SET:
            return {};
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
