/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResource.h>
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
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for a <a>DescribeStackResources</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourcesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStackResourcesResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline const Aws::Vector<StackResource>& GetStackResources() const { return m_stackResources; }
    template<typename StackResourcesT = Aws::Vector<StackResource>>
    void SetStackResources(StackResourcesT&& value) { m_stackResourcesHasBeenSet = true; m_stackResources = std::forward<StackResourcesT>(value); }
    template<typename StackResourcesT = Aws::Vector<StackResource>>
    DescribeStackResourcesResult& WithStackResources(StackResourcesT&& value) { SetStackResources(std::forward<StackResourcesT>(value)); return *this;}
    template<typename StackResourcesT = StackResource>
    DescribeStackResourcesResult& AddStackResources(StackResourcesT&& value) { m_stackResourcesHasBeenSet = true; m_stackResources.emplace_back(std::forward<StackResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackResourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackResource> m_stackResources;
    bool m_stackResourcesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
