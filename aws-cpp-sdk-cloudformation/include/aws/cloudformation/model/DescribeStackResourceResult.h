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
#include <aws/cloudformation/model/StackResourceDetail.h>
#include <aws/cloudformation/model/ResponseMetadata.h>

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
   * <p>The output for a <a>DescribeStackResource</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeStackResourceResult
  {
  public:
    DescribeStackResourceResult();
    DescribeStackResourceResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeStackResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A <code>StackResourceDetail</code> structure containing the description of
     * the specified resource in the specified stack.</p>
     */
    inline const StackResourceDetail& GetStackResourceDetail() const{ return m_stackResourceDetail; }

    /**
     * <p>A <code>StackResourceDetail</code> structure containing the description of
     * the specified resource in the specified stack.</p>
     */
    inline void SetStackResourceDetail(const StackResourceDetail& value) { m_stackResourceDetail = value; }

    /**
     * <p>A <code>StackResourceDetail</code> structure containing the description of
     * the specified resource in the specified stack.</p>
     */
    inline void SetStackResourceDetail(StackResourceDetail&& value) { m_stackResourceDetail = value; }

    /**
     * <p>A <code>StackResourceDetail</code> structure containing the description of
     * the specified resource in the specified stack.</p>
     */
    inline DescribeStackResourceResult& WithStackResourceDetail(const StackResourceDetail& value) { SetStackResourceDetail(value); return *this;}

    /**
     * <p>A <code>StackResourceDetail</code> structure containing the description of
     * the specified resource in the specified stack.</p>
     */
    inline DescribeStackResourceResult& WithStackResourceDetail(StackResourceDetail&& value) { SetStackResourceDetail(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeStackResourceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackResourceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    StackResourceDetail m_stackResourceDetail;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws