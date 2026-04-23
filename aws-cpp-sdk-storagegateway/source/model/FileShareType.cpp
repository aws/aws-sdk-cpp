/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/storagegateway/model/FileShareType.h>
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
      namespace FileShareTypeMapper
      {

        static const int NFS_HASH = HashingUtils::HashString("NFS");
        static const int SMB_HASH = HashingUtils::HashString("SMB");


        FileShareType GetFileShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NFS_HASH)
          {
            return FileShareType::NFS;
          }
          else if (hashCode == SMB_HASH)
          {
            return FileShareType::SMB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileShareType>(hashCode);
          }

          return FileShareType::NOT_SET;
        }

        Aws::String GetNameForFileShareType(FileShareType enumValue)
        {
          switch(enumValue)
          {
          case FileShareType::NFS:
            return "NFS";
          case FileShareType::SMB:
            return "SMB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileShareTypeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
