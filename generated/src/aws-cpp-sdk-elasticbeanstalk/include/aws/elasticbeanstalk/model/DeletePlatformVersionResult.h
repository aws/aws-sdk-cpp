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
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult() = default;
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline const PlatformSummary& GetPlatformSummary() const { return m_platformSummary; }
    template<typename PlatformSummaryT = PlatformSummary>
    void SetPlatformSummary(PlatformSummaryT&& value) { m_platformSummaryHasBeenSet = true; m_platformSummary = std::forward<PlatformSummaryT>(value); }
    template<typename PlatformSummaryT = PlatformSummary>
    DeletePlatformVersionResult& WithPlatformSummary(PlatformSummaryT&& value) { SetPlatformSummary(std::forward<PlatformSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeletePlatformVersionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    PlatformSummary m_platformSummary;
    bool m_platformSummaryHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
