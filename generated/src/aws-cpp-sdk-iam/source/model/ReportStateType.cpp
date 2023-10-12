/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/ReportStateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace ReportStateTypeMapper
      {

        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t INPROGRESS_HASH = ConstExprHashingUtils::HashString("INPROGRESS");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");


        ReportStateType GetReportStateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return ReportStateType::STARTED;
          }
          else if (hashCode == INPROGRESS_HASH)
          {
            return ReportStateType::INPROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ReportStateType::COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportStateType>(hashCode);
          }

          return ReportStateType::NOT_SET;
        }

        Aws::String GetNameForReportStateType(ReportStateType enumValue)
        {
          switch(enumValue)
          {
          case ReportStateType::NOT_SET:
            return {};
          case ReportStateType::STARTED:
            return "STARTED";
          case ReportStateType::INPROGRESS:
            return "INPROGRESS";
          case ReportStateType::COMPLETE:
            return "COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportStateTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
