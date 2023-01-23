/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace PackageVersionErrorCodeMapper
      {

        static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("ALREADY_EXISTS");
        static const int MISMATCHED_REVISION_HASH = HashingUtils::HashString("MISMATCHED_REVISION");
        static const int MISMATCHED_STATUS_HASH = HashingUtils::HashString("MISMATCHED_STATUS");
        static const int NOT_ALLOWED_HASH = HashingUtils::HashString("NOT_ALLOWED");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        PackageVersionErrorCode GetPackageVersionErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALREADY_EXISTS_HASH)
          {
            return PackageVersionErrorCode::ALREADY_EXISTS;
          }
          else if (hashCode == MISMATCHED_REVISION_HASH)
          {
            return PackageVersionErrorCode::MISMATCHED_REVISION;
          }
          else if (hashCode == MISMATCHED_STATUS_HASH)
          {
            return PackageVersionErrorCode::MISMATCHED_STATUS;
          }
          else if (hashCode == NOT_ALLOWED_HASH)
          {
            return PackageVersionErrorCode::NOT_ALLOWED;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return PackageVersionErrorCode::NOT_FOUND;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return PackageVersionErrorCode::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionErrorCode>(hashCode);
          }

          return PackageVersionErrorCode::NOT_SET;
        }

        Aws::String GetNameForPackageVersionErrorCode(PackageVersionErrorCode enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionErrorCode::ALREADY_EXISTS:
            return "ALREADY_EXISTS";
          case PackageVersionErrorCode::MISMATCHED_REVISION:
            return "MISMATCHED_REVISION";
          case PackageVersionErrorCode::MISMATCHED_STATUS:
            return "MISMATCHED_STATUS";
          case PackageVersionErrorCode::NOT_ALLOWED:
            return "NOT_ALLOWED";
          case PackageVersionErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case PackageVersionErrorCode::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageVersionErrorCodeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
