/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/CertificateType.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Information about the use of a TLS/SSL certificate for a fleet. TLS
   * certificate generation is enabled at the fleet level, with one certificate
   * generated for the fleet. When this feature is enabled, the certificate can be
   * retrieved using the <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk.html">GameLift
   * Server SDK</a> call <code>GetInstanceCertificate</code>. All instances in a
   * fleet share the same certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CertificateConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CertificateConfiguration
  {
  public:
    CertificateConfiguration();
    CertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline const CertificateType& GetCertificateType() const{ return m_certificateType; }

    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }

    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline void SetCertificateType(const CertificateType& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline void SetCertificateType(CertificateType&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::move(value); }

    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline CertificateConfiguration& WithCertificateType(const CertificateType& value) { SetCertificateType(value); return *this;}

    /**
     * <p>Indicates whether a TLS/SSL certificate was generated for a fleet. </p> <p>
     * </p> <p> </p>
     */
    inline CertificateConfiguration& WithCertificateType(CertificateType&& value) { SetCertificateType(std::move(value)); return *this;}

  private:

    CertificateType m_certificateType;
    bool m_certificateTypeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
