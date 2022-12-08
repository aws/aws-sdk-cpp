/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/PartnerIntegrationInfo.h>
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
namespace Redshift
{
namespace Model
{
  class DescribePartnersResult
  {
  public:
    AWS_REDSHIFT_API DescribePartnersResult();
    AWS_REDSHIFT_API DescribePartnersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribePartnersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of partner integrations.</p>
     */
    inline const Aws::Vector<PartnerIntegrationInfo>& GetPartnerIntegrationInfoList() const{ return m_partnerIntegrationInfoList; }

    /**
     * <p>A list of partner integrations.</p>
     */
    inline void SetPartnerIntegrationInfoList(const Aws::Vector<PartnerIntegrationInfo>& value) { m_partnerIntegrationInfoList = value; }

    /**
     * <p>A list of partner integrations.</p>
     */
    inline void SetPartnerIntegrationInfoList(Aws::Vector<PartnerIntegrationInfo>&& value) { m_partnerIntegrationInfoList = std::move(value); }

    /**
     * <p>A list of partner integrations.</p>
     */
    inline DescribePartnersResult& WithPartnerIntegrationInfoList(const Aws::Vector<PartnerIntegrationInfo>& value) { SetPartnerIntegrationInfoList(value); return *this;}

    /**
     * <p>A list of partner integrations.</p>
     */
    inline DescribePartnersResult& WithPartnerIntegrationInfoList(Aws::Vector<PartnerIntegrationInfo>&& value) { SetPartnerIntegrationInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of partner integrations.</p>
     */
    inline DescribePartnersResult& AddPartnerIntegrationInfoList(const PartnerIntegrationInfo& value) { m_partnerIntegrationInfoList.push_back(value); return *this; }

    /**
     * <p>A list of partner integrations.</p>
     */
    inline DescribePartnersResult& AddPartnerIntegrationInfoList(PartnerIntegrationInfo&& value) { m_partnerIntegrationInfoList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePartnersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePartnersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PartnerIntegrationInfo> m_partnerIntegrationInfoList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
