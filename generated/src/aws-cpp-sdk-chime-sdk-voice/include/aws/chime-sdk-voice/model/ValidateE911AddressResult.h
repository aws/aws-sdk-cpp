/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/Address.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/CandidateAddress.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ValidateE911AddressResult
  {
  public:
    AWS_CHIMESDKVOICE_API ValidateE911AddressResult() = default;
    AWS_CHIMESDKVOICE_API ValidateE911AddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ValidateE911AddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Number indicating the result of address validation.</p> <p>Each possible
     * result is defined as follows:</p> <ul> <li> <p> <code>0</code> - Address
     * validation succeeded.</p> </li> <li> <p> <code>1</code> - Address validation
     * succeeded. The address was a close enough match and has been corrected as part
     * of the address object.</p> </li> <li> <p> <code>2</code> - Address validation
     * failed. You should re-submit the validation request with candidates from the
     * <code>CandidateAddressList</code> result, if it's a close match.</p> </li> </ul>
     */
    inline int GetValidationResult() const { return m_validationResult; }
    inline void SetValidationResult(int value) { m_validationResultHasBeenSet = true; m_validationResult = value; }
    inline ValidateE911AddressResult& WithValidationResult(int value) { SetValidationResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID that represents the address.</p>
     */
    inline const Aws::String& GetAddressExternalId() const { return m_addressExternalId; }
    template<typename AddressExternalIdT = Aws::String>
    void SetAddressExternalId(AddressExternalIdT&& value) { m_addressExternalIdHasBeenSet = true; m_addressExternalId = std::forward<AddressExternalIdT>(value); }
    template<typename AddressExternalIdT = Aws::String>
    ValidateE911AddressResult& WithAddressExternalId(AddressExternalIdT&& value) { SetAddressExternalId(std::forward<AddressExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validated address.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    ValidateE911AddressResult& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of address suggestions..</p>
     */
    inline const Aws::Vector<CandidateAddress>& GetCandidateAddressList() const { return m_candidateAddressList; }
    template<typename CandidateAddressListT = Aws::Vector<CandidateAddress>>
    void SetCandidateAddressList(CandidateAddressListT&& value) { m_candidateAddressListHasBeenSet = true; m_candidateAddressList = std::forward<CandidateAddressListT>(value); }
    template<typename CandidateAddressListT = Aws::Vector<CandidateAddress>>
    ValidateE911AddressResult& WithCandidateAddressList(CandidateAddressListT&& value) { SetCandidateAddressList(std::forward<CandidateAddressListT>(value)); return *this;}
    template<typename CandidateAddressListT = CandidateAddress>
    ValidateE911AddressResult& AddCandidateAddressList(CandidateAddressListT&& value) { m_candidateAddressListHasBeenSet = true; m_candidateAddressList.emplace_back(std::forward<CandidateAddressListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateE911AddressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_validationResult{0};
    bool m_validationResultHasBeenSet = false;

    Aws::String m_addressExternalId;
    bool m_addressExternalIdHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<CandidateAddress> m_candidateAddressList;
    bool m_candidateAddressListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
