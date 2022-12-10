/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackInstance.h>
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
  class DescribeStackInstanceResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult();
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline const StackInstance& GetStackInstance() const{ return m_stackInstance; }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline void SetStackInstance(const StackInstance& value) { m_stackInstance = value; }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline void SetStackInstance(StackInstance&& value) { m_stackInstance = std::move(value); }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline DescribeStackInstanceResult& WithStackInstance(const StackInstance& value) { SetStackInstance(value); return *this;}

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline DescribeStackInstanceResult& WithStackInstance(StackInstance&& value) { SetStackInstance(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStackInstanceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackInstanceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    StackInstance m_stackInstance;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
