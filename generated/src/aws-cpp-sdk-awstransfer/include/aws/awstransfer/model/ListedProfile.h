/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProfileType.h>
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
   * <p>Returns the properties of the profile that was specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedProfile">AWS
   * API Reference</a></p>
   */
  class ListedProfile
  {
  public:
    AWS_TRANSFER_API ListedProfile() = default;
    AWS_TRANSFER_API ListedProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListedProfile& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the local or partner AS2 profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    ListedProfile& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
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
    inline const Aws::String& GetAs2Id() const { return m_as2Id; }
    inline bool As2IdHasBeenSet() const { return m_as2IdHasBeenSet; }
    template<typename As2IdT = Aws::String>
    void SetAs2Id(As2IdT&& value) { m_as2IdHasBeenSet = true; m_as2Id = std::forward<As2IdT>(value); }
    template<typename As2IdT = Aws::String>
    ListedProfile& WithAs2Id(As2IdT&& value) { SetAs2Id(std::forward<As2IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline ProfileType GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(ProfileType value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline ListedProfile& WithProfileType(ProfileType value) { SetProfileType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_as2Id;
    bool m_as2IdHasBeenSet = false;

    ProfileType m_profileType{ProfileType::NOT_SET};
    bool m_profileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
