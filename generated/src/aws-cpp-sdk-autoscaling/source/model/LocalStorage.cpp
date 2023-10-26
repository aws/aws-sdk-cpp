/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LocalStorage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace LocalStorageMapper
      {

        static const int included_HASH = HashingUtils::HashString("included");
        static const int excluded_HASH = HashingUtils::HashString("excluded");
        static const int required_HASH = HashingUtils::HashString("required");


        LocalStorage GetLocalStorageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == included_HASH)
          {
            return LocalStorage::included;
          }
          else if (hashCode == excluded_HASH)
          {
            return LocalStorage::excluded;
          }
          else if (hashCode == required_HASH)
          {
            return LocalStorage::required;
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
          case LocalStorage::excluded:
            return "excluded";
          case LocalStorage::required:
            return "required";
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
  } // namespace AutoScaling
} // namespace Aws
