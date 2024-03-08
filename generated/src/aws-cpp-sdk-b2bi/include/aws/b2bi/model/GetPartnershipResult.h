/**
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
  class GetPartnershipResult
  {
  public:
    AWS_B2BI_API GetPartnershipResult();
    AWS_B2BI_API GetPartnershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GetPartnershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline GetPartnershipResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline GetPartnershipResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline GetPartnershipResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const{ return m_partnershipId; }

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(const Aws::String& value) { m_partnershipId = value; }

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(Aws::String&& value) { m_partnershipId = std::move(value); }

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(const char* value) { m_partnershipId.assign(value); }

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline GetPartnershipResult& WithPartnershipId(const Aws::String& value) { SetPartnershipId(value); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline GetPartnershipResult& WithPartnershipId(Aws::String&& value) { SetPartnershipId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline GetPartnershipResult& WithPartnershipId(const char* value) { SetPartnershipId(value); return *this;}


    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetPartnershipArn() const{ return m_partnershipArn; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetPartnershipArn(const Aws::String& value) { m_partnershipArn = value; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetPartnershipArn(Aws::String&& value) { m_partnershipArn = std::move(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetPartnershipArn(const char* value) { m_partnershipArn.assign(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetPartnershipResult& WithPartnershipArn(const Aws::String& value) { SetPartnershipArn(value); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetPartnershipResult& WithPartnershipArn(Aws::String&& value) { SetPartnershipArn(std::move(value)); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetPartnershipResult& WithPartnershipArn(const char* value) { SetPartnershipArn(value); return *this;}


    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline GetPartnershipResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline GetPartnershipResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline GetPartnershipResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline GetPartnershipResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline GetPartnershipResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline GetPartnershipResult& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline void SetPhone(const Aws::String& value) { m_phone = value; }

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline void SetPhone(Aws::String&& value) { m_phone = std::move(value); }

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline void SetPhone(const char* value) { m_phone.assign(value); }

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline GetPartnershipResult& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline GetPartnershipResult& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}

    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline GetPartnershipResult& WithPhone(const char* value) { SetPhone(value); return *this;}


    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilities = value; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilities = std::move(value); }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline GetPartnershipResult& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline GetPartnershipResult& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline GetPartnershipResult& AddCapabilities(const Aws::String& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline GetPartnershipResult& AddCapabilities(Aws::String&& value) { m_capabilities.push_back(std::move(value)); return *this; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline GetPartnershipResult& AddCapabilities(const char* value) { m_capabilities.push_back(value); return *this; }


    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline const Aws::String& GetTradingPartnerId() const{ return m_tradingPartnerId; }

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline void SetTradingPartnerId(const Aws::String& value) { m_tradingPartnerId = value; }

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline void SetTradingPartnerId(Aws::String&& value) { m_tradingPartnerId = std::move(value); }

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline void SetTradingPartnerId(const char* value) { m_tradingPartnerId.assign(value); }

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline GetPartnershipResult& WithTradingPartnerId(const Aws::String& value) { SetTradingPartnerId(value); return *this;}

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline GetPartnershipResult& WithTradingPartnerId(Aws::String&& value) { SetTradingPartnerId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline GetPartnershipResult& WithTradingPartnerId(const char* value) { SetTradingPartnerId(value); return *this;}


    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline GetPartnershipResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline GetPartnershipResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline GetPartnershipResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline GetPartnershipResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPartnershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPartnershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPartnershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
