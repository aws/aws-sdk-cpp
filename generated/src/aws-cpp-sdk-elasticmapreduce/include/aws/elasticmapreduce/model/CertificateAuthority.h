/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>Describes the certificate authority used to establish an mTLS connection to
 * the Spark Connect server when connecting directly over VPC
 * peering.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CertificateAuthority">AWS
 * API Reference</a></p>
 */
class CertificateAuthority {
 public:
  AWS_EMR_API CertificateAuthority() = default;
  AWS_EMR_API CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the certificate authority in Amazon Web
   * Services Private CA that issued the Spark Connect server certificate.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  CertificateAuthority& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PEM-encoded root CA certificate data. Provide this certificate to your
   * client's trust store when connecting directly to the Spark Connect server over
   * VPC peering.</p>
   */
  inline const Aws::String& GetCertificateData() const { return m_certificateData; }
  inline bool CertificateDataHasBeenSet() const { return m_certificateDataHasBeenSet; }
  template <typename CertificateDataT = Aws::String>
  void SetCertificateData(CertificateDataT&& value) {
    m_certificateDataHasBeenSet = true;
    m_certificateData = std::forward<CertificateDataT>(value);
  }
  template <typename CertificateDataT = Aws::String>
  CertificateAuthority& WithCertificateData(CertificateDataT&& value) {
    SetCertificateData(std::forward<CertificateDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  Aws::String m_certificateData;
  bool m_certificateArnHasBeenSet = false;
  bool m_certificateDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
