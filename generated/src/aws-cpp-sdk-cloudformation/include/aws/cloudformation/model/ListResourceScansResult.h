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
    AWS_CLOUDFORMATION_API ListResourceScansResult();
    AWS_CLOUDFORMATION_API ListResourceScansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListResourceScansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of scans returned.</p>
     */
    inline const Aws::Vector<ResourceScanSummary>& GetResourceScanSummaries() const{ return m_resourceScanSummaries; }
    inline void SetResourceScanSummaries(const Aws::Vector<ResourceScanSummary>& value) { m_resourceScanSummaries = value; }
    inline void SetResourceScanSummaries(Aws::Vector<ResourceScanSummary>&& value) { m_resourceScanSummaries = std::move(value); }
    inline ListResourceScansResult& WithResourceScanSummaries(const Aws::Vector<ResourceScanSummary>& value) { SetResourceScanSummaries(value); return *this;}
    inline ListResourceScansResult& WithResourceScanSummaries(Aws::Vector<ResourceScanSummary>&& value) { SetResourceScanSummaries(std::move(value)); return *this;}
    inline ListResourceScansResult& AddResourceScanSummaries(const ResourceScanSummary& value) { m_resourceScanSummaries.push_back(value); return *this; }
    inline ListResourceScansResult& AddResourceScanSummaries(ResourceScanSummary&& value) { m_resourceScanSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResourceScans</code> again and use that value for the
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to an empty string.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceScansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceScansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceScansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListResourceScansResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListResourceScansResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceScanSummary> m_resourceScanSummaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
