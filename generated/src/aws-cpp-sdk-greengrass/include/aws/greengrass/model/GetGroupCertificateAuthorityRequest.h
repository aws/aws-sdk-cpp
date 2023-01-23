/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetGroupCertificateAuthorityRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetGroupCertificateAuthorityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupCertificateAuthority"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    /**
     * The ID of the certificate authority.
     */
    inline const Aws::String& GetCertificateAuthorityId() const{ return m_certificateAuthorityId; }

    /**
     * The ID of the certificate authority.
     */
    inline bool CertificateAuthorityIdHasBeenSet() const { return m_certificateAuthorityIdHasBeenSet; }

    /**
     * The ID of the certificate authority.
     */
    inline void SetCertificateAuthorityId(const Aws::String& value) { m_certificateAuthorityIdHasBeenSet = true; m_certificateAuthorityId = value; }

    /**
     * The ID of the certificate authority.
     */
    inline void SetCertificateAuthorityId(Aws::String&& value) { m_certificateAuthorityIdHasBeenSet = true; m_certificateAuthorityId = std::move(value); }

    /**
     * The ID of the certificate authority.
     */
    inline void SetCertificateAuthorityId(const char* value) { m_certificateAuthorityIdHasBeenSet = true; m_certificateAuthorityId.assign(value); }

    /**
     * The ID of the certificate authority.
     */
    inline GetGroupCertificateAuthorityRequest& WithCertificateAuthorityId(const Aws::String& value) { SetCertificateAuthorityId(value); return *this;}

    /**
     * The ID of the certificate authority.
     */
    inline GetGroupCertificateAuthorityRequest& WithCertificateAuthorityId(Aws::String&& value) { SetCertificateAuthorityId(std::move(value)); return *this;}

    /**
     * The ID of the certificate authority.
     */
    inline GetGroupCertificateAuthorityRequest& WithCertificateAuthorityId(const char* value) { SetCertificateAuthorityId(value); return *this;}


    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the Greengrass group.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupCertificateAuthorityRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupCertificateAuthorityRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupCertificateAuthorityRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_certificateAuthorityId;
    bool m_certificateAuthorityIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
