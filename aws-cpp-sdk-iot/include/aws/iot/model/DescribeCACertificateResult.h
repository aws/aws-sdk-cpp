/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CACertificateDescription.h>
#include <aws/iot/model/RegistrationConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeCACertificate operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificateResponse">AWS
   * API Reference</a></p>
   */
  class DescribeCACertificateResult
  {
  public:
    AWS_IOT_API DescribeCACertificateResult();
    AWS_IOT_API DescribeCACertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeCACertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The CA certificate description.</p>
     */
    inline const CACertificateDescription& GetCertificateDescription() const{ return m_certificateDescription; }

    /**
     * <p>The CA certificate description.</p>
     */
    inline void SetCertificateDescription(const CACertificateDescription& value) { m_certificateDescription = value; }

    /**
     * <p>The CA certificate description.</p>
     */
    inline void SetCertificateDescription(CACertificateDescription&& value) { m_certificateDescription = std::move(value); }

    /**
     * <p>The CA certificate description.</p>
     */
    inline DescribeCACertificateResult& WithCertificateDescription(const CACertificateDescription& value) { SetCertificateDescription(value); return *this;}

    /**
     * <p>The CA certificate description.</p>
     */
    inline DescribeCACertificateResult& WithCertificateDescription(CACertificateDescription&& value) { SetCertificateDescription(std::move(value)); return *this;}


    /**
     * <p>Information about the registration configuration.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const{ return m_registrationConfig; }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline void SetRegistrationConfig(const RegistrationConfig& value) { m_registrationConfig = value; }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline void SetRegistrationConfig(RegistrationConfig&& value) { m_registrationConfig = std::move(value); }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline DescribeCACertificateResult& WithRegistrationConfig(const RegistrationConfig& value) { SetRegistrationConfig(value); return *this;}

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline DescribeCACertificateResult& WithRegistrationConfig(RegistrationConfig&& value) { SetRegistrationConfig(std::move(value)); return *this;}

  private:

    CACertificateDescription m_certificateDescription;

    RegistrationConfig m_registrationConfig;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
