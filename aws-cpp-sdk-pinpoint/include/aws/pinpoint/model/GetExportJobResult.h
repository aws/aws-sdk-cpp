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
#include <aws/pinpoint/model/ExportJobResponse.h>
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
  class AWS_PINPOINT_API GetExportJobResult
  {
  public:
    GetExportJobResult();
    GetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ExportJobResponse& GetExportJobResponse() const{ return m_exportJobResponse; }

    
    inline void SetExportJobResponse(const ExportJobResponse& value) { m_exportJobResponse = value; }

    
    inline void SetExportJobResponse(ExportJobResponse&& value) { m_exportJobResponse = std::move(value); }

    
    inline GetExportJobResult& WithExportJobResponse(const ExportJobResponse& value) { SetExportJobResponse(value); return *this;}

    
    inline GetExportJobResult& WithExportJobResponse(ExportJobResponse&& value) { SetExportJobResponse(std::move(value)); return *this;}

  private:

    ExportJobResponse m_exportJobResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
