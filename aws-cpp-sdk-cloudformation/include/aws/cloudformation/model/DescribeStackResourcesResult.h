/*
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResource.h>

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
   * <p>The output for a <a>DescribeStackResources</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeStackResourcesResult
  {
  public:
    DescribeStackResourcesResult();
    DescribeStackResourcesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeStackResourcesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline const Aws::Vector<StackResource>& GetStackResources() const{ return m_stackResources; }

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline void SetStackResources(const Aws::Vector<StackResource>& value) { m_stackResources = value; }

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline void SetStackResources(Aws::Vector<StackResource>&& value) { m_stackResources = value; }

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline DescribeStackResourcesResult& WithStackResources(const Aws::Vector<StackResource>& value) { SetStackResources(value); return *this;}

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline DescribeStackResourcesResult& WithStackResources(Aws::Vector<StackResource>&& value) { SetStackResources(value); return *this;}

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline DescribeStackResourcesResult& AddStackResources(const StackResource& value) { m_stackResources.push_back(value); return *this; }

    /**
     * <p>A list of <code>StackResource</code> structures.</p>
     */
    inline DescribeStackResourcesResult& AddStackResources(StackResource&& value) { m_stackResources.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeStackResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<StackResource> m_stackResources;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws