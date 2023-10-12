/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ApplicationVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace ApplicationVersionStatusMapper
      {

        static constexpr uint32_t Processed_HASH = ConstExprHashingUtils::HashString("Processed");
        static constexpr uint32_t Unprocessed_HASH = ConstExprHashingUtils::HashString("Unprocessed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t Building_HASH = ConstExprHashingUtils::HashString("Building");


        ApplicationVersionStatus GetApplicationVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processed_HASH)
          {
            return ApplicationVersionStatus::Processed;
          }
          else if (hashCode == Unprocessed_HASH)
          {
            return ApplicationVersionStatus::Unprocessed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ApplicationVersionStatus::Failed;
          }
          else if (hashCode == Processing_HASH)
          {
            return ApplicationVersionStatus::Processing;
          }
          else if (hashCode == Building_HASH)
          {
            return ApplicationVersionStatus::Building;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationVersionStatus>(hashCode);
          }

          return ApplicationVersionStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationVersionStatus(ApplicationVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationVersionStatus::NOT_SET:
            return {};
          case ApplicationVersionStatus::Processed:
            return "Processed";
          case ApplicationVersionStatus::Unprocessed:
            return "Unprocessed";
          case ApplicationVersionStatus::Failed:
            return "Failed";
          case ApplicationVersionStatus::Processing:
            return "Processing";
          case ApplicationVersionStatus::Building:
            return "Building";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationVersionStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
