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

#include <aws/acm-pca/model/AuditReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace AuditReportStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AuditReportStatus GetAuditReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AuditReportStatus::CREATING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return AuditReportStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditReportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditReportStatus>(hashCode);
          }

          return AuditReportStatus::NOT_SET;
        }

        Aws::String GetNameForAuditReportStatus(AuditReportStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditReportStatus::CREATING:
            return "CREATING";
          case AuditReportStatus::SUCCESS:
            return "SUCCESS";
          case AuditReportStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditReportStatusMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
