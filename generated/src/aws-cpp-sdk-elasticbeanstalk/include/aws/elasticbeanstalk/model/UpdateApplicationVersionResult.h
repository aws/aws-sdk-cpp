/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateApplicationVersionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult();
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline UpdateApplicationVersionResult& WithApplicationVersion(const ApplicationVersionDescription& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline UpdateApplicationVersionResult& WithApplicationVersion(ApplicationVersionDescription&& value) { SetApplicationVersion(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateApplicationVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateApplicationVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ApplicationVersionDescription m_applicationVersion;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
