﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class PutReportDefinitionResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API PutReportDefinitionResult();
    AWS_APPLICATIONCOSTPROFILER_API PutReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API PutReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline PutReportDefinitionResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline PutReportDefinitionResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline PutReportDefinitionResult& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutReportDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutReportDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutReportDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
