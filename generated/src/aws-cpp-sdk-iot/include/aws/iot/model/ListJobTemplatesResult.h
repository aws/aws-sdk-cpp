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
    AWS_IOT_API ListJobTemplatesResult() = default;
    AWS_IOT_API ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline const Aws::Vector<JobTemplateSummary>& GetJobTemplates() const { return m_jobTemplates; }
    template<typename JobTemplatesT = Aws::Vector<JobTemplateSummary>>
    void SetJobTemplates(JobTemplatesT&& value) { m_jobTemplatesHasBeenSet = true; m_jobTemplates = std::forward<JobTemplatesT>(value); }
    template<typename JobTemplatesT = Aws::Vector<JobTemplateSummary>>
    ListJobTemplatesResult& WithJobTemplates(JobTemplatesT&& value) { SetJobTemplates(std::forward<JobTemplatesT>(value)); return *this;}
    template<typename JobTemplatesT = JobTemplateSummary>
    ListJobTemplatesResult& AddJobTemplates(JobTemplatesT&& value) { m_jobTemplatesHasBeenSet = true; m_jobTemplates.emplace_back(std::forward<JobTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobTemplateSummary> m_jobTemplates;
    bool m_jobTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
