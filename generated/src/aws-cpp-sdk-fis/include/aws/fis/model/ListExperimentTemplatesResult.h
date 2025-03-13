/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentTemplateSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentTemplatesResult
  {
  public:
    AWS_FIS_API ListExperimentTemplatesResult() = default;
    AWS_FIS_API ListExperimentTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The experiment templates.</p>
     */
    inline const Aws::Vector<ExperimentTemplateSummary>& GetExperimentTemplates() const { return m_experimentTemplates; }
    template<typename ExperimentTemplatesT = Aws::Vector<ExperimentTemplateSummary>>
    void SetExperimentTemplates(ExperimentTemplatesT&& value) { m_experimentTemplatesHasBeenSet = true; m_experimentTemplates = std::forward<ExperimentTemplatesT>(value); }
    template<typename ExperimentTemplatesT = Aws::Vector<ExperimentTemplateSummary>>
    ListExperimentTemplatesResult& WithExperimentTemplates(ExperimentTemplatesT&& value) { SetExperimentTemplates(std::forward<ExperimentTemplatesT>(value)); return *this;}
    template<typename ExperimentTemplatesT = ExperimentTemplateSummary>
    ListExperimentTemplatesResult& AddExperimentTemplates(ExperimentTemplatesT&& value) { m_experimentTemplatesHasBeenSet = true; m_experimentTemplates.emplace_back(std::forward<ExperimentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExperimentTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExperimentTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExperimentTemplateSummary> m_experimentTemplates;
    bool m_experimentTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
