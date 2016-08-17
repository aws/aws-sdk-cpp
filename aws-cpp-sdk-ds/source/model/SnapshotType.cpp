/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/SnapshotType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace SnapshotTypeMapper
      {

        static const int Auto_HASH = HashingUtils::HashString("Auto");
        static const int Manual_HASH = HashingUtils::HashString("Manual");


        SnapshotType GetSnapshotTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return SnapshotType::Auto;
          }
          else if (hashCode == Manual_HASH)
          {
            return SnapshotType::Manual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotType>(hashCode);
          }

          return SnapshotType::NOT_SET;
        }

        Aws::String GetNameForSnapshotType(SnapshotType enumValue)
        {
          switch(enumValue)
          {
          case SnapshotType::Auto:
            return "Auto";
          case SnapshotType::Manual:
            return "Manual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SnapshotTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
