/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/FileExistsBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace FileExistsBehaviorMapper
      {

        static constexpr uint32_t DISALLOW_HASH = ConstExprHashingUtils::HashString("DISALLOW");
        static constexpr uint32_t OVERWRITE_HASH = ConstExprHashingUtils::HashString("OVERWRITE");
        static constexpr uint32_t RETAIN_HASH = ConstExprHashingUtils::HashString("RETAIN");


        FileExistsBehavior GetFileExistsBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISALLOW_HASH)
          {
            return FileExistsBehavior::DISALLOW;
          }
          else if (hashCode == OVERWRITE_HASH)
          {
            return FileExistsBehavior::OVERWRITE;
          }
          else if (hashCode == RETAIN_HASH)
          {
            return FileExistsBehavior::RETAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileExistsBehavior>(hashCode);
          }

          return FileExistsBehavior::NOT_SET;
        }

        Aws::String GetNameForFileExistsBehavior(FileExistsBehavior enumValue)
        {
          switch(enumValue)
          {
          case FileExistsBehavior::NOT_SET:
            return {};
          case FileExistsBehavior::DISALLOW:
            return "DISALLOW";
          case FileExistsBehavior::OVERWRITE:
            return "OVERWRITE";
          case FileExistsBehavior::RETAIN:
            return "RETAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileExistsBehaviorMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
