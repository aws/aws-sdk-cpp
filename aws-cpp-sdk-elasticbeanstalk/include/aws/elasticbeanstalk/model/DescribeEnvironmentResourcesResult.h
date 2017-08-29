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
#include <aws/elasticbeanstalk/model/EnvironmentResourceDescription.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
   * <p>Result message containing a list of environment resource
   * descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentResourceDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentResourcesResult
  {
  public:
    DescribeEnvironmentResourcesResult();
    DescribeEnvironmentResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEnvironmentResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline const EnvironmentResourceDescription& GetEnvironmentResources() const{ return m_environmentResources; }

    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline void SetEnvironmentResources(const EnvironmentResourceDescription& value) { m_environmentResources = value; }

    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline void SetEnvironmentResources(EnvironmentResourceDescription&& value) { m_environmentResources = std::move(value); }

    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline DescribeEnvironmentResourcesResult& WithEnvironmentResources(const EnvironmentResourceDescription& value) { SetEnvironmentResources(value); return *this;}

    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline DescribeEnvironmentResourcesResult& WithEnvironmentResources(EnvironmentResourceDescription&& value) { SetEnvironmentResources(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEnvironmentResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    EnvironmentResourceDescription m_environmentResources;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
