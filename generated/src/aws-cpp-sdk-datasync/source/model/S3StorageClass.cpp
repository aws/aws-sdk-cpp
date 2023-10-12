/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/S3StorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace S3StorageClassMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t STANDARD_IA_HASH = ConstExprHashingUtils::HashString("STANDARD_IA");
        static constexpr uint32_t ONEZONE_IA_HASH = ConstExprHashingUtils::HashString("ONEZONE_IA");
        static constexpr uint32_t INTELLIGENT_TIERING_HASH = ConstExprHashingUtils::HashString("INTELLIGENT_TIERING");
        static constexpr uint32_t GLACIER_HASH = ConstExprHashingUtils::HashString("GLACIER");
        static constexpr uint32_t DEEP_ARCHIVE_HASH = ConstExprHashingUtils::HashString("DEEP_ARCHIVE");
        static constexpr uint32_t OUTPOSTS_HASH = ConstExprHashingUtils::HashString("OUTPOSTS");
        static constexpr uint32_t GLACIER_INSTANT_RETRIEVAL_HASH = ConstExprHashingUtils::HashString("GLACIER_INSTANT_RETRIEVAL");


        S3StorageClass GetS3StorageClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return S3StorageClass::STANDARD;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return S3StorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return S3StorageClass::ONEZONE_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return S3StorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return S3StorageClass::GLACIER;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return S3StorageClass::DEEP_ARCHIVE;
          }
          else if (hashCode == OUTPOSTS_HASH)
          {
            return S3StorageClass::OUTPOSTS;
          }
          else if (hashCode == GLACIER_INSTANT_RETRIEVAL_HASH)
          {
            return S3StorageClass::GLACIER_INSTANT_RETRIEVAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3StorageClass>(hashCode);
          }

          return S3StorageClass::NOT_SET;
        }

        Aws::String GetNameForS3StorageClass(S3StorageClass enumValue)
        {
          switch(enumValue)
          {
          case S3StorageClass::NOT_SET:
            return {};
          case S3StorageClass::STANDARD:
            return "STANDARD";
          case S3StorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case S3StorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case S3StorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case S3StorageClass::GLACIER:
            return "GLACIER";
          case S3StorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          case S3StorageClass::OUTPOSTS:
            return "OUTPOSTS";
          case S3StorageClass::GLACIER_INSTANT_RETRIEVAL:
            return "GLACIER_INSTANT_RETRIEVAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3StorageClassMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
