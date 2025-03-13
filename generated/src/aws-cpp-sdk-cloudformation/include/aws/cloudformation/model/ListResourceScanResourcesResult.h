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
  class ListResourceScanResourcesResult
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult() = default;
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of up to <code>MaxResults</code> resources in the specified resource
     * scan that match all of the specified filters.</p>
     */
    inline const Aws::Vector<ScannedResource>& GetResources() const { return m_resources; }
    template<typename ResourcesT = Aws::Vector<ScannedResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<ScannedResource>>
    ListResourceScanResourcesResult& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = ScannedResource>
    ListResourceScanResourcesResult& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResourceScanResources</code> again and use that value for the
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to an empty string.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceScanResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListResourceScanResourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScannedResource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
