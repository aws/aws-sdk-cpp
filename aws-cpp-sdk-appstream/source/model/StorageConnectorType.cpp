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

#include <aws/appstream/model/StorageConnectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace StorageConnectorTypeMapper
      {

        static const int HOMEFOLDERS_HASH = HashingUtils::HashString("HOMEFOLDERS");
        static const int GOOGLE_DRIVE_HASH = HashingUtils::HashString("GOOGLE_DRIVE");
        static const int ONE_DRIVE_HASH = HashingUtils::HashString("ONE_DRIVE");


        StorageConnectorType GetStorageConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOMEFOLDERS_HASH)
          {
            return StorageConnectorType::HOMEFOLDERS;
          }
          else if (hashCode == GOOGLE_DRIVE_HASH)
          {
            return StorageConnectorType::GOOGLE_DRIVE;
          }
          else if (hashCode == ONE_DRIVE_HASH)
          {
            return StorageConnectorType::ONE_DRIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageConnectorType>(hashCode);
          }

          return StorageConnectorType::NOT_SET;
        }

        Aws::String GetNameForStorageConnectorType(StorageConnectorType enumValue)
        {
          switch(enumValue)
          {
          case StorageConnectorType::HOMEFOLDERS:
            return "HOMEFOLDERS";
          case StorageConnectorType::GOOGLE_DRIVE:
            return "GOOGLE_DRIVE";
          case StorageConnectorType::ONE_DRIVE:
            return "ONE_DRIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageConnectorTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
