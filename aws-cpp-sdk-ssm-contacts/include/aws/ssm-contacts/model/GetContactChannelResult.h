/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ChannelType.h>
#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <aws/ssm-contacts/model/ActivationStatus.h>
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
namespace SSMContacts
{
namespace Model
{
  class GetContactChannelResult
  {
  public:
    AWS_SSMCONTACTS_API GetContactChannelResult();
    AWS_SSMCONTACTS_API GetContactChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetContactChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline GetContactChannelResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline GetContactChannelResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline GetContactChannelResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelArn() const{ return m_contactChannelArn; }

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline void SetContactChannelArn(const Aws::String& value) { m_contactChannelArn = value; }

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline void SetContactChannelArn(Aws::String&& value) { m_contactChannelArn = std::move(value); }

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline void SetContactChannelArn(const char* value) { m_contactChannelArn.assign(value); }

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline GetContactChannelResult& WithContactChannelArn(const Aws::String& value) { SetContactChannelArn(value); return *this;}

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline GetContactChannelResult& WithContactChannelArn(Aws::String&& value) { SetContactChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline GetContactChannelResult& WithContactChannelArn(const char* value) { SetContactChannelArn(value); return *this;}


    /**
     * <p>The name of the contact channel</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact channel</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the contact channel</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the contact channel</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the contact channel</p>
     */
    inline GetContactChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact channel</p>
     */
    inline GetContactChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact channel</p>
     */
    inline GetContactChannelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline void SetType(const ChannelType& value) { m_type = value; }

    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline void SetType(ChannelType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline GetContactChannelResult& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline GetContactChannelResult& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const{ return m_deliveryAddress; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline void SetDeliveryAddress(const ContactChannelAddress& value) { m_deliveryAddress = value; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline void SetDeliveryAddress(ContactChannelAddress&& value) { m_deliveryAddress = std::move(value); }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline GetContactChannelResult& WithDeliveryAddress(const ContactChannelAddress& value) { SetDeliveryAddress(value); return *this;}

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline GetContactChannelResult& WithDeliveryAddress(ContactChannelAddress&& value) { SetDeliveryAddress(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline const ActivationStatus& GetActivationStatus() const{ return m_activationStatus; }

    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline void SetActivationStatus(const ActivationStatus& value) { m_activationStatus = value; }

    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline void SetActivationStatus(ActivationStatus&& value) { m_activationStatus = std::move(value); }

    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline GetContactChannelResult& WithActivationStatus(const ActivationStatus& value) { SetActivationStatus(value); return *this;}

    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline GetContactChannelResult& WithActivationStatus(ActivationStatus&& value) { SetActivationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_contactArn;

    Aws::String m_contactChannelArn;

    Aws::String m_name;

    ChannelType m_type;

    ContactChannelAddress m_deliveryAddress;

    ActivationStatus m_activationStatus;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
