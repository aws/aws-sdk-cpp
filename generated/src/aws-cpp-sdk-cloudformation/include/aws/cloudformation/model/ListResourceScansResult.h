/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ResourceScanSummary.h>
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
  class ListResourceScansResult
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScansResult() = default;
    AWS_CLOUDFORMATION_API ListResourceScansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListResourceScansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of scans returned.</p>
     */
    inline const Aws::Vector<ResourceScanSummary>& GetResourceScanSummaries() const { return m_resourceScanSummaries; }
    template<typename ResourceScanSummariesT = Aws::Vector<ResourceScanSummary>>
    void SetResourceScanSummaries(ResourceScanSummariesT&& value) { m_resourceScanSummariesHasBeenSet = true; m_resourceScanSummaries = std::forward<ResourceScanSummariesT>(value); }
    template<typename ResourceScanSummariesT = Aws::Vector<ResourceScanSummary>>
    ListResourceScansResult& WithResourceScanSummaries(ResourceScanSummariesT&& value) { SetResourceScanSummaries(std::forward<ResourceScanSummariesT>(value)); return *this;}
    template<typename ResourceScanSummariesT = ResourceScanSummary>
    ListResourceScansResult& AddResourceScanSummaries(ResourceScanSummariesT&& value) { m_resourceScanSummariesHasBeenSet = true; m_resourceScanSummaries.emplace_back(std::forward<ResourceScanSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResourceScans</code> again and use that value for the
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to an empty string.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceScansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListResourceScansResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceScanSummary> m_resourceScanSummaries;
    bool m_resourceScanSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
