/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchReadExceptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace BatchReadExceptionTypeMapper
      {

        static constexpr uint32_t ValidationException_HASH = ConstExprHashingUtils::HashString("ValidationException");
        static constexpr uint32_t InvalidArnException_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
        static constexpr uint32_t ResourceNotFoundException_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundException");
        static constexpr uint32_t InvalidNextTokenException_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
        static constexpr uint32_t AccessDeniedException_HASH = ConstExprHashingUtils::HashString("AccessDeniedException");
        static constexpr uint32_t NotNodeException_HASH = ConstExprHashingUtils::HashString("NotNodeException");
        static constexpr uint32_t FacetValidationException_HASH = ConstExprHashingUtils::HashString("FacetValidationException");
        static constexpr uint32_t CannotListParentOfRootException_HASH = ConstExprHashingUtils::HashString("CannotListParentOfRootException");
        static constexpr uint32_t NotIndexException_HASH = ConstExprHashingUtils::HashString("NotIndexException");
        static constexpr uint32_t NotPolicyException_HASH = ConstExprHashingUtils::HashString("NotPolicyException");
        static constexpr uint32_t DirectoryNotEnabledException_HASH = ConstExprHashingUtils::HashString("DirectoryNotEnabledException");
        static constexpr uint32_t LimitExceededException_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
        static constexpr uint32_t InternalServiceException_HASH = ConstExprHashingUtils::HashString("InternalServiceException");


        BatchReadExceptionType GetBatchReadExceptionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ValidationException_HASH)
          {
            return BatchReadExceptionType::ValidationException;
          }
          else if (hashCode == InvalidArnException_HASH)
          {
            return BatchReadExceptionType::InvalidArnException;
          }
          else if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchReadExceptionType::ResourceNotFoundException;
          }
          else if (hashCode == InvalidNextTokenException_HASH)
          {
            return BatchReadExceptionType::InvalidNextTokenException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchReadExceptionType::AccessDeniedException;
          }
          else if (hashCode == NotNodeException_HASH)
          {
            return BatchReadExceptionType::NotNodeException;
          }
          else if (hashCode == FacetValidationException_HASH)
          {
            return BatchReadExceptionType::FacetValidationException;
          }
          else if (hashCode == CannotListParentOfRootException_HASH)
          {
            return BatchReadExceptionType::CannotListParentOfRootException;
          }
          else if (hashCode == NotIndexException_HASH)
          {
            return BatchReadExceptionType::NotIndexException;
          }
          else if (hashCode == NotPolicyException_HASH)
          {
            return BatchReadExceptionType::NotPolicyException;
          }
          else if (hashCode == DirectoryNotEnabledException_HASH)
          {
            return BatchReadExceptionType::DirectoryNotEnabledException;
          }
          else if (hashCode == LimitExceededException_HASH)
          {
            return BatchReadExceptionType::LimitExceededException;
          }
          else if (hashCode == InternalServiceException_HASH)
          {
            return BatchReadExceptionType::InternalServiceException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchReadExceptionType>(hashCode);
          }

          return BatchReadExceptionType::NOT_SET;
        }

        Aws::String GetNameForBatchReadExceptionType(BatchReadExceptionType enumValue)
        {
          switch(enumValue)
          {
          case BatchReadExceptionType::NOT_SET:
            return {};
          case BatchReadExceptionType::ValidationException:
            return "ValidationException";
          case BatchReadExceptionType::InvalidArnException:
            return "InvalidArnException";
          case BatchReadExceptionType::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchReadExceptionType::InvalidNextTokenException:
            return "InvalidNextTokenException";
          case BatchReadExceptionType::AccessDeniedException:
            return "AccessDeniedException";
          case BatchReadExceptionType::NotNodeException:
            return "NotNodeException";
          case BatchReadExceptionType::FacetValidationException:
            return "FacetValidationException";
          case BatchReadExceptionType::CannotListParentOfRootException:
            return "CannotListParentOfRootException";
          case BatchReadExceptionType::NotIndexException:
            return "NotIndexException";
          case BatchReadExceptionType::NotPolicyException:
            return "NotPolicyException";
          case BatchReadExceptionType::DirectoryNotEnabledException:
            return "DirectoryNotEnabledException";
          case BatchReadExceptionType::LimitExceededException:
            return "LimitExceededException";
          case BatchReadExceptionType::InternalServiceException:
            return "InternalServiceException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchReadExceptionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
