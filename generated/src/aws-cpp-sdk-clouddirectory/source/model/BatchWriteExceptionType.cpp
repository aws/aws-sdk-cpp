/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchWriteExceptionType.h>
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
      namespace BatchWriteExceptionTypeMapper
      {

        static constexpr uint32_t InternalServiceException_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
        static constexpr uint32_t ValidationException_HASH = ConstExprHashingUtils::HashString("ValidationException");
        static constexpr uint32_t InvalidArnException_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
        static constexpr uint32_t LinkNameAlreadyInUseException_HASH = ConstExprHashingUtils::HashString("LinkNameAlreadyInUseException");
        static constexpr uint32_t StillContainsLinksException_HASH = ConstExprHashingUtils::HashString("StillContainsLinksException");
        static constexpr uint32_t FacetValidationException_HASH = ConstExprHashingUtils::HashString("FacetValidationException");
        static constexpr uint32_t ObjectNotDetachedException_HASH = ConstExprHashingUtils::HashString("ObjectNotDetachedException");
        static constexpr uint32_t ResourceNotFoundException_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundException");
        static constexpr uint32_t AccessDeniedException_HASH = ConstExprHashingUtils::HashString("AccessDeniedException");
        static constexpr uint32_t InvalidAttachmentException_HASH = ConstExprHashingUtils::HashString("InvalidAttachmentException");
        static constexpr uint32_t NotIndexException_HASH = ConstExprHashingUtils::HashString("NotIndexException");
        static constexpr uint32_t NotNodeException_HASH = ConstExprHashingUtils::HashString("NotNodeException");
        static constexpr uint32_t IndexedAttributeMissingException_HASH = ConstExprHashingUtils::HashString("IndexedAttributeMissingException");
        static constexpr uint32_t ObjectAlreadyDetachedException_HASH = ConstExprHashingUtils::HashString("ObjectAlreadyDetachedException");
        static constexpr uint32_t NotPolicyException_HASH = ConstExprHashingUtils::HashString("NotPolicyException");
        static constexpr uint32_t DirectoryNotEnabledException_HASH = ConstExprHashingUtils::HashString("DirectoryNotEnabledException");
        static constexpr uint32_t LimitExceededException_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
        static constexpr uint32_t UnsupportedIndexTypeException_HASH = ConstExprHashingUtils::HashString("UnsupportedIndexTypeException");


        BatchWriteExceptionType GetBatchWriteExceptionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceException_HASH)
          {
            return BatchWriteExceptionType::InternalServiceException;
          }
          else if (hashCode == ValidationException_HASH)
          {
            return BatchWriteExceptionType::ValidationException;
          }
          else if (hashCode == InvalidArnException_HASH)
          {
            return BatchWriteExceptionType::InvalidArnException;
          }
          else if (hashCode == LinkNameAlreadyInUseException_HASH)
          {
            return BatchWriteExceptionType::LinkNameAlreadyInUseException;
          }
          else if (hashCode == StillContainsLinksException_HASH)
          {
            return BatchWriteExceptionType::StillContainsLinksException;
          }
          else if (hashCode == FacetValidationException_HASH)
          {
            return BatchWriteExceptionType::FacetValidationException;
          }
          else if (hashCode == ObjectNotDetachedException_HASH)
          {
            return BatchWriteExceptionType::ObjectNotDetachedException;
          }
          else if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchWriteExceptionType::ResourceNotFoundException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchWriteExceptionType::AccessDeniedException;
          }
          else if (hashCode == InvalidAttachmentException_HASH)
          {
            return BatchWriteExceptionType::InvalidAttachmentException;
          }
          else if (hashCode == NotIndexException_HASH)
          {
            return BatchWriteExceptionType::NotIndexException;
          }
          else if (hashCode == NotNodeException_HASH)
          {
            return BatchWriteExceptionType::NotNodeException;
          }
          else if (hashCode == IndexedAttributeMissingException_HASH)
          {
            return BatchWriteExceptionType::IndexedAttributeMissingException;
          }
          else if (hashCode == ObjectAlreadyDetachedException_HASH)
          {
            return BatchWriteExceptionType::ObjectAlreadyDetachedException;
          }
          else if (hashCode == NotPolicyException_HASH)
          {
            return BatchWriteExceptionType::NotPolicyException;
          }
          else if (hashCode == DirectoryNotEnabledException_HASH)
          {
            return BatchWriteExceptionType::DirectoryNotEnabledException;
          }
          else if (hashCode == LimitExceededException_HASH)
          {
            return BatchWriteExceptionType::LimitExceededException;
          }
          else if (hashCode == UnsupportedIndexTypeException_HASH)
          {
            return BatchWriteExceptionType::UnsupportedIndexTypeException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchWriteExceptionType>(hashCode);
          }

          return BatchWriteExceptionType::NOT_SET;
        }

        Aws::String GetNameForBatchWriteExceptionType(BatchWriteExceptionType enumValue)
        {
          switch(enumValue)
          {
          case BatchWriteExceptionType::NOT_SET:
            return {};
          case BatchWriteExceptionType::InternalServiceException:
            return "InternalServiceException";
          case BatchWriteExceptionType::ValidationException:
            return "ValidationException";
          case BatchWriteExceptionType::InvalidArnException:
            return "InvalidArnException";
          case BatchWriteExceptionType::LinkNameAlreadyInUseException:
            return "LinkNameAlreadyInUseException";
          case BatchWriteExceptionType::StillContainsLinksException:
            return "StillContainsLinksException";
          case BatchWriteExceptionType::FacetValidationException:
            return "FacetValidationException";
          case BatchWriteExceptionType::ObjectNotDetachedException:
            return "ObjectNotDetachedException";
          case BatchWriteExceptionType::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchWriteExceptionType::AccessDeniedException:
            return "AccessDeniedException";
          case BatchWriteExceptionType::InvalidAttachmentException:
            return "InvalidAttachmentException";
          case BatchWriteExceptionType::NotIndexException:
            return "NotIndexException";
          case BatchWriteExceptionType::NotNodeException:
            return "NotNodeException";
          case BatchWriteExceptionType::IndexedAttributeMissingException:
            return "IndexedAttributeMissingException";
          case BatchWriteExceptionType::ObjectAlreadyDetachedException:
            return "ObjectAlreadyDetachedException";
          case BatchWriteExceptionType::NotPolicyException:
            return "NotPolicyException";
          case BatchWriteExceptionType::DirectoryNotEnabledException:
            return "DirectoryNotEnabledException";
          case BatchWriteExceptionType::LimitExceededException:
            return "LimitExceededException";
          case BatchWriteExceptionType::UnsupportedIndexTypeException:
            return "UnsupportedIndexTypeException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchWriteExceptionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
