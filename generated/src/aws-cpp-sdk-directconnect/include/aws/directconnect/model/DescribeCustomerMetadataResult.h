﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/NniPartnerType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The list of customer agreements.</p>
     */
    inline const Aws::Vector<CustomerAgreement>& GetAgreements() const{ return m_agreements; }
    inline void SetAgreements(const Aws::Vector<CustomerAgreement>& value) { m_agreements = value; }
    inline void SetAgreements(Aws::Vector<CustomerAgreement>&& value) { m_agreements = std::move(value); }
    inline DescribeCustomerMetadataResult& WithAgreements(const Aws::Vector<CustomerAgreement>& value) { SetAgreements(value); return *this;}
    inline DescribeCustomerMetadataResult& WithAgreements(Aws::Vector<CustomerAgreement>&& value) { SetAgreements(std::move(value)); return *this;}
    inline DescribeCustomerMetadataResult& AddAgreements(const CustomerAgreement& value) { m_agreements.push_back(value); return *this; }
    inline DescribeCustomerMetadataResult& AddAgreements(CustomerAgreement&& value) { m_agreements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network-to-network interface (NNI) partner. The partner type will
     * be one of the following:</p> <ul> <li> <p>V1: This partner can only allocate
     * 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or 500Mbps subgigabit
     * connections.</p> </li> <li> <p>V2: This partner can only allocate 1GB, 2GB, 5GB,
     * or 10GB hosted connections.</p> </li> <li> <p>nonPartner: The customer is not a
     * partner.</p> </li> </ul>
     */
    inline const NniPartnerType& GetNniPartnerType() const{ return m_nniPartnerType; }
    inline void SetNniPartnerType(const NniPartnerType& value) { m_nniPartnerType = value; }
    inline void SetNniPartnerType(NniPartnerType&& value) { m_nniPartnerType = std::move(value); }
    inline DescribeCustomerMetadataResult& WithNniPartnerType(const NniPartnerType& value) { SetNniPartnerType(value); return *this;}
    inline DescribeCustomerMetadataResult& WithNniPartnerType(NniPartnerType&& value) { SetNniPartnerType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCustomerMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCustomerMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCustomerMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerAgreement> m_agreements;

    NniPartnerType m_nniPartnerType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
