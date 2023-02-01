/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Address.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/CandidateAddress.h>
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
namespace Chime
{
namespace Model
{
  class ValidateE911AddressResult
  {
  public:
    AWS_CHIME_API ValidateE911AddressResult();
    AWS_CHIME_API ValidateE911AddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ValidateE911AddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Number indicating the result of address validation. <code>0</code> means the
     * address was perfect as is and successfully validated. <code>1</code> means the
     * address was corrected. <code>2</code> means the address sent was not close
     * enough and was not validated.</p>
     */
    inline int GetValidationResult() const{ return m_validationResult; }

    /**
     * <p>Number indicating the result of address validation. <code>0</code> means the
     * address was perfect as is and successfully validated. <code>1</code> means the
     * address was corrected. <code>2</code> means the address sent was not close
     * enough and was not validated.</p>
     */
    inline void SetValidationResult(int value) { m_validationResult = value; }

    /**
     * <p>Number indicating the result of address validation. <code>0</code> means the
     * address was perfect as is and successfully validated. <code>1</code> means the
     * address was corrected. <code>2</code> means the address sent was not close
     * enough and was not validated.</p>
     */
    inline ValidateE911AddressResult& WithValidationResult(int value) { SetValidationResult(value); return *this;}


    /**
     * <p>The ID that represents the address.</p>
     */
    inline const Aws::String& GetAddressExternalId() const{ return m_addressExternalId; }

    /**
     * <p>The ID that represents the address.</p>
     */
    inline void SetAddressExternalId(const Aws::String& value) { m_addressExternalId = value; }

    /**
     * <p>The ID that represents the address.</p>
     */
    inline void SetAddressExternalId(Aws::String&& value) { m_addressExternalId = std::move(value); }

    /**
     * <p>The ID that represents the address.</p>
     */
    inline void SetAddressExternalId(const char* value) { m_addressExternalId.assign(value); }

    /**
     * <p>The ID that represents the address.</p>
     */
    inline ValidateE911AddressResult& WithAddressExternalId(const Aws::String& value) { SetAddressExternalId(value); return *this;}

    /**
     * <p>The ID that represents the address.</p>
     */
    inline ValidateE911AddressResult& WithAddressExternalId(Aws::String&& value) { SetAddressExternalId(std::move(value)); return *this;}

    /**
     * <p>The ID that represents the address.</p>
     */
    inline ValidateE911AddressResult& WithAddressExternalId(const char* value) { SetAddressExternalId(value); return *this;}


    /**
     * <p>The validated address.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>The validated address.</p>
     */
    inline void SetAddress(const Address& value) { m_address = value; }

    /**
     * <p>The validated address.</p>
     */
    inline void SetAddress(Address&& value) { m_address = std::move(value); }

    /**
     * <p>The validated address.</p>
     */
    inline ValidateE911AddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>The validated address.</p>
     */
    inline ValidateE911AddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}


    /**
     * <p>The list of address suggestions.</p>
     */
    inline const Aws::Vector<CandidateAddress>& GetCandidateAddressList() const{ return m_candidateAddressList; }

    /**
     * <p>The list of address suggestions.</p>
     */
    inline void SetCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { m_candidateAddressList = value; }

    /**
     * <p>The list of address suggestions.</p>
     */
    inline void SetCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { m_candidateAddressList = std::move(value); }

    /**
     * <p>The list of address suggestions.</p>
     */
    inline ValidateE911AddressResult& WithCandidateAddressList(const Aws::Vector<CandidateAddress>& value) { SetCandidateAddressList(value); return *this;}

    /**
     * <p>The list of address suggestions.</p>
     */
    inline ValidateE911AddressResult& WithCandidateAddressList(Aws::Vector<CandidateAddress>&& value) { SetCandidateAddressList(std::move(value)); return *this;}

    /**
     * <p>The list of address suggestions.</p>
     */
    inline ValidateE911AddressResult& AddCandidateAddressList(const CandidateAddress& value) { m_candidateAddressList.push_back(value); return *this; }

    /**
     * <p>The list of address suggestions.</p>
     */
    inline ValidateE911AddressResult& AddCandidateAddressList(CandidateAddress&& value) { m_candidateAddressList.push_back(std::move(value)); return *this; }

  private:

    int m_validationResult;

    Aws::String m_addressExternalId;

    Address m_address;

    Aws::Vector<CandidateAddress> m_candidateAddressList;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
