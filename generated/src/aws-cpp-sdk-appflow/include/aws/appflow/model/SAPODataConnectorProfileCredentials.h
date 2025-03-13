/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/BasicAuthCredentials.h>
#include <aws/appflow/model/OAuthCredentials.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile credentials required when using SAPOData.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class SAPODataConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials() = default;
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline const BasicAuthCredentials& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = BasicAuthCredentials>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = BasicAuthCredentials>
    SAPODataConnectorProfileCredentials& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline const OAuthCredentials& GetOAuthCredentials() const { return m_oAuthCredentials; }
    inline bool OAuthCredentialsHasBeenSet() const { return m_oAuthCredentialsHasBeenSet; }
    template<typename OAuthCredentialsT = OAuthCredentials>
    void SetOAuthCredentials(OAuthCredentialsT&& value) { m_oAuthCredentialsHasBeenSet = true; m_oAuthCredentials = std::forward<OAuthCredentialsT>(value); }
    template<typename OAuthCredentialsT = OAuthCredentials>
    SAPODataConnectorProfileCredentials& WithOAuthCredentials(OAuthCredentialsT&& value) { SetOAuthCredentials(std::forward<OAuthCredentialsT>(value)); return *this;}
    ///@}
  private:

    BasicAuthCredentials m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    OAuthCredentials m_oAuthCredentials;
    bool m_oAuthCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
