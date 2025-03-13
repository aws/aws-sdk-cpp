/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SupportedInstanceType.h>
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
namespace EMR
{
namespace Model
{
  class ListSupportedInstanceTypesResult
  {
  public:
    AWS_EMR_API ListSupportedInstanceTypesResult() = default;
    AWS_EMR_API ListSupportedInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListSupportedInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<SupportedInstanceType>& GetSupportedInstanceTypes() const { return m_supportedInstanceTypes; }
    template<typename SupportedInstanceTypesT = Aws::Vector<SupportedInstanceType>>
    void SetSupportedInstanceTypes(SupportedInstanceTypesT&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = std::forward<SupportedInstanceTypesT>(value); }
    template<typename SupportedInstanceTypesT = Aws::Vector<SupportedInstanceType>>
    ListSupportedInstanceTypesResult& WithSupportedInstanceTypes(SupportedInstanceTypesT&& value) { SetSupportedInstanceTypes(std::forward<SupportedInstanceTypesT>(value)); return *this;}
    template<typename SupportedInstanceTypesT = SupportedInstanceType>
    ListSupportedInstanceTypesResult& AddSupportedInstanceTypes(SupportedInstanceTypesT&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.emplace_back(std::forward<SupportedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListSupportedInstanceTypesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSupportedInstanceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SupportedInstanceType> m_supportedInstanceTypes;
    bool m_supportedInstanceTypesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
