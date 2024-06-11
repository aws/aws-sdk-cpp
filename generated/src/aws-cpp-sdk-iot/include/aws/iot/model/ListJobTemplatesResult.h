﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobTemplateSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListJobTemplatesResult
  {
  public:
    AWS_IOT_API ListJobTemplatesResult();
    AWS_IOT_API ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline const Aws::Vector<JobTemplateSummary>& GetJobTemplates() const{ return m_jobTemplates; }
    inline void SetJobTemplates(const Aws::Vector<JobTemplateSummary>& value) { m_jobTemplates = value; }
    inline void SetJobTemplates(Aws::Vector<JobTemplateSummary>&& value) { m_jobTemplates = std::move(value); }
    inline ListJobTemplatesResult& WithJobTemplates(const Aws::Vector<JobTemplateSummary>& value) { SetJobTemplates(value); return *this;}
    inline ListJobTemplatesResult& WithJobTemplates(Aws::Vector<JobTemplateSummary>&& value) { SetJobTemplates(std::move(value)); return *this;}
    inline ListJobTemplatesResult& AddJobTemplates(const JobTemplateSummary& value) { m_jobTemplates.push_back(value); return *this; }
    inline ListJobTemplatesResult& AddJobTemplates(JobTemplateSummary&& value) { m_jobTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobTemplateSummary> m_jobTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
