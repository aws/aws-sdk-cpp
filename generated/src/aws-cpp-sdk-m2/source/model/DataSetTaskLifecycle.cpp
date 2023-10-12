/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace DataSetTaskLifecycleMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");


        DataSetTaskLifecycle GetDataSetTaskLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return DataSetTaskLifecycle::Creating;
          }
          else if (hashCode == Running_HASH)
          {
            return DataSetTaskLifecycle::Running;
          }
          else if (hashCode == Completed_HASH)
          {
            return DataSetTaskLifecycle::Completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetTaskLifecycle>(hashCode);
          }

          return DataSetTaskLifecycle::NOT_SET;
        }

        Aws::String GetNameForDataSetTaskLifecycle(DataSetTaskLifecycle enumValue)
        {
          switch(enumValue)
          {
          case DataSetTaskLifecycle::NOT_SET:
            return {};
          case DataSetTaskLifecycle::Creating:
            return "Creating";
          case DataSetTaskLifecycle::Running:
            return "Running";
          case DataSetTaskLifecycle::Completed:
            return "Completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetTaskLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
