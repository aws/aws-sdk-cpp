/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable Amazon SES Easy DKIM signing for an
   * identity. For more information about setting up Easy DKIM, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabledRequest">AWS
   * API Reference</a></p>
   */
  class SetIdentityDkimEnabledRequest : public SESRequest
  {
  public:
    AWS_SES_API SetIdentityDkimEnabledRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityDkimEnabled"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    SetIdentityDkimEnabledRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets whether DKIM signing is enabled for an identity. Set to
     * <code>true</code> to enable DKIM signing for this identity; <code>false</code>
     * to disable it. </p>
     */
    inline bool GetDkimEnabled() const { return m_dkimEnabled; }
    inline bool DkimEnabledHasBeenSet() const { return m_dkimEnabledHasBeenSet; }
    inline void SetDkimEnabled(bool value) { m_dkimEnabledHasBeenSet = true; m_dkimEnabled = value; }
    inline SetIdentityDkimEnabledRequest& WithDkimEnabled(bool value) { SetDkimEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    bool m_dkimEnabled{false};
    bool m_dkimEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
