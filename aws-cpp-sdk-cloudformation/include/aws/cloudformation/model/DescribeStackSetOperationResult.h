/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackSetOperation.h>
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
  class DescribeStackSetOperationResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult();
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The specified stack set operation.</p>
     */
    inline const StackSetOperation& GetStackSetOperation() const{ return m_stackSetOperation; }

    /**
     * <p>The specified stack set operation.</p>
     */
    inline void SetStackSetOperation(const StackSetOperation& value) { m_stackSetOperation = value; }

    /**
     * <p>The specified stack set operation.</p>
     */
    inline void SetStackSetOperation(StackSetOperation&& value) { m_stackSetOperation = std::move(value); }

    /**
     * <p>The specified stack set operation.</p>
     */
    inline DescribeStackSetOperationResult& WithStackSetOperation(const StackSetOperation& value) { SetStackSetOperation(value); return *this;}

    /**
     * <p>The specified stack set operation.</p>
     */
    inline DescribeStackSetOperationResult& WithStackSetOperation(StackSetOperation&& value) { SetStackSetOperation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStackSetOperationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackSetOperationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    StackSetOperation m_stackSetOperation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
