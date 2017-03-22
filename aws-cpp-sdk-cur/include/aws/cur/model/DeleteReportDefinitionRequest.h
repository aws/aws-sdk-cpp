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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

  /**
   * Request of DeleteReportDefinition<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionRequest : public CostandUsageReportServiceRequest
  {
  public:
    DeleteReportDefinitionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    
    inline DeleteReportDefinitionRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    
    inline DeleteReportDefinitionRequest& WithReportName(Aws::String&& value) { SetReportName(value); return *this;}

    
    inline DeleteReportDefinitionRequest& WithReportName(const char* value) { SetReportName(value); return *this;}

  private:
    Aws::String m_reportName;
    bool m_reportNameHasBeenSet;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
