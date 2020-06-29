/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortExperimentsBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace SortExperimentsByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortExperimentsBy GetSortExperimentsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortExperimentsBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortExperimentsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortExperimentsBy>(hashCode);
          }

          return SortExperimentsBy::NOT_SET;
        }

        Aws::String GetNameForSortExperimentsBy(SortExperimentsBy enumValue)
        {
          switch(enumValue)
          {
          case SortExperimentsBy::Name:
            return "Name";
          case SortExperimentsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortExperimentsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
