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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ExportJobsResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{
  class AWS_PINPOINT_API GetExportJobsResult
  {
  public:
    GetExportJobsResult();
    GetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ExportJobsResponse& GetExportJobsResponse() const{ return m_exportJobsResponse; }

    
    inline void SetExportJobsResponse(const ExportJobsResponse& value) { m_exportJobsResponse = value; }

    
    inline void SetExportJobsResponse(ExportJobsResponse&& value) { m_exportJobsResponse = std::move(value); }

    
    inline GetExportJobsResult& WithExportJobsResponse(const ExportJobsResponse& value) { SetExportJobsResponse(value); return *this;}

    
    inline GetExportJobsResult& WithExportJobsResponse(ExportJobsResponse&& value) { SetExportJobsResponse(std::move(value)); return *this;}

  private:

    ExportJobsResponse m_exportJobsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
