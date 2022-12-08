/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/PlatformBranchSummary.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  class ListPlatformBranchesResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult();
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline const Aws::Vector<PlatformBranchSummary>& GetPlatformBranchSummaryList() const{ return m_platformBranchSummaryList; }

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline void SetPlatformBranchSummaryList(const Aws::Vector<PlatformBranchSummary>& value) { m_platformBranchSummaryList = value; }

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline void SetPlatformBranchSummaryList(Aws::Vector<PlatformBranchSummary>&& value) { m_platformBranchSummaryList = std::move(value); }

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline ListPlatformBranchesResult& WithPlatformBranchSummaryList(const Aws::Vector<PlatformBranchSummary>& value) { SetPlatformBranchSummaryList(value); return *this;}

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline ListPlatformBranchesResult& WithPlatformBranchSummaryList(Aws::Vector<PlatformBranchSummary>&& value) { SetPlatformBranchSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline ListPlatformBranchesResult& AddPlatformBranchSummaryList(const PlatformBranchSummary& value) { m_platformBranchSummaryList.push_back(value); return *this; }

    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline ListPlatformBranchesResult& AddPlatformBranchSummaryList(PlatformBranchSummary&& value) { m_platformBranchSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline ListPlatformBranchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline ListPlatformBranchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline ListPlatformBranchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPlatformBranchesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPlatformBranchesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PlatformBranchSummary> m_platformBranchSummaryList;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
