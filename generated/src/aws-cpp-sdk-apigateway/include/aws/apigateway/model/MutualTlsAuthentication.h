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
    AWS_APIGATEWAY_API MutualTlsAuthentication();
    AWS_APIGATEWAY_API MutualTlsAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MutualTlsAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline const Aws::String& GetTruststoreUri() const{ return m_truststoreUri; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline bool TruststoreUriHasBeenSet() const { return m_truststoreUriHasBeenSet; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline void SetTruststoreUri(const Aws::String& value) { m_truststoreUriHasBeenSet = true; m_truststoreUri = value; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline void SetTruststoreUri(Aws::String&& value) { m_truststoreUriHasBeenSet = true; m_truststoreUri = std::move(value); }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline void SetTruststoreUri(const char* value) { m_truststoreUriHasBeenSet = true; m_truststoreUri.assign(value); }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreUri(const Aws::String& value) { SetTruststoreUri(value); return *this;}

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreUri(Aws::String&& value) { SetTruststoreUri(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example <code>s3://bucket-name/key-name</code>. The truststore can contain
     * certificates from public or private certificate authorities. To update the
     * truststore, upload a new version to S3, and then update your custom domain name
     * to use the new version. To update the truststore, you must have permissions to
     * access the S3 object.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreUri(const char* value) { SetTruststoreUri(value); return *this;}


    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline const Aws::String& GetTruststoreVersion() const{ return m_truststoreVersion; }

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline bool TruststoreVersionHasBeenSet() const { return m_truststoreVersionHasBeenSet; }

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline void SetTruststoreVersion(const Aws::String& value) { m_truststoreVersionHasBeenSet = true; m_truststoreVersion = value; }

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline void SetTruststoreVersion(Aws::String&& value) { m_truststoreVersionHasBeenSet = true; m_truststoreVersion = std::move(value); }

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline void SetTruststoreVersion(const char* value) { m_truststoreVersionHasBeenSet = true; m_truststoreVersion.assign(value); }

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreVersion(const Aws::String& value) { SetTruststoreVersion(value); return *this;}

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreVersion(Aws::String&& value) { SetTruststoreVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreVersion(const char* value) { SetTruststoreVersion(value); return *this;}


    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTruststoreWarnings() const{ return m_truststoreWarnings; }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline bool TruststoreWarningsHasBeenSet() const { return m_truststoreWarningsHasBeenSet; }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline void SetTruststoreWarnings(const Aws::Vector<Aws::String>& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings = value; }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline void SetTruststoreWarnings(Aws::Vector<Aws::String>&& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings = std::move(value); }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreWarnings(const Aws::Vector<Aws::String>& value) { SetTruststoreWarnings(value); return *this;}

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline MutualTlsAuthentication& WithTruststoreWarnings(Aws::Vector<Aws::String>&& value) { SetTruststoreWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline MutualTlsAuthentication& AddTruststoreWarnings(const Aws::String& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings.push_back(value); return *this; }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline MutualTlsAuthentication& AddTruststoreWarnings(Aws::String&& value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of warnings that API Gateway returns while processing your truststore.
     * Invalid certificates produce warnings. Mutual TLS is still enabled, but some
     * clients might not be able to access your API. To resolve warnings, upload a new
     * truststore to S3, and then update you domain name to use the new version.</p>
     */
    inline MutualTlsAuthentication& AddTruststoreWarnings(const char* value) { m_truststoreWarningsHasBeenSet = true; m_truststoreWarnings.push_back(value); return *this; }

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
