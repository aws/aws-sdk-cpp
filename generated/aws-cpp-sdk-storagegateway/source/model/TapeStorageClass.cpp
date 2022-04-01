/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/TapeStorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace TapeStorageClassMapper
      {

        static const int DEEP_ARCHIVE_HASH = HashingUtils::HashString("DEEP_ARCHIVE");
        static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");


        TapeStorageClass GetTapeStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return TapeStorageClass::DEEP_ARCHIVE;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return TapeStorageClass::GLACIER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TapeStorageClass>(hashCode);
          }

          return TapeStorageClass::NOT_SET;
        }

        Aws::String GetNameForTapeStorageClass(TapeStorageClass enumValue)
        {
          switch(enumValue)
          {
          case TapeStorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          case TapeStorageClass::GLACIER:
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

      } // namespace TapeStorageClassMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
