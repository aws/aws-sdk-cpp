/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/NniPartnerType.h>
#include <aws/directconnect/model/CustomerAgreement.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{
  class DescribeCustomerMetadataResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult();
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of customer agreements.</p>
     */
    inline const Aws::Vector<CustomerAgreement>& GetAgreements() const{ return m_agreements; }

    /**
     * <p>The list of customer agreements.</p>
     */
    inline void SetAgreements(const Aws::Vector<CustomerAgreement>& value) { m_agreements = value; }

    /**
     * <p>The list of customer agreements.</p>
     */
    inline void SetAgreements(Aws::Vector<CustomerAgreement>&& value) { m_agreements = std::move(value); }

    /**
     * <p>The list of customer agreements.</p>
     */
    inline DescribeCustomerMetadataResult& WithAgreements(const Aws::Vector<CustomerAgreement>& value) { SetAgreements(value); return *this;}

    /**
     * <p>The list of customer agreements.</p>
     */
    inline DescribeCustomerMetadataResult& WithAgreements(Aws::Vector<CustomerAgreement>&& value) { SetAgreements(std::move(value)); return *this;}

    /**
     * <p>The list of customer agreements.</p>
     */
    inline DescribeCustomerMetadataResult& AddAgreements(const CustomerAgreement& value) { m_agreements.push_back(value); return *this; }

    /**
     * <p>The list of customer agreements.</p>
     */
    inline DescribeCustomerMetadataResult& AddAgreements(CustomerAgreement&& value) { m_agreements.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline const NniPartnerType& GetNniPartnerType() const{ return m_nniPartnerType; }

    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline void SetNniPartnerType(const NniPartnerType& value) { m_nniPartnerType = value; }

    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline void SetNniPartnerType(NniPartnerType&& value) { m_nniPartnerType = std::move(value); }

    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline DescribeCustomerMetadataResult& WithNniPartnerType(const NniPartnerType& value) { SetNniPartnerType(value); return *this;}

    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline DescribeCustomerMetadataResult& WithNniPartnerType(NniPartnerType&& value) { SetNniPartnerType(std::move(value)); return *this;}

  private:

    Aws::Vector<CustomerAgreement> m_agreements;

    NniPartnerType m_nniPartnerType;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
