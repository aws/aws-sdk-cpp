﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents an AWS Certicate Manager (ACM)
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTlsAcmCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListenerTlsAcmCertificate
  {
  public:
    ListenerTlsAcmCertificate();
    ListenerTlsAcmCertificate(Aws::Utils::Json::JsonView jsonValue);
    ListenerTlsAcmCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline ListenerTlsAcmCertificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline ListenerTlsAcmCertificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
     * Layer Security (TLS)</a>.</p>
     */
    inline ListenerTlsAcmCertificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
