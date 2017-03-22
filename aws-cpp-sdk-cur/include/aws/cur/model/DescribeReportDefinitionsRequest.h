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
   * Request of DescribeReportDefinitions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsRequest : public CostandUsageReportServiceRequest
  {
  public:
    DescribeReportDefinitionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeReportDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeReportDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeReportDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeReportDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
