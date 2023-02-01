/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Stack.h>
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
   * <p>The output for a <a>DescribeStacks</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacksOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStacksResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStacksResult();
    AWS_CLOUDFORMATION_API DescribeStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of stack structures.</p>
     */
    inline const Aws::Vector<Stack>& GetStacks() const{ return m_stacks; }

    /**
     * <p>A list of stack structures.</p>
     */
    inline void SetStacks(const Aws::Vector<Stack>& value) { m_stacks = value; }

    /**
     * <p>A list of stack structures.</p>
     */
    inline void SetStacks(Aws::Vector<Stack>&& value) { m_stacks = std::move(value); }

    /**
     * <p>A list of stack structures.</p>
     */
    inline DescribeStacksResult& WithStacks(const Aws::Vector<Stack>& value) { SetStacks(value); return *this;}

    /**
     * <p>A list of stack structures.</p>
     */
    inline DescribeStacksResult& WithStacks(Aws::Vector<Stack>&& value) { SetStacks(std::move(value)); return *this;}

    /**
     * <p>A list of stack structures.</p>
     */
    inline DescribeStacksResult& AddStacks(const Stack& value) { m_stacks.push_back(value); return *this; }

    /**
     * <p>A list of stack structures.</p>
     */
    inline DescribeStacksResult& AddStacks(Stack&& value) { m_stacks.push_back(std::move(value)); return *this; }


    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStacksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStacksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Stack> m_stacks;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
