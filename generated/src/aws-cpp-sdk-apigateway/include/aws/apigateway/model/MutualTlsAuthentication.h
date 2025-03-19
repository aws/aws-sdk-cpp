/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MutualTlsAuthentication">AWS
   * API Reference</a></p>
   */
  class MutualTlsAuthentication
  {
  public:
    AWS_APIGATEWAY_API MutualTlsAuthentication() = default;
    AWS_APIGATEWAY_API MutualTlsAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MutualTlsAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    MutualTlsAuthentication& WithTruststoreUri(TruststoreUriT&& value) { SetTruststoreUri(std::forward<TruststoreUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline const Aws::String& GetTruststoreVersion() const { return m_truststoreVersion; }
    inline bool TruststoreVersionHasBeenSet() const { return m_truststoreVersionHasBeenSet; }
    template<typename TruststoreVersionT = Aws::String>
    void SetTruststoreVersion(TruststoreVersionT&& value) { m_truststoreVersionHasBeenSet = true; m_truststoreVersion = std::forward<TruststoreVersionT>(value); }
    template<typename TruststoreVersionT = Aws::String>
    MutualTlsAuthentication& WithTruststoreVersion(TruststoreVersionT&& value) { SetTruststoreVersion(std::forward<TruststoreVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTruststoreWarnings() const { return m_truststoreWarnings; }
    inline bool TruststoreWarningsHasBeenSet() const { return m_truststoreWarningsHasBeenSet; }
    template<typename TruststoreWarningsT = Aws::Vector<Aws::String>>
    void SetTruststoreWarnings(TruststoreWarningsT&& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings = std::forward<TruststoreWarningsT>(value); }
    template<typename TruststoreWarningsT = Aws::Vector<Aws::String>>
    MutualTlsAuthentication& WithTruststoreWarnings(TruststoreWarningsT&& value) { SetTruststoreWarnings(std::forward<TruststoreWarningsT>(value)); return *this;}
    template<typename TruststoreWarningsT = Aws::String>
    MutualTlsAuthentication& AddTruststoreWarnings(TruststoreWarningsT&& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings.emplace_back(std::forward<TruststoreWarningsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_truststoreUri;
    bool m_truststoreUriHasBeenSet = false;

    Aws::String m_truststoreVersion;
    bool m_truststoreVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_truststoreWarnings;
    bool m_truststoreWarningsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
