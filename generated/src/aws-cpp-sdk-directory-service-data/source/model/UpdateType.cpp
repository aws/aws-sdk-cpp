/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/UpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace UpdateTypeMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return UpdateType::ADD;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return UpdateType::REPLACE;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return UpdateType::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateType>(hashCode);
          }

          return UpdateType::NOT_SET;
        }

        Aws::String GetNameForUpdateType(UpdateType enumValue)
        {
          switch(enumValue)
          {
          case UpdateType::NOT_SET:
            return {};
          case UpdateType::ADD:
            return "ADD";
          case UpdateType::REPLACE:
            return "REPLACE";
          case UpdateType::REMOVE:
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

      } // namespace UpdateTypeMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws
