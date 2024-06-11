﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
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
  /**
   * <p>Result message wrapping a list of application version
   * descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationVersionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult();
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted in order of
     * creation.</p>
     */
    inline const Aws::Vector<ApplicationVersionDescription>& GetApplicationVersions() const{ return m_applicationVersions; }
    inline void SetApplicationVersions(const Aws::Vector<ApplicationVersionDescription>& value) { m_applicationVersions = value; }
    inline void SetApplicationVersions(Aws::Vector<ApplicationVersionDescription>&& value) { m_applicationVersions = std::move(value); }
    inline DescribeApplicationVersionsResult& WithApplicationVersions(const Aws::Vector<ApplicationVersionDescription>& value) { SetApplicationVersions(value); return *this;}
    inline DescribeApplicationVersionsResult& WithApplicationVersions(Aws::Vector<ApplicationVersionDescription>&& value) { SetApplicationVersions(std::move(value)); return *this;}
    inline DescribeApplicationVersionsResult& AddApplicationVersions(const ApplicationVersionDescription& value) { m_applicationVersions.push_back(value); return *this; }
    inline DescribeApplicationVersionsResult& AddApplicationVersions(ApplicationVersionDescription&& value) { m_applicationVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeApplicationVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeApplicationVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationVersionDescription> m_applicationVersions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
