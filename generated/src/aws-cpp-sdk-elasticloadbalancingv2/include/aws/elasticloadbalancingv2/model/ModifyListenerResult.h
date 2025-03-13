/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/Listener.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class ModifyListenerResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyListenerResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API ModifyListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API ModifyListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the modified listener.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const { return m_listeners; }
    template<typename ListenersT = Aws::Vector<Listener>>
    void SetListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners = std::forward<ListenersT>(value); }
    template<typename ListenersT = Aws::Vector<Listener>>
    ModifyListenerResult& WithListeners(ListenersT&& value) { SetListeners(std::forward<ListenersT>(value)); return *this;}
    template<typename ListenersT = Listener>
    ModifyListenerResult& AddListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners.emplace_back(std::forward<ListenersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyListenerResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
