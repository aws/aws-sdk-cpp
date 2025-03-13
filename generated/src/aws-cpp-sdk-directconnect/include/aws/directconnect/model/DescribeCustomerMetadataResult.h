/**
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
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult() = default;
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeCustomerMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of customer agreements.</p>
     */
    inline const Aws::Vector<CustomerAgreement>& GetAgreements() const { return m_agreements; }
    template<typename AgreementsT = Aws::Vector<CustomerAgreement>>
    void SetAgreements(AgreementsT&& value) { m_agreementsHasBeenSet = true; m_agreements = std::forward<AgreementsT>(value); }
    template<typename AgreementsT = Aws::Vector<CustomerAgreement>>
    DescribeCustomerMetadataResult& WithAgreements(AgreementsT&& value) { SetAgreements(std::forward<AgreementsT>(value)); return *this;}
    template<typename AgreementsT = CustomerAgreement>
    DescribeCustomerMetadataResult& AddAgreements(AgreementsT&& value) { m_agreementsHasBeenSet = true; m_agreements.emplace_back(std::forward<AgreementsT>(value)); return *this; }
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
    inline NniPartnerType GetNniPartnerType() const { return m_nniPartnerType; }
    inline void SetNniPartnerType(NniPartnerType value) { m_nniPartnerTypeHasBeenSet = true; m_nniPartnerType = value; }
    inline DescribeCustomerMetadataResult& WithNniPartnerType(NniPartnerType value) { SetNniPartnerType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomerMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerAgreement> m_agreements;
    bool m_agreementsHasBeenSet = false;

    NniPartnerType m_nniPartnerType{NniPartnerType::NOT_SET};
    bool m_nniPartnerTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
