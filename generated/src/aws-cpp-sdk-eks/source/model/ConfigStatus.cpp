/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ConfigStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace ConfigStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        ConfigStatus GetConfigStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConfigStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConfigStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ConfigStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigStatus>(hashCode);
          }

          return ConfigStatus::NOT_SET;
        }

        Aws::String GetNameForConfigStatus(ConfigStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigStatus::NOT_SET:
            return {};
          case ConfigStatus::CREATING:
            return "CREATING";
          case ConfigStatus::DELETING:
            return "DELETING";
          case ConfigStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
