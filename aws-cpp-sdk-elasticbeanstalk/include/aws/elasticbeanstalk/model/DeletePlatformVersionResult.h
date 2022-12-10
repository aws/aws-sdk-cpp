/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/PlatformSummary.h>
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
  class DeletePlatformVersionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult();
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline const PlatformSummary& GetPlatformSummary() const{ return m_platformSummary; }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline void SetPlatformSummary(const PlatformSummary& value) { m_platformSummary = value; }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline void SetPlatformSummary(PlatformSummary&& value) { m_platformSummary = std::move(value); }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline DeletePlatformVersionResult& WithPlatformSummary(const PlatformSummary& value) { SetPlatformSummary(value); return *this;}

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline DeletePlatformVersionResult& WithPlatformSummary(PlatformSummary&& value) { SetPlatformSummary(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeletePlatformVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeletePlatformVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PlatformSummary m_platformSummary;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
