/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderRequest.h>
#include <aws/amplifyuibuilder/model/TokenProviders.h>
#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenRequestBody.h>
#include <utility>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   */
  class ExchangeCodeForTokenRequest : public AmplifyUIBuilderRequest
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExchangeCodeForToken"; }

    AWS_AMPLIFYUIBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline TokenProviders GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(TokenProviders value) { m_providerHasBeenSet = true; m_provider = value; }
    inline ExchangeCodeForTokenRequest& WithProvider(TokenProviders value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of the request.</p>
     */
    inline const ExchangeCodeForTokenRequestBody& GetRequest() const { return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    template<typename RequestT = ExchangeCodeForTokenRequestBody>
    void SetRequest(RequestT&& value) { m_requestHasBeenSet = true; m_request = std::forward<RequestT>(value); }
    template<typename RequestT = ExchangeCodeForTokenRequestBody>
    ExchangeCodeForTokenRequest& WithRequest(RequestT&& value) { SetRequest(std::forward<RequestT>(value)); return *this;}
    ///@}
  private:

    TokenProviders m_provider{TokenProviders::NOT_SET};
    bool m_providerHasBeenSet = false;

    ExchangeCodeForTokenRequestBody m_request;
    bool m_requestHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
