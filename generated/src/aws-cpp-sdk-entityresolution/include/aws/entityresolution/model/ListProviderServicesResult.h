/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/ProviderServiceSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListProviderServicesResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult() = default;
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline const Aws::Vector<ProviderServiceSummary>& GetProviderServiceSummaries() const { return m_providerServiceSummaries; }
    template<typename ProviderServiceSummariesT = Aws::Vector<ProviderServiceSummary>>
    void SetProviderServiceSummaries(ProviderServiceSummariesT&& value) { m_providerServiceSummariesHasBeenSet = true; m_providerServiceSummaries = std::forward<ProviderServiceSummariesT>(value); }
    template<typename ProviderServiceSummariesT = Aws::Vector<ProviderServiceSummary>>
    ListProviderServicesResult& WithProviderServiceSummaries(ProviderServiceSummariesT&& value) { SetProviderServiceSummaries(std::forward<ProviderServiceSummariesT>(value)); return *this;}
    template<typename ProviderServiceSummariesT = ProviderServiceSummary>
    ListProviderServicesResult& AddProviderServiceSummaries(ProviderServiceSummariesT&& value) { m_providerServiceSummariesHasBeenSet = true; m_providerServiceSummaries.emplace_back(std::forward<ProviderServiceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProviderServicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProviderServicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProviderServiceSummary> m_providerServiceSummaries;
    bool m_providerServiceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
