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


    
    inline int GetValidationResult() const{ return m_validationResult; }

    
    inline void SetValidationResult(int value) { m_validationResult = value; }

    
    inline ValidateE911AddressResult& WithValidationResult(int value) { SetValidationResult(value); return *this;}


    
    inline const Aws::String& GetAddressExternalId() const{ return m_addressExternalId; }

    
    inline void SetAddressExternalId(const Aws::String& value) { m_addressExternalId = value; }

    
    inline void SetAddressExternalId(Aws::String&& value) { m_addressExternalId = std::move(value); }

    
    inline void SetAddressExternalId(const char* value) { m_addressExternalId.assign(value); }

    
    inline ValidateE911AddressResult& WithAddressExternalId(const Aws::String& value) { SetAddressExternalId(value); return *this;}

    
    inline ValidateE911AddressResult& WithAddressExternalId(Aws::String&& value) { SetAddressExternalId(std::move(value)); return *this;}

    
    inline ValidateE911AddressResult& WithAddressExternalId(const char* value) { SetAddressExternalId(value); return *this;}


    
    inline const Address& GetAddress() const{ return m_address; }

    
    inline void SetAddress(const Address& value) { m_address = value; }

    
    inline void SetAddress(Address&& value) { m_address = std::move(value); }

    
    inline ValidateE911AddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}

    
    inline ValidateE911AddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}


    
    inline const Aws::Vector<CandidateAddress>& GetCandidateAddressList() const{ return m_candidateAddressList; }

    
    inline void SetCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { m_candidateAddressList = value; }

    
    inline void SetCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { m_candidateAddressList = std::move(value); }

    
    inline ValidateE911AddressResult& WithCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { SetCandidateAddressList(value); return *this;}

    
    inline ValidateE911AddressResult& WithCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { SetCandidateAddressList(std::move(value)); return *this;}

    
    inline ValidateE911AddressResult& AddCandidateAddressList(const CandidateAddress& value) { m_candidateAddressList.push_back(value); return *this; }

    
    inline ValidateE911AddressResult& AddCandidateAddressList(CandidateAddress&& value) { m_candidateAddressList.push_back(std::move(value)); return *this; }

  private:

    int m_validationResult;

    Aws::String m_addressExternalId;

    Address m_address;

    Aws::Vector<CandidateAddress> m_candidateAddressList;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
