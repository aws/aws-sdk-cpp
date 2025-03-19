/**
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
    AWS_EMRCONTAINERS_API ListJobTemplatesResult() = default;
    AWS_EMRCONTAINERS_API ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output lists information about the specified job templates.</p>
     */
    inline const Aws::Vector<JobTemplate>& GetTemplates() const { return m_templates; }
    template<typename TemplatesT = Aws::Vector<JobTemplate>>
    void SetTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates = std::forward<TemplatesT>(value); }
    template<typename TemplatesT = Aws::Vector<JobTemplate>>
    ListJobTemplatesResult& WithTemplates(TemplatesT&& value) { SetTemplates(std::forward<TemplatesT>(value)); return *this;}
    template<typename TemplatesT = JobTemplate>
    ListJobTemplatesResult& AddTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates.emplace_back(std::forward<TemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> This output displays the token for the next set of job templates.</p>
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

    Aws::Vector<JobTemplate> m_templates;
    bool m_templatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
