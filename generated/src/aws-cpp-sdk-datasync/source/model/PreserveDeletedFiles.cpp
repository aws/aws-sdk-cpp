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

        static constexpr uint32_t PRESERVE_HASH = ConstExprHashingUtils::HashString("PRESERVE");
        static constexpr uint32_t REMOVE_HASH = ConstExprHashingUtils::HashString("REMOVE");


        PreserveDeletedFiles GetPreserveDeletedFilesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PreserveDeletedFiles::NOT_SET:
            return {};
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
