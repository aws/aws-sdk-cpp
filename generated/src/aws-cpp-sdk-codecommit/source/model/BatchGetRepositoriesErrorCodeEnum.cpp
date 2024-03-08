/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchGetRepositoriesErrorCodeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace BatchGetRepositoriesErrorCodeEnumMapper
      {

        static const int EncryptionIntegrityChecksFailedException_HASH = HashingUtils::HashString("EncryptionIntegrityChecksFailedException");
        static const int EncryptionKeyAccessDeniedException_HASH = HashingUtils::HashString("EncryptionKeyAccessDeniedException");
        static const int EncryptionKeyDisabledException_HASH = HashingUtils::HashString("EncryptionKeyDisabledException");
        static const int EncryptionKeyNotFoundException_HASH = HashingUtils::HashString("EncryptionKeyNotFoundException");
        static const int EncryptionKeyUnavailableException_HASH = HashingUtils::HashString("EncryptionKeyUnavailableException");
        static const int RepositoryDoesNotExistException_HASH = HashingUtils::HashString("RepositoryDoesNotExistException");


        BatchGetRepositoriesErrorCodeEnum GetBatchGetRepositoriesErrorCodeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EncryptionIntegrityChecksFailedException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::EncryptionIntegrityChecksFailedException;
          }
          else if (hashCode == EncryptionKeyAccessDeniedException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::EncryptionKeyAccessDeniedException;
          }
          else if (hashCode == EncryptionKeyDisabledException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::EncryptionKeyDisabledException;
          }
          else if (hashCode == EncryptionKeyNotFoundException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::EncryptionKeyNotFoundException;
          }
          else if (hashCode == EncryptionKeyUnavailableException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::EncryptionKeyUnavailableException;
          }
          else if (hashCode == RepositoryDoesNotExistException_HASH)
          {
            return BatchGetRepositoriesErrorCodeEnum::RepositoryDoesNotExistException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchGetRepositoriesErrorCodeEnum>(hashCode);
          }

          return BatchGetRepositoriesErrorCodeEnum::NOT_SET;
        }

        Aws::String GetNameForBatchGetRepositoriesErrorCodeEnum(BatchGetRepositoriesErrorCodeEnum enumValue)
        {
          switch(enumValue)
          {
          case BatchGetRepositoriesErrorCodeEnum::NOT_SET:
            return {};
          case BatchGetRepositoriesErrorCodeEnum::EncryptionIntegrityChecksFailedException:
            return "EncryptionIntegrityChecksFailedException";
          case BatchGetRepositoriesErrorCodeEnum::EncryptionKeyAccessDeniedException:
            return "EncryptionKeyAccessDeniedException";
          case BatchGetRepositoriesErrorCodeEnum::EncryptionKeyDisabledException:
            return "EncryptionKeyDisabledException";
          case BatchGetRepositoriesErrorCodeEnum::EncryptionKeyNotFoundException:
            return "EncryptionKeyNotFoundException";
          case BatchGetRepositoriesErrorCodeEnum::EncryptionKeyUnavailableException:
            return "EncryptionKeyUnavailableException";
          case BatchGetRepositoriesErrorCodeEnum::RepositoryDoesNotExistException:
            return "RepositoryDoesNotExistException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchGetRepositoriesErrorCodeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
