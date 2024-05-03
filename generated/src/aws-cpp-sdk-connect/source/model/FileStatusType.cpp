/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FileStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace FileStatusTypeMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        FileStatusType GetFileStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return FileStatusType::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return FileStatusType::REJECTED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return FileStatusType::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FileStatusType::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileStatusType>(hashCode);
          }

          return FileStatusType::NOT_SET;
        }

        Aws::String GetNameForFileStatusType(FileStatusType enumValue)
        {
          switch(enumValue)
          {
          case FileStatusType::NOT_SET:
            return {};
          case FileStatusType::APPROVED:
            return "APPROVED";
          case FileStatusType::REJECTED:
            return "REJECTED";
          case FileStatusType::PROCESSING:
            return "PROCESSING";
          case FileStatusType::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileStatusTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
