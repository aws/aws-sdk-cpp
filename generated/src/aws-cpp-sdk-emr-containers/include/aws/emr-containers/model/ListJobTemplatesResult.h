﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobTemplate.h>
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
namespace EMRContainers
{
namespace Model
{
  class ListJobTemplatesResult
  {
  public:
    AWS_EMRCONTAINERS_API ListJobTemplatesResult();
    AWS_EMRCONTAINERS_API ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output lists information about the specified job templates.</p>
     */
    inline const Aws::Vector<JobTemplate>& GetTemplates() const{ return m_templates; }
    inline void SetTemplates(const Aws::Vector<JobTemplate>& value) { m_templates = value; }
    inline void SetTemplates(Aws::Vector<JobTemplate>&& value) { m_templates = std::move(value); }
    inline ListJobTemplatesResult& WithTemplates(const Aws::Vector<JobTemplate>& value) { SetTemplates(value); return *this;}
    inline ListJobTemplatesResult& WithTemplates(Aws::Vector<JobTemplate>&& value) { SetTemplates(std::move(value)); return *this;}
    inline ListJobTemplatesResult& AddTemplates(const JobTemplate& value) { m_templates.push_back(value); return *this; }
    inline ListJobTemplatesResult& AddTemplates(JobTemplate&& value) { m_templates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> This output displays the token for the next set of job templates.</p>
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

    Aws::Vector<JobTemplate> m_templates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
