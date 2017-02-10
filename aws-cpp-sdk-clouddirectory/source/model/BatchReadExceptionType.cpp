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

        static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
        static const int InvalidArnException_HASH = HashingUtils::HashString("InvalidArnException");
        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int InvalidNextTokenException_HASH = HashingUtils::HashString("InvalidNextTokenException");
        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
        static const int NotNodeException_HASH = HashingUtils::HashString("NotNodeException");


        BatchReadExceptionType GetBatchReadExceptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BatchReadExceptionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
