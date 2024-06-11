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
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult();
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline const Aws::Vector<StackResource>& GetStackResources() const{ return m_stackResources; }
    inline void SetStackResources(const Aws::Vector<StackResource>& value) { m_stackResources = value; }
    inline void SetStackResources(Aws::Vector<StackResource>&& value) { m_stackResources = std::move(value); }
    inline DescribeStackResourcesResult& WithStackResources(const Aws::Vector<StackResource>& value) { SetStackResources(value); return *this;}
    inline DescribeStackResourcesResult& WithStackResources(Aws::Vector<StackResource>&& value) { SetStackResources(std::move(value)); return *this;}
    inline DescribeStackResourcesResult& AddStackResources(const StackResource& value) { m_stackResources.push_back(value); return *this; }
    inline DescribeStackResourcesResult& AddStackResources(StackResource&& value) { m_stackResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStackResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStackResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackResource> m_stackResources;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
