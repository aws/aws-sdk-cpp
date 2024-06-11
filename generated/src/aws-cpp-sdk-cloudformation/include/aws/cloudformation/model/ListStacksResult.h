/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackSummary.h>
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
   * <p>The output for <a>ListStacks</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacksOutput">AWS
   * API Reference</a></p>
   */
  class ListStacksResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStacksResult();
    AWS_CLOUDFORMATION_API ListStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackSummary</code> structures containing information about
     * the specified stacks.</p>
     */
    inline const Aws::Vector<StackSummary>& GetStackSummaries() const{ return m_stackSummaries; }
    inline void SetStackSummaries(const Aws::Vector<StackSummary>& value) { m_stackSummaries = value; }
    inline void SetStackSummaries(Aws::Vector<StackSummary>&& value) { m_stackSummaries = std::move(value); }
    inline ListStacksResult& WithStackSummaries(const Aws::Vector<StackSummary>& value) { SetStackSummaries(value); return *this;}
    inline ListStacksResult& WithStackSummaries(Aws::Vector<StackSummary>&& value) { SetStackSummaries(std::move(value)); return *this;}
    inline ListStacksResult& AddStackSummaries(const StackSummary& value) { m_stackSummaries.push_back(value); return *this; }
    inline ListStacksResult& AddStackSummaries(StackSummary&& value) { m_stackSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStacksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStacksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackSummary> m_stackSummaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
