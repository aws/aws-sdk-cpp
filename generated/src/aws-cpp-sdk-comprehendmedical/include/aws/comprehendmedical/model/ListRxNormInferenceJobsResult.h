/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class ListRxNormInferenceJobsResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult() = default;
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline const Aws::Vector<ComprehendMedicalAsyncJobProperties>& GetComprehendMedicalAsyncJobPropertiesList() const { return m_comprehendMedicalAsyncJobPropertiesList; }
    template<typename ComprehendMedicalAsyncJobPropertiesListT = Aws::Vector<ComprehendMedicalAsyncJobProperties>>
    void SetComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobPropertiesListT&& value) { m_comprehendMedicalAsyncJobPropertiesListHasBeenSet = true; m_comprehendMedicalAsyncJobPropertiesList = std::forward<ComprehendMedicalAsyncJobPropertiesListT>(value); }
    template<typename ComprehendMedicalAsyncJobPropertiesListT = Aws::Vector<ComprehendMedicalAsyncJobProperties>>
    ListRxNormInferenceJobsResult& WithComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobPropertiesListT&& value) { SetComprehendMedicalAsyncJobPropertiesList(std::forward<ComprehendMedicalAsyncJobPropertiesListT>(value)); return *this;}
    template<typename ComprehendMedicalAsyncJobPropertiesListT = ComprehendMedicalAsyncJobProperties>
    ListRxNormInferenceJobsResult& AddComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobPropertiesListT&& value) { m_comprehendMedicalAsyncJobPropertiesListHasBeenSet = true; m_comprehendMedicalAsyncJobPropertiesList.emplace_back(std::forward<ComprehendMedicalAsyncJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRxNormInferenceJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRxNormInferenceJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComprehendMedicalAsyncJobProperties> m_comprehendMedicalAsyncJobPropertiesList;
    bool m_comprehendMedicalAsyncJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
