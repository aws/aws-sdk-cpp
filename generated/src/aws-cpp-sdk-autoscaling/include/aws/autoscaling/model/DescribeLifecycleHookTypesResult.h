/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeLifecycleHookTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult() = default;
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The lifecycle hook types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleHookTypes() const { return m_lifecycleHookTypes; }
    template<typename LifecycleHookTypesT = Aws::Vector<Aws::String>>
    void SetLifecycleHookTypes(LifecycleHookTypesT&& value) { m_lifecycleHookTypesHasBeenSet = true; m_lifecycleHookTypes = std::forward<LifecycleHookTypesT>(value); }
    template<typename LifecycleHookTypesT = Aws::Vector<Aws::String>>
    DescribeLifecycleHookTypesResult& WithLifecycleHookTypes(LifecycleHookTypesT&& value) { SetLifecycleHookTypes(std::forward<LifecycleHookTypesT>(value)); return *this;}
    template<typename LifecycleHookTypesT = Aws::String>
    DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(LifecycleHookTypesT&& value) { m_lifecycleHookTypesHasBeenSet = true; m_lifecycleHookTypes.emplace_back(std::forward<LifecycleHookTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLifecycleHookTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_lifecycleHookTypes;
    bool m_lifecycleHookTypesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
