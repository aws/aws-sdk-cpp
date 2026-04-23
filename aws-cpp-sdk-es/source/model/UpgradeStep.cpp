/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/es/model/UpgradeStep.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace UpgradeStepMapper
      {

        static const int PRE_UPGRADE_CHECK_HASH = HashingUtils::HashString("PRE_UPGRADE_CHECK");
        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");
        static const int UPGRADE_HASH = HashingUtils::HashString("UPGRADE");


        UpgradeStep GetUpgradeStepForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_UPGRADE_CHECK_HASH)
          {
            return UpgradeStep::PRE_UPGRADE_CHECK;
          }
          else if (hashCode == SNAPSHOT_HASH)
          {
            return UpgradeStep::SNAPSHOT;
          }
          else if (hashCode == UPGRADE_HASH)
          {
            return UpgradeStep::UPGRADE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpgradeStep>(hashCode);
          }

          return UpgradeStep::NOT_SET;
        }

        Aws::String GetNameForUpgradeStep(UpgradeStep enumValue)
        {
          switch(enumValue)
          {
          case UpgradeStep::PRE_UPGRADE_CHECK:
            return "PRE_UPGRADE_CHECK";
          case UpgradeStep::SNAPSHOT:
            return "SNAPSHOT";
          case UpgradeStep::UPGRADE:
            return "UPGRADE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpgradeStepMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
