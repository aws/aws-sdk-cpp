/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentReportDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace AssessmentReportDestinationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");


        AssessmentReportDestinationType GetAssessmentReportDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return AssessmentReportDestinationType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentReportDestinationType>(hashCode);
          }

          return AssessmentReportDestinationType::NOT_SET;
        }

        Aws::String GetNameForAssessmentReportDestinationType(AssessmentReportDestinationType enumValue)
        {
          switch(enumValue)
          {
          case AssessmentReportDestinationType::NOT_SET:
            return {};
          case AssessmentReportDestinationType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentReportDestinationTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
