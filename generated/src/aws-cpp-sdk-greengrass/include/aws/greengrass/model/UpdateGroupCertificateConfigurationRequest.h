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
  class UpdateGroupCertificateConfigurationRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateGroupCertificateConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroupCertificateConfiguration"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline const Aws::String& GetCertificateExpiryInMilliseconds() const { return m_certificateExpiryInMilliseconds; }
    inline bool CertificateExpiryInMillisecondsHasBeenSet() const { return m_certificateExpiryInMillisecondsHasBeenSet; }
    template<typename CertificateExpiryInMillisecondsT = Aws::String>
    void SetCertificateExpiryInMilliseconds(CertificateExpiryInMillisecondsT&& value) { m_certificateExpiryInMillisecondsHasBeenSet = true; m_certificateExpiryInMilliseconds = std::forward<CertificateExpiryInMillisecondsT>(value); }
    template<typename CertificateExpiryInMillisecondsT = Aws::String>
    UpdateGroupCertificateConfigurationRequest& WithCertificateExpiryInMilliseconds(CertificateExpiryInMillisecondsT&& value) { SetCertificateExpiryInMilliseconds(std::forward<CertificateExpiryInMillisecondsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    UpdateGroupCertificateConfigurationRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateExpiryInMilliseconds;
    bool m_certificateExpiryInMillisecondsHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
