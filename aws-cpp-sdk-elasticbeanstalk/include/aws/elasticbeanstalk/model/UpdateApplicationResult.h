/*
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
#include <aws/elasticbeanstalk/model/ApplicationDescription.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>

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
   * <p>Result message containing a single description of an application.</p>
   */
  class AWS_ELASTICBEANSTALK_API UpdateApplicationResult
  {
  public:
    UpdateApplicationResult();
    UpdateApplicationResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline const ApplicationDescription& GetApplication() const{ return m_application; }

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline void SetApplication(const ApplicationDescription& value) { m_application = value; }

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline void SetApplication(ApplicationDescription&& value) { m_application = value; }

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline UpdateApplicationResult& WithApplication(const ApplicationDescription& value) { SetApplication(value); return *this;}

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline UpdateApplicationResult& WithApplication(ApplicationDescription&& value) { SetApplication(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline UpdateApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ApplicationDescription m_application;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws