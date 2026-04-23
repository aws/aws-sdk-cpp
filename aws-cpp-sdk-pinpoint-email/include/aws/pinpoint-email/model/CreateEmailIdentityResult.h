/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/IdentityType.h>
#include <aws/pinpoint-email/model/DkimAttributes.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>If the email identity is a domain, this object contains tokens that you can
   * use to create a set of CNAME records. To sucessfully verify your domain, you
   * have to add these records to the DNS configuration for your domain.</p> <p>If
   * the email identity is an email address, this object is empty. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API CreateEmailIdentityResult
  {
  public:
    CreateEmailIdentityResult();
    CreateEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The email identity type.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The email identity type.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityType = value; }

    /**
     * <p>The email identity type.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityType = std::move(value); }

    /**
     * <p>The email identity type.</p>
     */
    inline CreateEmailIdentityResult& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The email identity type.</p>
     */
    inline CreateEmailIdentityResult& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether or not the identity is verified. In Amazon Pinpoint, you
     * can only send email from verified email addresses or domains. For more
     * information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline bool GetVerifiedForSendingStatus() const{ return m_verifiedForSendingStatus; }

    /**
     * <p>Specifies whether or not the identity is verified. In Amazon Pinpoint, you
     * can only send email from verified email addresses or domains. For more
     * information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatus = value; }

    /**
     * <p>Specifies whether or not the identity is verified. In Amazon Pinpoint, you
     * can only send email from verified email addresses or domains. For more
     * information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline CreateEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}


    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const{ return m_dkimAttributes; }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline void SetDkimAttributes(const DkimAttributes& value) { m_dkimAttributes = value; }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline void SetDkimAttributes(DkimAttributes&& value) { m_dkimAttributes = std::move(value); }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline CreateEmailIdentityResult& WithDkimAttributes(const DkimAttributes& value) { SetDkimAttributes(value); return *this;}

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline CreateEmailIdentityResult& WithDkimAttributes(DkimAttributes&& value) { SetDkimAttributes(std::move(value)); return *this;}

  private:

    IdentityType m_identityType;

    bool m_verifiedForSendingStatus;

    DkimAttributes m_dkimAttributes;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
