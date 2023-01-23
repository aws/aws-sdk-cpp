/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/PlatformDescription.h>
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
  class DescribePlatformVersionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult();
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline const PlatformDescription& GetPlatformDescription() const{ return m_platformDescription; }

    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline void SetPlatformDescription(const PlatformDescription& value) { m_platformDescription = value; }

    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline void SetPlatformDescription(PlatformDescription&& value) { m_platformDescription = std::move(value); }

    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline DescribePlatformVersionResult& WithPlatformDescription(const PlatformDescription& value) { SetPlatformDescription(value); return *this;}

    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline DescribePlatformVersionResult& WithPlatformDescription(PlatformDescription&& value) { SetPlatformDescription(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePlatformVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePlatformVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PlatformDescription m_platformDescription;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
