/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/cur/model/ReportDefinition.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

  /**
   * Request of PutReportDefinition<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API PutReportDefinitionRequest : public CostandUsageReportServiceRequest
  {
  public:
    PutReportDefinitionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const ReportDefinition& GetReportDefinition() const{ return m_reportDefinition; }

    
    inline void SetReportDefinition(const ReportDefinition& value) { m_reportDefinitionHasBeenSet = true; m_reportDefinition = value; }

    
    inline void SetReportDefinition(ReportDefinition&& value) { m_reportDefinitionHasBeenSet = true; m_reportDefinition = value; }

    
    inline PutReportDefinitionRequest& WithReportDefinition(const ReportDefinition& value) { SetReportDefinition(value); return *this;}

    
    inline PutReportDefinitionRequest& WithReportDefinition(ReportDefinition&& value) { SetReportDefinition(value); return *this;}

  private:
    ReportDefinition m_reportDefinition;
    bool m_reportDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
