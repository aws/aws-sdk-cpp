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

        static const int InternalServiceException_HASH = HashingUtils::HashString("InternalServiceException");
        static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
        static const int InvalidArnException_HASH = HashingUtils::HashString("InvalidArnException");
        static const int LinkNameAlreadyInUseException_HASH = HashingUtils::HashString("LinkNameAlreadyInUseException");
        static const int StillContainsLinksException_HASH = HashingUtils::HashString("StillContainsLinksException");
        static const int FacetValidationException_HASH = HashingUtils::HashString("FacetValidationException");
        static const int ObjectNotDetachedException_HASH = HashingUtils::HashString("ObjectNotDetachedException");
        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
        static const int InvalidAttachmentException_HASH = HashingUtils::HashString("InvalidAttachmentException");
        static const int NotIndexException_HASH = HashingUtils::HashString("NotIndexException");
        static const int NotNodeException_HASH = HashingUtils::HashString("NotNodeException");
        static const int IndexedAttributeMissingException_HASH = HashingUtils::HashString("IndexedAttributeMissingException");
        static const int ObjectAlreadyDetachedException_HASH = HashingUtils::HashString("ObjectAlreadyDetachedException");
        static const int NotPolicyException_HASH = HashingUtils::HashString("NotPolicyException");
        static const int DirectoryNotEnabledException_HASH = HashingUtils::HashString("DirectoryNotEnabledException");
        static const int LimitExceededException_HASH = HashingUtils::HashString("LimitExceededException");
        static const int UnsupportedIndexTypeException_HASH = HashingUtils::HashString("UnsupportedIndexTypeException");


        BatchWriteExceptionType GetBatchWriteExceptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
