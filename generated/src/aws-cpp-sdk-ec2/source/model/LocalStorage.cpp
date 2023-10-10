/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalStorage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LocalStorageMapper
      {

        static const int included_HASH = HashingUtils::HashString("included");
        static const int required_HASH = HashingUtils::HashString("required");
        static const int excluded_HASH = HashingUtils::HashString("excluded");


        LocalStorage GetLocalStorageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == included_HASH)
          {
            return LocalStorage::included;
          }
          else if (hashCode == required_HASH)
          {
            return LocalStorage::required;
          }
          else if (hashCode == excluded_HASH)
          {
            return LocalStorage::excluded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalStorage>(hashCode);
          }

          return LocalStorage::NOT_SET;
        }

        Aws::String GetNameForLocalStorage(LocalStorage enumValue)
        {
          switch(enumValue)
          {
          case LocalStorage::NOT_SET:
            return {};
          case LocalStorage::included:
            return "included";
          case LocalStorage::required:
            return "required";
          case LocalStorage::excluded:
            return "excluded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocalStorageMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
