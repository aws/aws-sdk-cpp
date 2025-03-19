/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ContinuousExportDescription.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeContinuousExportsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline const Aws::Vector<ContinuousExportDescription>& GetDescriptions() const { return m_descriptions; }
    template<typename DescriptionsT = Aws::Vector<ContinuousExportDescription>>
    void SetDescriptions(DescriptionsT&& value) { m_descriptionsHasBeenSet = true; m_descriptions = std::forward<DescriptionsT>(value); }
    template<typename DescriptionsT = Aws::Vector<ContinuousExportDescription>>
    DescribeContinuousExportsResult& WithDescriptions(DescriptionsT&& value) { SetDescriptions(std::forward<DescriptionsT>(value)); return *this;}
    template<typename DescriptionsT = ContinuousExportDescription>
    DescribeContinuousExportsResult& AddDescriptions(DescriptionsT&& value) { m_descriptionsHasBeenSet = true; m_descriptions.emplace_back(std::forward<DescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeContinuousExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContinuousExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContinuousExportDescription> m_descriptions;
    bool m_descriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
