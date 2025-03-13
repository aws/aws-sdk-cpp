/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateProfileRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    UpdateProfileRequest& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateIds() const { return m_certificateIds; }
    inline bool CertificateIdsHasBeenSet() const { return m_certificateIdsHasBeenSet; }
    template<typename CertificateIdsT = Aws::Vector<Aws::String>>
    void SetCertificateIds(CertificateIdsT&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds = std::forward<CertificateIdsT>(value); }
    template<typename CertificateIdsT = Aws::Vector<Aws::String>>
    UpdateProfileRequest& WithCertificateIds(CertificateIdsT&& value) { SetCertificateIds(std::forward<CertificateIdsT>(value)); return *this;}
    template<typename CertificateIdsT = Aws::String>
    UpdateProfileRequest& AddCertificateIds(CertificateIdsT&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.emplace_back(std::forward<CertificateIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateIds;
    bool m_certificateIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
