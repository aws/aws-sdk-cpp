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
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials();
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline const BasicAuthCredentials& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline void SetBasicAuthCredentials(const BasicAuthCredentials& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline void SetBasicAuthCredentials(BasicAuthCredentials&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline SAPODataConnectorProfileCredentials& WithBasicAuthCredentials(const BasicAuthCredentials& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> The SAPOData basic authentication credentials. </p>
     */
    inline SAPODataConnectorProfileCredentials& WithBasicAuthCredentials(BasicAuthCredentials&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}


    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline const OAuthCredentials& GetOAuthCredentials() const{ return m_oAuthCredentials; }

    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline bool OAuthCredentialsHasBeenSet() const { return m_oAuthCredentialsHasBeenSet; }

    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline void SetOAuthCredentials(const OAuthCredentials& value) { m_oAuthCredentialsHasBeenSet = true; m_oAuthCredentials = value; }

    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline void SetOAuthCredentials(OAuthCredentials&& value) { m_oAuthCredentialsHasBeenSet = true; m_oAuthCredentials = std::move(value); }

    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline SAPODataConnectorProfileCredentials& WithOAuthCredentials(const OAuthCredentials& value) { SetOAuthCredentials(value); return *this;}

    /**
     * <p> The SAPOData OAuth type authentication credentials. </p>
     */
    inline SAPODataConnectorProfileCredentials& WithOAuthCredentials(OAuthCredentials&& value) { SetOAuthCredentials(std::move(value)); return *this;}

  private:

    BasicAuthCredentials m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    OAuthCredentials m_oAuthCredentials;
    bool m_oAuthCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
