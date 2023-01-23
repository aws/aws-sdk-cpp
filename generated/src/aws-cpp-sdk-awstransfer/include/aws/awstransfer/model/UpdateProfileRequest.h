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
    AWS_TRANSFER_API UpdateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline UpdateProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline UpdateProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the profile object that you are updating.</p>
     */
    inline UpdateProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


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
    inline UpdateProfileRequest& WithCertificateIds(const Aws::Vector<Aws::String>& value) { SetCertificateIds(value); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline UpdateProfileRequest& WithCertificateIds(Aws::Vector<Aws::String>&& value) { SetCertificateIds(std::move(value)); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline UpdateProfileRequest& AddCertificateIds(const Aws::String& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline UpdateProfileRequest& AddCertificateIds(Aws::String&& value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline UpdateProfileRequest& AddCertificateIds(const char* value) { m_certificateIdsHasBeenSet = true; m_certificateIds.push_back(value); return *this; }

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateIds;
    bool m_certificateIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
