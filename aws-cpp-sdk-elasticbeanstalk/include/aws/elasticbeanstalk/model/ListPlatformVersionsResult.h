/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/PlatformSummary.h>
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
  class ListPlatformVersionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult();
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline const Aws::Vector<PlatformSummary>& GetPlatformSummaryList() const{ return m_platformSummaryList; }

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline void SetPlatformSummaryList(const Aws::Vector<PlatformSummary>& value) { m_platformSummaryList = value; }

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline void SetPlatformSummaryList(Aws::Vector<PlatformSummary>&& value) { m_platformSummaryList = std::move(value); }

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline ListPlatformVersionsResult& WithPlatformSummaryList(const Aws::Vector<PlatformSummary>& value) { SetPlatformSummaryList(value); return *this;}

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline ListPlatformVersionsResult& WithPlatformSummaryList(Aws::Vector<PlatformSummary>&& value) { SetPlatformSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline ListPlatformVersionsResult& AddPlatformSummaryList(const PlatformSummary& value) { m_platformSummaryList.push_back(value); return *this; }

    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline ListPlatformVersionsResult& AddPlatformSummaryList(PlatformSummary&& value) { m_platformSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListPlatformVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline ListPlatformVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline ListPlatformVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPlatformVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPlatformVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PlatformSummary> m_platformSummaryList;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
