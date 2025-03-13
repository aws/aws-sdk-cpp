/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The mutual TLS authentication configuration for a custom domain name. If
   * specified, API Gateway performs two-way authentication between the client and
   * the server. Clients must present a trusted certificate to access your
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MutualTlsAuthenticationInput">AWS
   * API Reference</a></p>
   */
  class MutualTlsAuthenticationInput
  {
  public:
    AWS_APIGATEWAY_API MutualTlsAuthenticationInput() = default;
    AWS_APIGATEWAY_API MutualTlsAuthenticationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MutualTlsAuthenticationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline const Aws::String& GetTruststoreUri() const { return m_truststoreUri; }
    inline bool TruststoreUriHasBeenSet() const { return m_truststoreUriHasBeenSet; }
    template<typename TruststoreUriT = Aws::String>
    void SetTruststoreUri(TruststoreUriT&& value) { m_truststoreUriHasBeenSet = true; m_truststoreUri = std::forward<TruststoreUriT>(value); }
    template<typename TruststoreUriT = Aws::String>
    MutualTlsAuthenticationInput& WithTruststoreUri(TruststoreUriT&& value) { SetTruststoreUri(std::forward<TruststoreUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket</p>
     */
    inline const Aws::String& GetTruststoreVersion() const { return m_truststoreVersion; }
    inline bool TruststoreVersionHasBeenSet() const { return m_truststoreVersionHasBeenSet; }
    template<typename TruststoreVersionT = Aws::String>
    void SetTruststoreVersion(TruststoreVersionT&& value) { m_truststoreVersionHasBeenSet = true; m_truststoreVersion = std::forward<TruststoreVersionT>(value); }
    template<typename TruststoreVersionT = Aws::String>
    MutualTlsAuthenticationInput& WithTruststoreVersion(TruststoreVersionT&& value) { SetTruststoreVersion(std::forward<TruststoreVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_truststoreUri;
    bool m_truststoreUriHasBeenSet = false;

    Aws::String m_truststoreVersion;
    bool m_truststoreVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
