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

#include <aws/codebuild/model/ReportStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ReportStatusTypeMapper
      {

        static const int GENERATING_HASH = HashingUtils::HashString("GENERATING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ReportStatusType GetReportStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERATING_HASH)
          {
            return ReportStatusType::GENERATING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ReportStatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReportStatusType::FAILED;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return ReportStatusType::INCOMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReportStatusType::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportStatusType>(hashCode);
          }

          return ReportStatusType::NOT_SET;
        }

        Aws::String GetNameForReportStatusType(ReportStatusType enumValue)
        {
          switch(enumValue)
          {
          case ReportStatusType::GENERATING:
            return "GENERATING";
          case ReportStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case ReportStatusType::FAILED:
            return "FAILED";
          case ReportStatusType::INCOMPLETE:
            return "INCOMPLETE";
          case ReportStatusType::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportStatusTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
