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

#include <aws/backup/model/StorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace StorageClassMapper
      {

        static const int WARM_HASH = HashingUtils::HashString("WARM");
        static const int COLD_HASH = HashingUtils::HashString("COLD");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        StorageClass GetStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WARM_HASH)
          {
            return StorageClass::WARM;
          }
          else if (hashCode == COLD_HASH)
          {
            return StorageClass::COLD;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StorageClass::DELETED;
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
          case StorageClass::WARM:
            return "WARM";
          case StorageClass::COLD:
            return "COLD";
          case StorageClass::DELETED:
            return "DELETED";
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
  } // namespace Backup
} // namespace Aws
