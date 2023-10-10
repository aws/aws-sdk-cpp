/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/StorageAccessLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace StorageAccessLevelMapper
      {

        static const int public__HASH = HashingUtils::HashString("public");
        static const int protected__HASH = HashingUtils::HashString("protected");
        static const int private__HASH = HashingUtils::HashString("private");


        StorageAccessLevel GetStorageAccessLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == public__HASH)
          {
            return StorageAccessLevel::public_;
          }
          else if (hashCode == protected__HASH)
          {
            return StorageAccessLevel::protected_;
          }
          else if (hashCode == private__HASH)
          {
            return StorageAccessLevel::private_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageAccessLevel>(hashCode);
          }

          return StorageAccessLevel::NOT_SET;
        }

        Aws::String GetNameForStorageAccessLevel(StorageAccessLevel enumValue)
        {
          switch(enumValue)
          {
          case StorageAccessLevel::NOT_SET:
            return {};
          case StorageAccessLevel::public_:
            return "public";
          case StorageAccessLevel::protected_:
            return "protected";
          case StorageAccessLevel::private_:
            return "private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageAccessLevelMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
