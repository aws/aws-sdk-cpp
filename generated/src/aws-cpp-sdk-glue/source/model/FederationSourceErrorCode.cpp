/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FederationSourceErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace FederationSourceErrorCodeMapper
      {

        static constexpr uint32_t InvalidResponseException_HASH = ConstExprHashingUtils::HashString("InvalidResponseException");
        static constexpr uint32_t OperationTimeoutException_HASH = ConstExprHashingUtils::HashString("OperationTimeoutException");
        static constexpr uint32_t OperationNotSupportedException_HASH = ConstExprHashingUtils::HashString("OperationNotSupportedException");
        static constexpr uint32_t InternalServiceException_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
        static constexpr uint32_t ThrottlingException_HASH = ConstExprHashingUtils::HashString("ThrottlingException");


        FederationSourceErrorCode GetFederationSourceErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidResponseException_HASH)
          {
            return FederationSourceErrorCode::InvalidResponseException;
          }
          else if (hashCode == OperationTimeoutException_HASH)
          {
            return FederationSourceErrorCode::OperationTimeoutException;
          }
          else if (hashCode == OperationNotSupportedException_HASH)
          {
            return FederationSourceErrorCode::OperationNotSupportedException;
          }
          else if (hashCode == InternalServiceException_HASH)
          {
            return FederationSourceErrorCode::InternalServiceException;
          }
          else if (hashCode == ThrottlingException_HASH)
          {
            return FederationSourceErrorCode::ThrottlingException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FederationSourceErrorCode>(hashCode);
          }

          return FederationSourceErrorCode::NOT_SET;
        }

        Aws::String GetNameForFederationSourceErrorCode(FederationSourceErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FederationSourceErrorCode::NOT_SET:
            return {};
          case FederationSourceErrorCode::InvalidResponseException:
            return "InvalidResponseException";
          case FederationSourceErrorCode::OperationTimeoutException:
            return "OperationTimeoutException";
          case FederationSourceErrorCode::OperationNotSupportedException:
            return "OperationNotSupportedException";
          case FederationSourceErrorCode::InternalServiceException:
            return "InternalServiceException";
          case FederationSourceErrorCode::ThrottlingException:
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

      } // namespace FederationSourceErrorCodeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
