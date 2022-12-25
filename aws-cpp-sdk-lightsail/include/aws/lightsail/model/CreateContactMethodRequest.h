/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/ContactProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateContactMethodRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateContactMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContactMethod"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline const ContactProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline void SetProtocol(const ContactProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline void SetProtocol(ContactProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline CreateContactMethodRequest& WithProtocol(const ContactProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of the contact method, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p> <p>The <code>SMS</code> protocol is
     * supported only in the following Amazon Web Services Regions.</p> <ul> <li> <p>US
     * East (N. Virginia) (<code>us-east-1</code>)</p> </li> <li> <p>US West (Oregon)
     * (<code>us-west-2</code>)</p> </li> <li> <p>Europe (Ireland)
     * (<code>eu-west-1</code>)</p> </li> <li> <p>Asia Pacific (Tokyo)
     * (<code>ap-northeast-1</code>)</p> </li> <li> <p>Asia Pacific (Singapore)
     * (<code>ap-southeast-1</code>)</p> </li> <li> <p>Asia Pacific (Sydney)
     * (<code>ap-southeast-2</code>)</p> </li> </ul> <p>For a list of countries/regions
     * where SMS text messages can be sent, and the latest Amazon Web Services Regions
     * where SMS text messaging is supported, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-supported-regions-countries.html">Supported
     * Regions and Countries</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>For
     * more information about notifications in Amazon Lightsail, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
     * in Amazon Lightsail</a>.</p>
     */
    inline CreateContactMethodRequest& WithProtocol(ContactProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline const Aws::String& GetContactEndpoint() const{ return m_contactEndpoint; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline bool ContactEndpointHasBeenSet() const { return m_contactEndpointHasBeenSet; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetContactEndpoint(const Aws::String& value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint = value; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetContactEndpoint(Aws::String&& value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint = std::move(value); }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetContactEndpoint(const char* value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint.assign(value); }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline CreateContactMethodRequest& WithContactEndpoint(const Aws::String& value) { SetContactEndpoint(value); return *this;}

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline CreateContactMethodRequest& WithContactEndpoint(Aws::String&& value) { SetContactEndpoint(std::move(value)); return *this;}

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p> <p>Use the E.164 format when specifying a mobile phone number.
     * E.164 is a standard for the phone number structure used for international
     * telecommunication. Phone numbers that follow this format can have a maximum of
     * 15 digits, and they are prefixed with the plus character (+) and the country
     * code. For example, a U.S. phone number in E.164 format would be specified as
     * +1XXX5550100. For more information, see <a
     * href="https://en.wikipedia.org/wiki/E.164">E.164</a> on <i>Wikipedia</i>.</p>
     */
    inline CreateContactMethodRequest& WithContactEndpoint(const char* value) { SetContactEndpoint(value); return *this;}

  private:

    ContactProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_contactEndpoint;
    bool m_contactEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
