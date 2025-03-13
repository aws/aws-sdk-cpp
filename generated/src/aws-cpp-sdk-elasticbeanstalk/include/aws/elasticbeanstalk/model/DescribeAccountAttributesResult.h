/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/ResourceQuotas.h>
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
  class DescribeAccountAttributesResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeAccountAttributesResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline const ResourceQuotas& GetResourceQuotas() const { return m_resourceQuotas; }
    template<typename ResourceQuotasT = ResourceQuotas>
    void SetResourceQuotas(ResourceQuotasT&& value) { m_resourceQuotasHasBeenSet = true; m_resourceQuotas = std::forward<ResourceQuotasT>(value); }
    template<typename ResourceQuotasT = ResourceQuotas>
    DescribeAccountAttributesResult& WithResourceQuotas(ResourceQuotasT&& value) { SetResourceQuotas(std::forward<ResourceQuotasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ResourceQuotas m_resourceQuotas;
    bool m_resourceQuotasHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
