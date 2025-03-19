/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The entity representing certificate data generated for managed
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_EMRCONTAINERS_API Certificate() = default;
    AWS_EMRCONTAINERS_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    Certificate& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline const Aws::String& GetCertificateData() const { return m_certificateData; }
    inline bool CertificateDataHasBeenSet() const { return m_certificateDataHasBeenSet; }
    template<typename CertificateDataT = Aws::String>
    void SetCertificateData(CertificateDataT&& value) { m_certificateDataHasBeenSet = true; m_certificateData = std::forward<CertificateDataT>(value); }
    template<typename CertificateDataT = Aws::String>
    Certificate& WithCertificateData(CertificateDataT&& value) { SetCertificateData(std::forward<CertificateDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateData;
    bool m_certificateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
