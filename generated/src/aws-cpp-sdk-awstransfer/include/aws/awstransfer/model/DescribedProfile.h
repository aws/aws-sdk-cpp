﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProfileType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>The details for a local or partner AS2 profile. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedProfile">AWS
   * API Reference</a></p>
   */
  class DescribedProfile
  {
  public:
    AWS_TRANSFER_API DescribedProfile();
    AWS_TRANSFER_API DescribedProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribedProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribedProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribedProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the local or partner AS2 profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline DescribedProfile& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline DescribedProfile& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline DescribedProfile& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline const ProfileType& GetProfileType() const{ return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(const ProfileType& value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline void SetProfileType(ProfileType&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::move(value); }
    inline DescribedProfile& WithProfileType(const ProfileType& value) { SetProfileType(value); return *this;}
    inline DescribedProfile& WithProfileType(ProfileType&& value) { SetProfileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>As2Id</code> is the <i>AS2-name</i>, as defined in the <a
     * href="https://datatracker.ietf.org/doc/html/rfc4130">RFC 4130</a>. For inbound
     * transfers, this is the <code>AS2-From</code> header for the AS2 messages sent
     * from the partner. For outbound connectors, this is the <code>AS2-To</code>
     * header for the AS2 messages sent to the partner using the
     * <code>StartFileTransfer</code> API operation. This ID cannot include spaces.</p>
     */
    inline const Aws::String& GetAs2Id() const{ return m_as2Id; }
    inline bool As2IdHasBeenSet() const { return m_as2IdHasBeenSet; }
    inline void SetAs2Id(const Aws::String& value) { m_as2IdHasBeenSet = true; m_as2Id = value; }
    inline void SetAs2Id(Aws::String&& value) { m_as2IdHasBeenSet = true; m_as2Id = std::move(value); }
    inline void SetAs2Id(const char* value) { m_as2IdHasBeenSet = true; m_as2Id.assign(value); }
    inline DescribedProfile& WithAs2Id(const Aws::String& value) { SetAs2Id(value); return *this;}
    inline DescribedProfile& WithAs2Id(Aws::String&& value) { SetAs2Id(std::move(value)); return *this;}
    inline DescribedProfile& WithAs2Id(const char* value) { SetAs2Id(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateIds() const{ return m_certificateIds; }
    inline bool CertificateIdsHasBeenSet() const { return m_certificateIdsHasBeenSet; }
    inline void SetCertificateIds(const Aws::Vector<Aws::String>& value) { m_certificateIdsHasBeenSet = true; m_certificateIds = value; }
    inline void SetCertificateIds(Aws::Vector<Aws::String>&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds = std::move(value); }
    inline DescribedProfile& WithCertificateIds(const Aws::Vector<Aws::String>& value) { SetCertificateIds(value); return *this;}
    inline DescribedProfile& WithCertificateIds(Aws::Vector<Aws::String>&& value) { SetCertificateIds(std::move(value)); return *this;}
    inline DescribedProfile& AddCertificateIds(const Aws::String& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }
    inline DescribedProfile& AddCertificateIds(Aws::String&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(std::move(value)); return *this; }
    inline DescribedProfile& AddCertificateIds(const char* value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for profiles.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DescribedProfile& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribedProfile& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribedProfile& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DescribedProfile& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    ProfileType m_profileType;
    bool m_profileTypeHasBeenSet = false;

    Aws::String m_as2Id;
    bool m_as2IdHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateIds;
    bool m_certificateIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
