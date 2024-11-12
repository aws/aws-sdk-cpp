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
   * <p>Determines whether a TLS/SSL certificate is generated for a fleet. This
   * feature must be enabled when creating the fleet. All instances in a fleet share
   * the same certificate. The certificate can be retrieved by calling the <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk.html">Amazon
   * GameLift Server SDK</a> operation <code>GetInstanceCertificate</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CertificateConfiguration">AWS
   * API Reference</a></p>
   */
  class CertificateConfiguration
  {
  public:
    AWS_GAMELIFT_API CertificateConfiguration();
    AWS_GAMELIFT_API CertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API CertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether a TLS/SSL certificate is generated for a fleet. </p>
     * <p>Valid values include: </p> <ul> <li> <p> <b>GENERATED</b> -- Generate a
     * TLS/SSL certificate for this fleet.</p> </li> <li> <p> <b>DISABLED</b> --
     * (default) Do not generate a TLS/SSL certificate for this fleet. </p> </li> </ul>
     */
    inline const CertificateType& GetCertificateType() const{ return m_certificateType; }
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }
    inline void SetCertificateType(const CertificateType& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }
    inline void SetCertificateType(CertificateType&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::move(value); }
    inline CertificateConfiguration& WithCertificateType(const CertificateType& value) { SetCertificateType(value); return *this;}
    inline CertificateConfiguration& WithCertificateType(CertificateType&& value) { SetCertificateType(std::move(value)); return *this;}
    ///@}
  private:

    CertificateType m_certificateType;
    bool m_certificateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
