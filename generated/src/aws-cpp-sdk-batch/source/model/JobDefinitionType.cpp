/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobDefinitionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace JobDefinitionTypeMapper
      {

        static const int container_HASH = HashingUtils::HashString("container");
        static const int multinode_HASH = HashingUtils::HashString("multinode");


        JobDefinitionType GetJobDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == container_HASH)
          {
            return JobDefinitionType::container;
          }
          else if (hashCode == multinode_HASH)
          {
            return JobDefinitionType::multinode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobDefinitionType>(hashCode);
          }

          return JobDefinitionType::NOT_SET;
        }

        Aws::String GetNameForJobDefinitionType(JobDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case JobDefinitionType::container:
            return "container";
          case JobDefinitionType::multinode:
            return "multinode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobDefinitionTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
