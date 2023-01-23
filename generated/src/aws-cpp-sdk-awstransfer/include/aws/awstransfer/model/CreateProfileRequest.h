/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProfileType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline const Aws::String& GetAs2Id() const{ return m_as2Id; }

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline bool As2IdHasBeenSet() const { return m_as2IdHasBeenSet; }

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline void SetAs2Id(const Aws::String& value) { m_as2IdHasBeenSet = true; m_as2Id = value; }

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline void SetAs2Id(Aws::String&& value) { m_as2IdHasBeenSet = true; m_as2Id = std::move(value); }

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline void SetAs2Id(const char* value) { m_as2IdHasBeenSet = true; m_as2Id.assign(value); }

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline CreateProfileRequest& WithAs2Id(const Aws::String& value) { SetAs2Id(value); return *this;}

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline CreateProfileRequest& WithAs2Id(Aws::String&& value) { SetAs2Id(std::move(value)); return *this;}

    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline CreateProfileRequest& WithAs2Id(const char* value) { SetAs2Id(value); return *this;}


    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline const ProfileType& GetProfileType() const{ return m_profileType; }

    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }

    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline void SetProfileType(const ProfileType& value) { m_profileTypeHasBeenSet = true; m_profileType = value; }

    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline void SetProfileType(ProfileType&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::move(value); }

    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline CreateProfileRequest& WithProfileType(const ProfileType& value) { SetProfileType(value); return *this;}

    /**
     * <p>Determines the type of profile to create:</p> <ul> <li> <p>Specify
     * <code>LOCAL</code> to create a local profile. A local profile represents the
     * AS2-enabled Transfer Family server organization or party.</p> </li> <li>
     * <p>Specify <code>PARTNER</code> to create a partner profile. A partner profile
     * represents a remote organization, external to Transfer Family.</p> </li> </ul>
     */
    inline CreateProfileRequest& WithProfileType(ProfileType&& value) { SetProfileType(std::move(value)); return *this;}


    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateIds() const{ return m_certificateIds; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline bool CertificateIdsHasBeenSet() const { return m_certificateIdsHasBeenSet; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline void SetCertificateIds(const Aws::Vector<Aws::String>& value) { m_certificateIdsHasBeenSet = true; m_certificateIds = value; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline void SetCertificateIds(Aws::Vector<Aws::String>&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds = std::move(value); }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline CreateProfileRequest& WithCertificateIds(const Aws::Vector<Aws::String>& value) { SetCertificateIds(value); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline CreateProfileRequest& WithCertificateIds(Aws::Vector<Aws::String>&& value) { SetCertificateIds(std::move(value)); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline CreateProfileRequest& AddCertificateIds(const Aws::String& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline CreateProfileRequest& AddCertificateIds(Aws::String&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline CreateProfileRequest& AddCertificateIds(const char* value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }


    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for AS2 profiles.</p>
     */
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_as2Id;
    bool m_as2IdHasBeenSet = false;

    ProfileType m_profileType;
    bool m_profileTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateIds;
    bool m_certificateIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
