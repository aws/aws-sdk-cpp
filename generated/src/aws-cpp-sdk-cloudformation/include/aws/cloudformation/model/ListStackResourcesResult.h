/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResourceSummary.h>
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
   * <p>The output for a <a>ListStackResources</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResourcesOutput">AWS
   * API Reference</a></p>
   */
  class ListStackResourcesResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackResourcesResult();
    AWS_CLOUDFORMATION_API ListStackResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline const Aws::Vector<StackResourceSummary>& GetStackResourceSummaries() const{ return m_stackResourceSummaries; }
    inline void SetStackResourceSummaries(const Aws::Vector<StackResourceSummary>& value) { m_stackResourceSummaries = value; }
    inline void SetStackResourceSummaries(Aws::Vector<StackResourceSummary>&& value) { m_stackResourceSummaries = std::move(value); }
    inline ListStackResourcesResult& WithStackResourceSummaries(const Aws::Vector<StackResourceSummary>& value) { SetStackResourceSummaries(value); return *this;}
    inline ListStackResourcesResult& WithStackResourceSummaries(Aws::Vector<StackResourceSummary>&& value) { SetStackResourceSummaries(std::move(value)); return *this;}
    inline ListStackResourcesResult& AddStackResourceSummaries(const StackResourceSummary& value) { m_stackResourceSummaries.push_back(value); return *this; }
    inline ListStackResourcesResult& AddStackResourceSummaries(StackResourceSummary&& value) { m_stackResourceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackResourceSummary> m_stackResourceSummaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
