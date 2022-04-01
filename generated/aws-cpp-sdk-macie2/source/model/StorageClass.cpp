﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/StorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace StorageClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int REDUCED_REDUNDANCY_HASH = HashingUtils::HashString("REDUCED_REDUNDANCY");
        static const int STANDARD_IA_HASH = HashingUtils::HashString("STANDARD_IA");
        static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");
        static const int DEEP_ARCHIVE_HASH = HashingUtils::HashString("DEEP_ARCHIVE");
        static const int ONEZONE_IA_HASH = HashingUtils::HashString("ONEZONE_IA");
        static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");


        StorageClass GetStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return StorageClass::STANDARD;
          }
          else if (hashCode == REDUCED_REDUNDANCY_HASH)
          {
            return StorageClass::REDUCED_REDUNDANCY;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return StorageClass::STANDARD_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return StorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return StorageClass::DEEP_ARCHIVE;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return StorageClass::ONEZONE_IA;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return StorageClass::GLACIER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageClass>(hashCode);
          }

          return StorageClass::NOT_SET;
        }

        Aws::String GetNameForStorageClass(StorageClass enumValue)
        {
          switch(enumValue)
          {
          case StorageClass::STANDARD:
            return "STANDARD";
          case StorageClass::REDUCED_REDUNDANCY:
            return "REDUCED_REDUNDANCY";
          case StorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case StorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case StorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          case StorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case StorageClass::GLACIER:
            return "GLACIER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageClassMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
