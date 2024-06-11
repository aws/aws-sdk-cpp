﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace B2BI
{
namespace Model
{
  class CreatePartnershipResult
  {
  public:
    AWS_B2BI_API CreatePartnershipResult();
    AWS_B2BI_API CreatePartnershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreatePartnershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }
    inline CreatePartnershipResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline CreatePartnershipResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const{ return m_partnershipId; }
    inline void SetPartnershipId(const Aws::String& value) { m_partnershipId = value; }
    inline void SetPartnershipId(Aws::String&& value) { m_partnershipId = std::move(value); }
    inline void SetPartnershipId(const char* value) { m_partnershipId.assign(value); }
    inline CreatePartnershipResult& WithPartnershipId(const Aws::String& value) { SetPartnershipId(value); return *this;}
    inline CreatePartnershipResult& WithPartnershipId(Aws::String&& value) { SetPartnershipId(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithPartnershipId(const char* value) { SetPartnershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetPartnershipArn() const{ return m_partnershipArn; }
    inline void SetPartnershipArn(const Aws::String& value) { m_partnershipArn = value; }
    inline void SetPartnershipArn(Aws::String&& value) { m_partnershipArn = std::move(value); }
    inline void SetPartnershipArn(const char* value) { m_partnershipArn.assign(value); }
    inline CreatePartnershipResult& WithPartnershipArn(const Aws::String& value) { SetPartnershipArn(value); return *this;}
    inline CreatePartnershipResult& WithPartnershipArn(Aws::String&& value) { SetPartnershipArn(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithPartnershipArn(const char* value) { SetPartnershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a descriptive name for the partnership.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreatePartnershipResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePartnershipResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline void SetEmail(const Aws::String& value) { m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_email.assign(value); }
    inline CreatePartnershipResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline CreatePartnershipResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }
    inline void SetPhone(const Aws::String& value) { m_phone = value; }
    inline void SetPhone(Aws::String&& value) { m_phone = std::move(value); }
    inline void SetPhone(const char* value) { m_phone.assign(value); }
    inline CreatePartnershipResult& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}
    inline CreatePartnershipResult& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithPhone(const char* value) { SetPhone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilities = std::move(value); }
    inline CreatePartnershipResult& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}
    inline CreatePartnershipResult& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CreatePartnershipResult& AddCapabilities(const Aws::String& value) { m_capabilities.push_back(value); return *this; }
    inline CreatePartnershipResult& AddCapabilities(Aws::String&& value) { m_capabilities.push_back(std::move(value)); return *this; }
    inline CreatePartnershipResult& AddCapabilities(const char* value) { m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a trading partner.</p>
     */
    inline const Aws::String& GetTradingPartnerId() const{ return m_tradingPartnerId; }
    inline void SetTradingPartnerId(const Aws::String& value) { m_tradingPartnerId = value; }
    inline void SetTradingPartnerId(Aws::String&& value) { m_tradingPartnerId = std::move(value); }
    inline void SetTradingPartnerId(const char* value) { m_tradingPartnerId.assign(value); }
    inline CreatePartnershipResult& WithTradingPartnerId(const Aws::String& value) { SetTradingPartnerId(value); return *this;}
    inline CreatePartnershipResult& WithTradingPartnerId(Aws::String&& value) { SetTradingPartnerId(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithTradingPartnerId(const char* value) { SetTradingPartnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreatePartnershipResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreatePartnershipResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePartnershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePartnershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePartnershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;

    Aws::String m_partnershipId;

    Aws::String m_partnershipArn;

    Aws::String m_name;

    Aws::String m_email;

    Aws::String m_phone;

    Aws::Vector<Aws::String> m_capabilities;

    Aws::String m_tradingPartnerId;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
