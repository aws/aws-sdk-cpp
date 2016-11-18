﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>

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
  /**
   * <p>Result message wrapping a list of application version descriptions.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult
  {
  public:
    DescribeApplicationVersionsResult();
    DescribeApplicationVersionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeApplicationVersionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline const Aws::Vector<ApplicationVersionDescription>& GetApplicationVersions() const{ return m_applicationVersions; }

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline void SetApplicationVersions(const Aws::Vector<ApplicationVersionDescription>& value) { m_applicationVersions = value; }

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline void SetApplicationVersions(Aws::Vector<ApplicationVersionDescription>&& value) { m_applicationVersions = value; }

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline DescribeApplicationVersionsResult& WithApplicationVersions(const Aws::Vector<ApplicationVersionDescription>& value) { SetApplicationVersions(value); return *this;}

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline DescribeApplicationVersionsResult& WithApplicationVersions(Aws::Vector<ApplicationVersionDescription>&& value) { SetApplicationVersions(value); return *this;}

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline DescribeApplicationVersionsResult& AddApplicationVersions(const ApplicationVersionDescription& value) { m_applicationVersions.push_back(value); return *this; }

    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted by order of
     * creation.</p>
     */
    inline DescribeApplicationVersionsResult& AddApplicationVersions(ApplicationVersionDescription&& value) { m_applicationVersions.push_back(value); return *this; }

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline DescribeApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline DescribeApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request, the token that you can pass in a subsequent request
     * to get the next page.</p>
     */
    inline DescribeApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeApplicationVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeApplicationVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ApplicationVersionDescription> m_applicationVersions;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws