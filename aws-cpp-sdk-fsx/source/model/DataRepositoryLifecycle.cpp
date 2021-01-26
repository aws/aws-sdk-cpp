/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DataRepositoryLifecycleMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int MISCONFIGURED_HASH = HashingUtils::HashString("MISCONFIGURED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        DataRepositoryLifecycle GetDataRepositoryLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DataRepositoryLifecycle::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DataRepositoryLifecycle::AVAILABLE;
          }
          else if (hashCode == MISCONFIGURED_HASH)
          {
            return DataRepositoryLifecycle::MISCONFIGURED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DataRepositoryLifecycle::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DataRepositoryLifecycle::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryLifecycle>(hashCode);
          }

          return DataRepositoryLifecycle::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryLifecycle(DataRepositoryLifecycle enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryLifecycle::CREATING:
            return "CREATING";
          case DataRepositoryLifecycle::AVAILABLE:
            return "AVAILABLE";
          case DataRepositoryLifecycle::MISCONFIGURED:
            return "MISCONFIGURED";
          case DataRepositoryLifecycle::UPDATING:
            return "UPDATING";
          case DataRepositoryLifecycle::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
