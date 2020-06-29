/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/ContainerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaStore
  {
    namespace Model
    {
      namespace ContainerStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ContainerStatus GetContainerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ContainerStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ContainerStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ContainerStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerStatus>(hashCode);
          }

          return ContainerStatus::NOT_SET;
        }

        Aws::String GetNameForContainerStatus(ContainerStatus enumValue)
        {
          switch(enumValue)
          {
          case ContainerStatus::ACTIVE:
            return "ACTIVE";
          case ContainerStatus::CREATING:
            return "CREATING";
          case ContainerStatus::DELETING:
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

      } // namespace ContainerStatusMapper
    } // namespace Model
  } // namespace MediaStore
} // namespace Aws
