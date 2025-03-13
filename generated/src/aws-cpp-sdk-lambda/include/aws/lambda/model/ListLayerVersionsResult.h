/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/LayerVersionsListItem.h>
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
  class ListLayerVersionsResult
  {
  public:
    AWS_LAMBDA_API ListLayerVersionsResult() = default;
    AWS_LAMBDA_API ListLayerVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListLayerVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token returned when the response doesn't contain all
     * versions.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListLayerVersionsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of versions.</p>
     */
    inline const Aws::Vector<LayerVersionsListItem>& GetLayerVersions() const { return m_layerVersions; }
    template<typename LayerVersionsT = Aws::Vector<LayerVersionsListItem>>
    void SetLayerVersions(LayerVersionsT&& value) { m_layerVersionsHasBeenSet = true; m_layerVersions = std::forward<LayerVersionsT>(value); }
    template<typename LayerVersionsT = Aws::Vector<LayerVersionsListItem>>
    ListLayerVersionsResult& WithLayerVersions(LayerVersionsT&& value) { SetLayerVersions(std::forward<LayerVersionsT>(value)); return *this;}
    template<typename LayerVersionsT = LayerVersionsListItem>
    ListLayerVersionsResult& AddLayerVersions(LayerVersionsT&& value) { m_layerVersionsHasBeenSet = true; m_layerVersions.emplace_back(std::forward<LayerVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLayerVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<LayerVersionsListItem> m_layerVersions;
    bool m_layerVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
