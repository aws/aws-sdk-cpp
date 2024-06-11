﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateMetadata.h>
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
namespace Connect
{
namespace Model
{
  class ListTaskTemplatesResult
  {
  public:
    AWS_CONNECT_API ListTaskTemplatesResult();
    AWS_CONNECT_API ListTaskTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTaskTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about a list of task templates belonging to an instance.</p>
     */
    inline const Aws::Vector<TaskTemplateMetadata>& GetTaskTemplates() const{ return m_taskTemplates; }
    inline void SetTaskTemplates(const Aws::Vector<TaskTemplateMetadata>& value) { m_taskTemplates = value; }
    inline void SetTaskTemplates(Aws::Vector<TaskTemplateMetadata>&& value) { m_taskTemplates = std::move(value); }
    inline ListTaskTemplatesResult& WithTaskTemplates(const Aws::Vector<TaskTemplateMetadata>& value) { SetTaskTemplates(value); return *this;}
    inline ListTaskTemplatesResult& WithTaskTemplates(Aws::Vector<TaskTemplateMetadata>&& value) { SetTaskTemplates(std::move(value)); return *this;}
    inline ListTaskTemplatesResult& AddTaskTemplates(const TaskTemplateMetadata& value) { m_taskTemplates.push_back(value); return *this; }
    inline ListTaskTemplatesResult& AddTaskTemplates(TaskTemplateMetadata&& value) { m_taskTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as a null in the
     * response.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTaskTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTaskTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTaskTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTaskTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTaskTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTaskTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TaskTemplateMetadata> m_taskTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
