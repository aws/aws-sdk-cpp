/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityType.h>
#include <aws/sesv2/model/DkimAttributes.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>If the email identity is a domain, this object contains information about the
   * DKIM verification status for the domain.</p> <p>If the email identity is an
   * email address, this object is empty. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class CreateEmailIdentityResult
  {
  public:
    AWS_SESV2_API CreateEmailIdentityResult();
    AWS_SESV2_API CreateEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API CreateEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityType = value; }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityType = std::move(value); }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline CreateEmailIdentityResult& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline CreateEmailIdentityResult& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether or not the identity is verified. You can only send email
     * from verified email addresses or domains. For more information about verifying
     * identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline bool GetVerifiedForSendingStatus() const{ return m_verifiedForSendingStatus; }

    /**
     * <p>Specifies whether or not the identity is verified. You can only send email
     * from verified email addresses or domains. For more information about verifying
     * identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatus = value; }

    /**
     * <p>Specifies whether or not the identity is verified. You can only send email
     * from verified email addresses or domains. For more information about verifying
     * identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline CreateEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}


    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const{ return m_dkimAttributes; }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline void SetDkimAttributes(const DkimAttributes& value) { m_dkimAttributes = value; }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline void SetDkimAttributes(DkimAttributes&& value) { m_dkimAttributes = std::move(value); }

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline CreateEmailIdentityResult& WithDkimAttributes(const DkimAttributes& value) { SetDkimAttributes(value); return *this;}

    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline CreateEmailIdentityResult& WithDkimAttributes(DkimAttributes&& value) { SetDkimAttributes(std::move(value)); return *this;}

  private:

    IdentityType m_identityType;

    bool m_verifiedForSendingStatus;

    DkimAttributes m_dkimAttributes;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
