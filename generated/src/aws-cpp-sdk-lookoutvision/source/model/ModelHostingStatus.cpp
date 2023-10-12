/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelHostingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace ModelHostingStatusMapper
      {

        static constexpr uint32_t STARTING_HOSTING_HASH = ConstExprHashingUtils::HashString("STARTING_HOSTING");
        static constexpr uint32_t HOSTED_HASH = ConstExprHashingUtils::HashString("HOSTED");
        static constexpr uint32_t HOSTING_FAILED_HASH = ConstExprHashingUtils::HashString("HOSTING_FAILED");
        static constexpr uint32_t STOPPING_HOSTING_HASH = ConstExprHashingUtils::HashString("STOPPING_HOSTING");
        static constexpr uint32_t SYSTEM_UPDATING_HASH = ConstExprHashingUtils::HashString("SYSTEM_UPDATING");


        ModelHostingStatus GetModelHostingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HOSTING_HASH)
          {
            return ModelHostingStatus::STARTING_HOSTING;
          }
          else if (hashCode == HOSTED_HASH)
          {
            return ModelHostingStatus::HOSTED;
          }
          else if (hashCode == HOSTING_FAILED_HASH)
          {
            return ModelHostingStatus::HOSTING_FAILED;
          }
          else if (hashCode == STOPPING_HOSTING_HASH)
          {
            return ModelHostingStatus::STOPPING_HOSTING;
          }
          else if (hashCode == SYSTEM_UPDATING_HASH)
          {
            return ModelHostingStatus::SYSTEM_UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelHostingStatus>(hashCode);
          }

          return ModelHostingStatus::NOT_SET;
        }

        Aws::String GetNameForModelHostingStatus(ModelHostingStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelHostingStatus::NOT_SET:
            return {};
          case ModelHostingStatus::STARTING_HOSTING:
            return "STARTING_HOSTING";
          case ModelHostingStatus::HOSTED:
            return "HOSTED";
          case ModelHostingStatus::HOSTING_FAILED:
            return "HOSTING_FAILED";
          case ModelHostingStatus::STOPPING_HOSTING:
            return "STOPPING_HOSTING";
          case ModelHostingStatus::SYSTEM_UPDATING:
            return "SYSTEM_UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelHostingStatusMapper
    } // namespace Model
  } // namespace LookoutforVision
} // namespace Aws
