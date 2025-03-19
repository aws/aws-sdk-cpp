/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TypeVersionSummary.h>
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
  class ListTypeVersionsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListTypeVersionsResult() = default;
    AWS_CLOUDFORMATION_API ListTypeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListTypeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>TypeVersionSummary</code> structures that contain information
     * about the specified extension's versions.</p>
     */
    inline const Aws::Vector<TypeVersionSummary>& GetTypeVersionSummaries() const { return m_typeVersionSummaries; }
    template<typename TypeVersionSummariesT = Aws::Vector<TypeVersionSummary>>
    void SetTypeVersionSummaries(TypeVersionSummariesT&& value) { m_typeVersionSummariesHasBeenSet = true; m_typeVersionSummaries = std::forward<TypeVersionSummariesT>(value); }
    template<typename TypeVersionSummariesT = Aws::Vector<TypeVersionSummary>>
    ListTypeVersionsResult& WithTypeVersionSummaries(TypeVersionSummariesT&& value) { SetTypeVersionSummaries(std::forward<TypeVersionSummariesT>(value)); return *this;}
    template<typename TypeVersionSummariesT = TypeVersionSummary>
    ListTypeVersionsResult& AddTypeVersionSummaries(TypeVersionSummariesT&& value) { m_typeVersionSummariesHasBeenSet = true; m_typeVersionSummaries.emplace_back(std::forward<TypeVersionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTypeVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListTypeVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TypeVersionSummary> m_typeVersionSummaries;
    bool m_typeVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
