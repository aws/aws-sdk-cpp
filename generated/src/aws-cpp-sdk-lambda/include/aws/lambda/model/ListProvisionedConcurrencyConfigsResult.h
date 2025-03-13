/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/ProvisionedConcurrencyConfigListItem.h>
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
namespace Lambda
{
namespace Model
{
  class ListProvisionedConcurrencyConfigsResult
  {
  public:
    AWS_LAMBDA_API ListProvisionedConcurrencyConfigsResult() = default;
    AWS_LAMBDA_API ListProvisionedConcurrencyConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListProvisionedConcurrencyConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline const Aws::Vector<ProvisionedConcurrencyConfigListItem>& GetProvisionedConcurrencyConfigs() const { return m_provisionedConcurrencyConfigs; }
    template<typename ProvisionedConcurrencyConfigsT = Aws::Vector<ProvisionedConcurrencyConfigListItem>>
    void SetProvisionedConcurrencyConfigs(ProvisionedConcurrencyConfigsT&& value) { m_provisionedConcurrencyConfigsHasBeenSet = true; m_provisionedConcurrencyConfigs = std::forward<ProvisionedConcurrencyConfigsT>(value); }
    template<typename ProvisionedConcurrencyConfigsT = Aws::Vector<ProvisionedConcurrencyConfigListItem>>
    ListProvisionedConcurrencyConfigsResult& WithProvisionedConcurrencyConfigs(ProvisionedConcurrencyConfigsT&& value) { SetProvisionedConcurrencyConfigs(std::forward<ProvisionedConcurrencyConfigsT>(value)); return *this;}
    template<typename ProvisionedConcurrencyConfigsT = ProvisionedConcurrencyConfigListItem>
    ListProvisionedConcurrencyConfigsResult& AddProvisionedConcurrencyConfigs(ProvisionedConcurrencyConfigsT&& value) { m_provisionedConcurrencyConfigsHasBeenSet = true; m_provisionedConcurrencyConfigs.emplace_back(std::forward<ProvisionedConcurrencyConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListProvisionedConcurrencyConfigsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisionedConcurrencyConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedConcurrencyConfigListItem> m_provisionedConcurrencyConfigs;
    bool m_provisionedConcurrencyConfigsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
