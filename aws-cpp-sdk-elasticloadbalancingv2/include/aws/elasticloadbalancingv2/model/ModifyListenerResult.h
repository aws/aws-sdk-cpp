﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/Listener.h>

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
  /**
   * <p>Contains the output of ModifyListener.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API ModifyListenerResult
  {
  public:
    ModifyListenerResult();
    ModifyListenerResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyListenerResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listeners = value; }

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listeners = value; }

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline ModifyListenerResult& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline ModifyListenerResult& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(value); return *this;}

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline ModifyListenerResult& AddListeners(const Listener& value) { m_listeners.push_back(value); return *this; }

    /**
     * <p>Information about the modified listeners.</p>
     */
    inline ModifyListenerResult& AddListeners(Listener&& value) { m_listeners.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ModifyListenerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyListenerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Listener> m_listeners;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws