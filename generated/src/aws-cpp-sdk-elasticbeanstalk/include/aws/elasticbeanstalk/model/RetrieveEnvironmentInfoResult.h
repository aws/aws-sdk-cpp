/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>
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
   * <p>Result message containing a description of the requested environment
   * info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfoResultMessage">AWS
   * API Reference</a></p>
   */
  class RetrieveEnvironmentInfoResult
  {
  public:
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult();
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline const Aws::Vector<EnvironmentInfoDescription>& GetEnvironmentInfo() const{ return m_environmentInfo; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline void SetEnvironmentInfo(const Aws::Vector<EnvironmentInfoDescription>& value) { m_environmentInfo = value; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline void SetEnvironmentInfo(Aws::Vector<EnvironmentInfoDescription>&& value) { m_environmentInfo = std::move(value); }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& WithEnvironmentInfo(const Aws::Vector<EnvironmentInfoDescription>& value) { SetEnvironmentInfo(value); return *this;}

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& WithEnvironmentInfo(Aws::Vector<EnvironmentInfoDescription>&& value) { SetEnvironmentInfo(std::move(value)); return *this;}

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& AddEnvironmentInfo(const EnvironmentInfoDescription& value) { m_environmentInfo.push_back(value); return *this; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& AddEnvironmentInfo(EnvironmentInfoDescription&& value) { m_environmentInfo.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RetrieveEnvironmentInfoResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RetrieveEnvironmentInfoResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EnvironmentInfoDescription> m_environmentInfo;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
