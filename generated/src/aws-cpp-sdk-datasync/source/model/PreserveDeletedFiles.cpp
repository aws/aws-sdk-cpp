/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/PreserveDeletedFiles.h>
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
      namespace PreserveDeletedFilesMapper
      {

        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        PreserveDeletedFiles GetPreserveDeletedFilesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESERVE_HASH)
          {
            return PreserveDeletedFiles::PRESERVE;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return PreserveDeletedFiles::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreserveDeletedFiles>(hashCode);
          }

          return PreserveDeletedFiles::NOT_SET;
        }

        Aws::String GetNameForPreserveDeletedFiles(PreserveDeletedFiles enumValue)
        {
          switch(enumValue)
          {
          case PreserveDeletedFiles::PRESERVE:
            return "PRESERVE";
          case PreserveDeletedFiles::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreserveDeletedFilesMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
