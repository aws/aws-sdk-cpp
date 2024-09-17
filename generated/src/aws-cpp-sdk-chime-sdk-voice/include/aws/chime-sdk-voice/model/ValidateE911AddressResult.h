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
    AWS_CHIMESDKVOICE_API ValidateE911AddressResult();
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
    inline int GetValidationResult() const{ return m_validationResult; }
    inline void SetValidationResult(int value) { m_validationResult = value; }
    inline ValidateE911AddressResult& WithValidationResult(int value) { SetValidationResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID that represents the address.</p>
     */
    inline const Aws::String& GetAddressExternalId() const{ return m_addressExternalId; }
    inline void SetAddressExternalId(const Aws::String& value) { m_addressExternalId = value; }
    inline void SetAddressExternalId(Aws::String&& value) { m_addressExternalId = std::move(value); }
    inline void SetAddressExternalId(const char* value) { m_addressExternalId.assign(value); }
    inline ValidateE911AddressResult& WithAddressExternalId(const Aws::String& value) { SetAddressExternalId(value); return *this;}
    inline ValidateE911AddressResult& WithAddressExternalId(Aws::String&& value) { SetAddressExternalId(std::move(value)); return *this;}
    inline ValidateE911AddressResult& WithAddressExternalId(const char* value) { SetAddressExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validated address.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline void SetAddress(const Address& value) { m_address = value; }
    inline void SetAddress(Address&& value) { m_address = std::move(value); }
    inline ValidateE911AddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline ValidateE911AddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of address suggestions..</p>
     */
    inline const Aws::Vector<CandidateAddress>& GetCandidateAddressList() const{ return m_candidateAddressList; }
    inline void SetCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { m_candidateAddressList = value; }
    inline void SetCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { m_candidateAddressList = std::move(value); }
    inline ValidateE911AddressResult& WithCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { SetCandidateAddressList(value); return *this;}
    inline ValidateE911AddressResult& WithCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { SetCandidateAddressList(std::move(value)); return *this;}
    inline ValidateE911AddressResult& AddCandidateAddressList(const CandidateAddress& value) { m_candidateAddressList.push_back(value); return *this; }
    inline ValidateE911AddressResult& AddCandidateAddressList(CandidateAddress&& value) { m_candidateAddressList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidateE911AddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidateE911AddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidateE911AddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_validationResult;

    Aws::String m_addressExternalId;

    Address m_address;

    Aws::Vector<CandidateAddress> m_candidateAddressList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
