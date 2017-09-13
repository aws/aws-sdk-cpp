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
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
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
   * <p>Result message wrapping a single description of an application
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionDescriptionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API CreateApplicationVersionResult
  {
  public:
    CreateApplicationVersionResult();
    CreateApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline const ApplicationVersionDescription& GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline void SetApplicationVersion(const ApplicationVersionDescription& value) { m_applicationVersion = value; }

    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline void SetApplicationVersion(ApplicationVersionDescription&& value) { m_applicationVersion = std::move(value); }

    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline CreateApplicationVersionResult& WithApplicationVersion(const ApplicationVersionDescription& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline CreateApplicationVersionResult& WithApplicationVersion(ApplicationVersionDescription&& value) { SetApplicationVersion(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateApplicationVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateApplicationVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ApplicationVersionDescription m_applicationVersion;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
