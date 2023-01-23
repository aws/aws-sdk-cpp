/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/ApplicationDescription.h>
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
   * <p>Result message containing a single description of an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationDescriptionMessage">AWS
   * API Reference</a></p>
   */
  class UpdateApplicationResult
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationResult();
    AWS_ELASTICBEANSTALK_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetApplication(ApplicationDescription&& value) { m_application = std::move(value); }

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline UpdateApplicationResult& WithApplication(const ApplicationDescription& value) { SetApplication(value); return *this;}

    /**
     * <p> The <a>ApplicationDescription</a> of the application. </p>
     */
    inline UpdateApplicationResult& WithApplication(ApplicationDescription&& value) { SetApplication(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ApplicationDescription m_application;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
