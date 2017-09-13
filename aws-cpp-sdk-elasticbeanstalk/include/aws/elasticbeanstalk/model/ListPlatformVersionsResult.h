/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult
  {
  public:
    ListPlatformVersionsResult();
    ListPlatformVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPlatformVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline const Aws::Vector<PlatformSummary>& GetPlatformSummaryList() const{ return m_platformSummaryList; }

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline void SetPlatformSummaryList(const Aws::Vector<PlatformSummary>& value) { m_platformSummaryList = value; }

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline void SetPlatformSummaryList(Aws::Vector<PlatformSummary>&& value) { m_platformSummaryList = std::move(value); }

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline ListPlatformVersionsResult& WithPlatformSummaryList(const Aws::Vector<PlatformSummary>& value) { SetPlatformSummaryList(value); return *this;}

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline ListPlatformVersionsResult& WithPlatformSummaryList(Aws::Vector<PlatformSummary>&& value) { SetPlatformSummaryList(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline ListPlatformVersionsResult& AddPlatformSummaryList(const PlatformSummary& value) { m_platformSummaryList.push_back(value); return *this; }

    /**
     * <p>Detailed information about the platforms.</p>
     */
    inline ListPlatformVersionsResult& AddPlatformSummaryList(PlatformSummary&& value) { m_platformSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline ListPlatformVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
     */
    inline ListPlatformVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The starting index into the remaining list of platforms. if this value is not
     * <code>null</code>, you can use it in a subsequent
     * <code>ListPlatformVersion</code> call. </p>
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
