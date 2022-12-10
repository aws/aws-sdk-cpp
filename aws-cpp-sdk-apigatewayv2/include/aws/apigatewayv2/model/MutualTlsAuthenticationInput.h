/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  class MutualTlsAuthenticationInput
  {
  public:
    AWS_APIGATEWAYV2_API MutualTlsAuthenticationInput();
    AWS_APIGATEWAYV2_API MutualTlsAuthenticationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API MutualTlsAuthenticationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline const Aws::String& GetTruststoreUri() const{ return m_truststoreUri; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline bool TruststoreUriHasBeenSet() const { return m_truststoreUriHasBeenSet; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline void SetTruststoreUri(const Aws::String& value) { m_truststoreUriHasBeenSet = true; m_truststoreUri = value; }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline void SetTruststoreUri(Aws::String&& value) { m_truststoreUriHasBeenSet = true; m_truststoreUri = std::move(value); }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline void SetTruststoreUri(const char* value) { m_truststoreUriHasBeenSet = true; m_truststoreUri.assign(value); }

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline MutualTlsAuthenticationInput& WithTruststoreUri(const Aws::String& value) { SetTruststoreUri(value); return *this;}

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline MutualTlsAuthenticationInput& WithTruststoreUri(Aws::String&& value) { SetTruststoreUri(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 URL that specifies the truststore for mutual TLS authentication,
     * for example,
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>key-name</replaceable>.
     * The truststore can contain certificates from public or private certificate
     * authorities. To update the truststore, upload a new version to S3, and then
     * update your custom domain name to use the new version. To update the truststore,
     * you must have permissions to access the S3 object.</p>
     */
    inline MutualTlsAuthenticationInput& WithTruststoreUri(const char* value) { SetTruststoreUri(value); return *this;}


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
    inline MutualTlsAuthenticationInput& WithTruststoreVersion(const Aws::String& value) { SetTruststoreVersion(value); return *this;}

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline MutualTlsAuthenticationInput& WithTruststoreVersion(Aws::String&& value) { SetTruststoreVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the S3 object that contains your truststore. To specify a
     * version, you must have versioning enabled for the S3 bucket.</p>
     */
    inline MutualTlsAuthenticationInput& WithTruststoreVersion(const char* value) { SetTruststoreVersion(value); return *this;}

  private:

    Aws::String m_truststoreUri;
    bool m_truststoreUriHasBeenSet = false;

    Aws::String m_truststoreVersion;
    bool m_truststoreVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
