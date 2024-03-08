/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/SourceRevisionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace SourceRevisionTypeMapper
      {

        static const int COMMIT_ID_HASH = HashingUtils::HashString("COMMIT_ID");
        static const int IMAGE_DIGEST_HASH = HashingUtils::HashString("IMAGE_DIGEST");
        static const int S3_OBJECT_VERSION_ID_HASH = HashingUtils::HashString("S3_OBJECT_VERSION_ID");


        SourceRevisionType GetSourceRevisionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMIT_ID_HASH)
          {
            return SourceRevisionType::COMMIT_ID;
          }
          else if (hashCode == IMAGE_DIGEST_HASH)
          {
            return SourceRevisionType::IMAGE_DIGEST;
          }
          else if (hashCode == S3_OBJECT_VERSION_ID_HASH)
          {
            return SourceRevisionType::S3_OBJECT_VERSION_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceRevisionType>(hashCode);
          }

          return SourceRevisionType::NOT_SET;
        }

        Aws::String GetNameForSourceRevisionType(SourceRevisionType enumValue)
        {
          switch(enumValue)
          {
          case SourceRevisionType::NOT_SET:
            return {};
          case SourceRevisionType::COMMIT_ID:
            return "COMMIT_ID";
          case SourceRevisionType::IMAGE_DIGEST:
            return "IMAGE_DIGEST";
          case SourceRevisionType::S3_OBJECT_VERSION_ID:
            return "S3_OBJECT_VERSION_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceRevisionTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
