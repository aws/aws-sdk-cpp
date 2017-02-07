/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BatchWriteExceptionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
