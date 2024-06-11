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
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult();
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListResourceScanResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of up to <code>MaxResults</code> resources in the specified resource
     * scan that match all of the specified filters.</p>
     */
    inline const Aws::Vector<ScannedResource>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<ScannedResource>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<ScannedResource>&& value) { m_resources = std::move(value); }
    inline ListResourceScanResourcesResult& WithResources(const Aws::Vector<ScannedResource>& value) { SetResources(value); return *this;}
    inline ListResourceScanResourcesResult& WithResources(Aws::Vector<ScannedResource>&& value) { SetResources(std::move(value)); return *this;}
    inline ListResourceScanResourcesResult& AddResources(const ScannedResource& value) { m_resources.push_back(value); return *this; }
    inline ListResourceScanResourcesResult& AddResources(ScannedResource&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResourceScanResources</code> again and use that value for the
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to an empty string.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceScanResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceScanResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceScanResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListResourceScanResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListResourceScanResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScannedResource> m_resources;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
