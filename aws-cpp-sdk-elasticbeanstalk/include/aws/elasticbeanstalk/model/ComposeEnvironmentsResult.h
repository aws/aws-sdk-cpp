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
#include <aws/elasticbeanstalk/model/EnvironmentDescription.h>
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
   * <p>Result message containing a list of environment descriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ComposeEnvironmentsResult
  {
  public:
    ComposeEnvironmentsResult();
    ComposeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ComposeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline const Aws::Vector<EnvironmentDescription>& GetEnvironments() const{ return m_environments; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline void SetEnvironments(const Aws::Vector<EnvironmentDescription>& value) { m_environments = value; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline void SetEnvironments(Aws::Vector<EnvironmentDescription>&& value) { m_environments = std::move(value); }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline ComposeEnvironmentsResult& WithEnvironments(const Aws::Vector<EnvironmentDescription>& value) { SetEnvironments(value); return *this;}

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline ComposeEnvironmentsResult& WithEnvironments(Aws::Vector<EnvironmentDescription>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline ComposeEnvironmentsResult& AddEnvironments(const EnvironmentDescription& value) { m_environments.push_back(value); return *this; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline ComposeEnvironmentsResult& AddEnvironments(EnvironmentDescription&& value) { m_environments.push_back(std::move(value)); return *this; }


    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline ComposeEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline ComposeEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline ComposeEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ComposeEnvironmentsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ComposeEnvironmentsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EnvironmentDescription> m_environments;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
