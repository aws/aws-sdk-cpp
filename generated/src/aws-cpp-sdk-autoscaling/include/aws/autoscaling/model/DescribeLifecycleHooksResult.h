/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LifecycleHook.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeLifecycleHooksResult
  {
  public:
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult() = default;
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline const Aws::Vector<LifecycleHook>& GetLifecycleHooks() const { return m_lifecycleHooks; }
    template<typename LifecycleHooksT = Aws::Vector<LifecycleHook>>
    void SetLifecycleHooks(LifecycleHooksT&& value) { m_lifecycleHooksHasBeenSet = true; m_lifecycleHooks = std::forward<LifecycleHooksT>(value); }
    template<typename LifecycleHooksT = Aws::Vector<LifecycleHook>>
    DescribeLifecycleHooksResult& WithLifecycleHooks(LifecycleHooksT&& value) { SetLifecycleHooks(std::forward<LifecycleHooksT>(value)); return *this;}
    template<typename LifecycleHooksT = LifecycleHook>
    DescribeLifecycleHooksResult& AddLifecycleHooks(LifecycleHooksT&& value) { m_lifecycleHooksHasBeenSet = true; m_lifecycleHooks.emplace_back(std::forward<LifecycleHooksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLifecycleHooksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecycleHook> m_lifecycleHooks;
    bool m_lifecycleHooksHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
