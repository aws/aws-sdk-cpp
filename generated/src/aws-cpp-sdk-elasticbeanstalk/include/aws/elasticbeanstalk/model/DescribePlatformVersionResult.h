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
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult() = default;
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Detailed information about the platform version.</p>
     */
    inline const PlatformDescription& GetPlatformDescription() const { return m_platformDescription; }
    template<typename PlatformDescriptionT = PlatformDescription>
    void SetPlatformDescription(PlatformDescriptionT&& value) { m_platformDescriptionHasBeenSet = true; m_platformDescription = std::forward<PlatformDescriptionT>(value); }
    template<typename PlatformDescriptionT = PlatformDescription>
    DescribePlatformVersionResult& WithPlatformDescription(PlatformDescriptionT&& value) { SetPlatformDescription(std::forward<PlatformDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePlatformVersionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    PlatformDescription m_platformDescription;
    bool m_platformDescriptionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
