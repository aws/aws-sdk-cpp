/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CACertificateDescription.h>
#include <aws/iot/model/RegistrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_IOT_API DescribeCACertificateResult() = default;
    AWS_IOT_API DescribeCACertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeCACertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CA certificate description.</p>
     */
    inline const CACertificateDescription& GetCertificateDescription() const { return m_certificateDescription; }
    template<typename CertificateDescriptionT = CACertificateDescription>
    void SetCertificateDescription(CertificateDescriptionT&& value) { m_certificateDescriptionHasBeenSet = true; m_certificateDescription = std::forward<CertificateDescriptionT>(value); }
    template<typename CertificateDescriptionT = CACertificateDescription>
    DescribeCACertificateResult& WithCertificateDescription(CertificateDescriptionT&& value) { SetCertificateDescription(std::forward<CertificateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the registration configuration.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const { return m_registrationConfig; }
    template<typename RegistrationConfigT = RegistrationConfig>
    void SetRegistrationConfig(RegistrationConfigT&& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = std::forward<RegistrationConfigT>(value); }
    template<typename RegistrationConfigT = RegistrationConfig>
    DescribeCACertificateResult& WithRegistrationConfig(RegistrationConfigT&& value) { SetRegistrationConfig(std::forward<RegistrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCACertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CACertificateDescription m_certificateDescription;
    bool m_certificateDescriptionHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
