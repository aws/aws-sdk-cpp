/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace AnalysisStatusMapper
      {

        static constexpr uint32_t running_HASH = ConstExprHashingUtils::HashString("running");
        static constexpr uint32_t succeeded_HASH = ConstExprHashingUtils::HashString("succeeded");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        AnalysisStatus GetAnalysisStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == running_HASH)
          {
            return AnalysisStatus::running;
          }
          else if (hashCode == succeeded_HASH)
          {
            return AnalysisStatus::succeeded;
          }
          else if (hashCode == failed_HASH)
          {
            return AnalysisStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisStatus>(hashCode);
          }

          return AnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForAnalysisStatus(AnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalysisStatus::NOT_SET:
            return {};
          case AnalysisStatus::running:
            return "running";
          case AnalysisStatus::succeeded:
            return "succeeded";
          case AnalysisStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
