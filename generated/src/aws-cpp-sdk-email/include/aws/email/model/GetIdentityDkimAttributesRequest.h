﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request for the status of Amazon SES Easy DKIM signing for an
   * identity. For domain identities, this request also returns the DKIM tokens that
   * are required for Easy DKIM signing, and whether Amazon SES successfully verified
   * that these tokens were published. For more information about Easy DKIM, see the
   * <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributesRequest">AWS
   * API Reference</a></p>
   */
  class GetIdentityDkimAttributesRequest : public SESRequest
  {
  public:
    AWS_SES_API GetIdentityDkimAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityDkimAttributes"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A list of one or more verified identities - email addresses, domains, or
     * both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentities() const { return m_identities; }
    inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }
    template<typename IdentitiesT = Aws::Vector<Aws::String>>
    void SetIdentities(IdentitiesT&& value) { m_identitiesHasBeenSet = true; m_identities = std::forward<IdentitiesT>(value); }
    template<typename IdentitiesT = Aws::Vector<Aws::String>>
    GetIdentityDkimAttributesRequest& WithIdentities(IdentitiesT&& value) { SetIdentities(std::forward<IdentitiesT>(value)); return *this;}
    template<typename IdentitiesT = Aws::String>
    GetIdentityDkimAttributesRequest& AddIdentities(IdentitiesT&& value) { m_identitiesHasBeenSet = true; m_identities.emplace_back(std::forward<IdentitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_identities;
    bool m_identitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
