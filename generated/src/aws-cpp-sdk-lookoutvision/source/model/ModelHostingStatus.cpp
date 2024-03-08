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

        static const int STARTING_HOSTING_HASH = HashingUtils::HashString("STARTING_HOSTING");
        static const int HOSTED_HASH = HashingUtils::HashString("HOSTED");
        static const int HOSTING_FAILED_HASH = HashingUtils::HashString("HOSTING_FAILED");
        static const int STOPPING_HOSTING_HASH = HashingUtils::HashString("STOPPING_HOSTING");
        static const int SYSTEM_UPDATING_HASH = HashingUtils::HashString("SYSTEM_UPDATING");


        ModelHostingStatus GetModelHostingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
