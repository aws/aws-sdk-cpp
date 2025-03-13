/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/ApplicationVersionSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListApplicationVersionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of application versions.</p>
     */
    inline const Aws::Vector<ApplicationVersionSummary>& GetApplicationVersions() const { return m_applicationVersions; }
    template<typename ApplicationVersionsT = Aws::Vector<ApplicationVersionSummary>>
    void SetApplicationVersions(ApplicationVersionsT&& value) { m_applicationVersionsHasBeenSet = true; m_applicationVersions = std::forward<ApplicationVersionsT>(value); }
    template<typename ApplicationVersionsT = Aws::Vector<ApplicationVersionSummary>>
    ListApplicationVersionsResult& WithApplicationVersions(ApplicationVersionsT&& value) { SetApplicationVersions(std::forward<ApplicationVersionsT>(value)); return *this;}
    template<typename ApplicationVersionsT = ApplicationVersionSummary>
    ListApplicationVersionsResult& AddApplicationVersions(ApplicationVersionsT&& value) { m_applicationVersionsHasBeenSet = true; m_applicationVersions.emplace_back(std::forward<ApplicationVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationVersionSummary> m_applicationVersions;
    bool m_applicationVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
