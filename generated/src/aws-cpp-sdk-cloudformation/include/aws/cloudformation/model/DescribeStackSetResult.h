/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackSet.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
  class DescribeStackSetResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackSetResult();
    AWS_CLOUDFORMATION_API DescribeStackSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The specified stack set.</p>
     */
    inline const StackSet& GetStackSet() const{ return m_stackSet; }

    /**
     * <p>The specified stack set.</p>
     */
    inline void SetStackSet(const StackSet& value) { m_stackSet = value; }

    /**
     * <p>The specified stack set.</p>
     */
    inline void SetStackSet(StackSet&& value) { m_stackSet = std::move(value); }

    /**
     * <p>The specified stack set.</p>
     */
    inline DescribeStackSetResult& WithStackSet(const StackSet& value) { SetStackSet(value); return *this;}

    /**
     * <p>The specified stack set.</p>
     */
    inline DescribeStackSetResult& WithStackSet(StackSet&& value) { SetStackSet(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStackSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    StackSet m_stackSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
