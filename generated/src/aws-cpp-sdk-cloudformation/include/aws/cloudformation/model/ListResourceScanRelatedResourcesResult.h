/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ScannedResource.h>
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
  class ListResourceScanRelatedResourcesResult
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScanRelatedResourcesResult() = default;
    AWS_CLOUDFORMATION_API ListResourceScanRelatedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListResourceScanRelatedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of up to <code>MaxResults</code> resources in the specified resource
     * scan related to the specified resources.</p>
     */
    inline const Aws::Vector<ScannedResource>& GetRelatedResources() const { return m_relatedResources; }
    template<typename RelatedResourcesT = Aws::Vector<ScannedResource>>
    void SetRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::forward<RelatedResourcesT>(value); }
    template<typename RelatedResourcesT = Aws::Vector<ScannedResource>>
    ListResourceScanRelatedResourcesResult& WithRelatedResources(RelatedResourcesT&& value) { SetRelatedResources(std::forward<RelatedResourcesT>(value)); return *this;}
    template<typename RelatedResourcesT = ScannedResource>
    ListResourceScanRelatedResourcesResult& AddRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.emplace_back(std::forward<RelatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResourceScanRelatedResources</code> again and use that value for
     * the <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to an empty string.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceScanRelatedResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListResourceScanRelatedResourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScannedResource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
