/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AmazonQPropertiesInput.h>
#include <aws/datazone/model/AthenaPropertiesInput.h>
#include <aws/datazone/model/GluePropertiesInput.h>
#include <aws/datazone/model/HyperPodPropertiesInput.h>
#include <aws/datazone/model/IamPropertiesInput.h>
#include <aws/datazone/model/MlflowPropertiesInput.h>
#include <aws/datazone/model/RedshiftPropertiesInput.h>
#include <aws/datazone/model/S3PropertiesInput.h>
#include <aws/datazone/model/SparkEmrPropertiesInput.h>
#include <aws/datazone/model/SparkGluePropertiesInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The properties of a connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectionPropertiesInput">AWS
 * API Reference</a></p>
 */
class ConnectionPropertiesInput {
 public:
  AWS_DATAZONE_API ConnectionPropertiesInput() = default;
  AWS_DATAZONE_API ConnectionPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ConnectionPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Q properties of the connection.</p>
   */
  inline const AmazonQPropertiesInput& GetAmazonQProperties() const { return m_amazonQProperties; }
  inline bool AmazonQPropertiesHasBeenSet() const { return m_amazonQPropertiesHasBeenSet; }
  template <typename AmazonQPropertiesT = AmazonQPropertiesInput>
  void SetAmazonQProperties(AmazonQPropertiesT&& value) {
    m_amazonQPropertiesHasBeenSet = true;
    m_amazonQProperties = std::forward<AmazonQPropertiesT>(value);
  }
  template <typename AmazonQPropertiesT = AmazonQPropertiesInput>
  ConnectionPropertiesInput& WithAmazonQProperties(AmazonQPropertiesT&& value) {
    SetAmazonQProperties(std::forward<AmazonQPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Athena properties of a connection.</p>
   */
  inline const AthenaPropertiesInput& GetAthenaProperties() const { return m_athenaProperties; }
  inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
  template <typename AthenaPropertiesT = AthenaPropertiesInput>
  void SetAthenaProperties(AthenaPropertiesT&& value) {
    m_athenaPropertiesHasBeenSet = true;
    m_athenaProperties = std::forward<AthenaPropertiesT>(value);
  }
  template <typename AthenaPropertiesT = AthenaPropertiesInput>
  ConnectionPropertiesInput& WithAthenaProperties(AthenaPropertiesT&& value) {
    SetAthenaProperties(std::forward<AthenaPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Glue properties of a connection.</p>
   */
  inline const GluePropertiesInput& GetGlueProperties() const { return m_glueProperties; }
  inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
  template <typename GluePropertiesT = GluePropertiesInput>
  void SetGlueProperties(GluePropertiesT&& value) {
    m_gluePropertiesHasBeenSet = true;
    m_glueProperties = std::forward<GluePropertiesT>(value);
  }
  template <typename GluePropertiesT = GluePropertiesInput>
  ConnectionPropertiesInput& WithGlueProperties(GluePropertiesT&& value) {
    SetGlueProperties(std::forward<GluePropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hyper pod properties of a connection.</p>
   */
  inline const HyperPodPropertiesInput& GetHyperPodProperties() const { return m_hyperPodProperties; }
  inline bool HyperPodPropertiesHasBeenSet() const { return m_hyperPodPropertiesHasBeenSet; }
  template <typename HyperPodPropertiesT = HyperPodPropertiesInput>
  void SetHyperPodProperties(HyperPodPropertiesT&& value) {
    m_hyperPodPropertiesHasBeenSet = true;
    m_hyperPodProperties = std::forward<HyperPodPropertiesT>(value);
  }
  template <typename HyperPodPropertiesT = HyperPodPropertiesInput>
  ConnectionPropertiesInput& WithHyperPodProperties(HyperPodPropertiesT&& value) {
    SetHyperPodProperties(std::forward<HyperPodPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM properties of a connection.</p>
   */
  inline const IamPropertiesInput& GetIamProperties() const { return m_iamProperties; }
  inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
  template <typename IamPropertiesT = IamPropertiesInput>
  void SetIamProperties(IamPropertiesT&& value) {
    m_iamPropertiesHasBeenSet = true;
    m_iamProperties = std::forward<IamPropertiesT>(value);
  }
  template <typename IamPropertiesT = IamPropertiesInput>
  ConnectionPropertiesInput& WithIamProperties(IamPropertiesT&& value) {
    SetIamProperties(std::forward<IamPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MLflow properties of a connection.</p>
   */
  inline const MlflowPropertiesInput& GetMlflowProperties() const { return m_mlflowProperties; }
  inline bool MlflowPropertiesHasBeenSet() const { return m_mlflowPropertiesHasBeenSet; }
  template <typename MlflowPropertiesT = MlflowPropertiesInput>
  void SetMlflowProperties(MlflowPropertiesT&& value) {
    m_mlflowPropertiesHasBeenSet = true;
    m_mlflowProperties = std::forward<MlflowPropertiesT>(value);
  }
  template <typename MlflowPropertiesT = MlflowPropertiesInput>
  ConnectionPropertiesInput& WithMlflowProperties(MlflowPropertiesT&& value) {
    SetMlflowProperties(std::forward<MlflowPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Redshift properties of a connection.</p>
   */
  inline const RedshiftPropertiesInput& GetRedshiftProperties() const { return m_redshiftProperties; }
  inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
  template <typename RedshiftPropertiesT = RedshiftPropertiesInput>
  void SetRedshiftProperties(RedshiftPropertiesT&& value) {
    m_redshiftPropertiesHasBeenSet = true;
    m_redshiftProperties = std::forward<RedshiftPropertiesT>(value);
  }
  template <typename RedshiftPropertiesT = RedshiftPropertiesInput>
  ConnectionPropertiesInput& WithRedshiftProperties(RedshiftPropertiesT&& value) {
    SetRedshiftProperties(std::forward<RedshiftPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 properties of a connection.</p>
   */
  inline const S3PropertiesInput& GetS3Properties() const { return m_s3Properties; }
  inline bool S3PropertiesHasBeenSet() const { return m_s3PropertiesHasBeenSet; }
  template <typename S3PropertiesT = S3PropertiesInput>
  void SetS3Properties(S3PropertiesT&& value) {
    m_s3PropertiesHasBeenSet = true;
    m_s3Properties = std::forward<S3PropertiesT>(value);
  }
  template <typename S3PropertiesT = S3PropertiesInput>
  ConnectionPropertiesInput& WithS3Properties(S3PropertiesT&& value) {
    SetS3Properties(std::forward<S3PropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Spark EMR properties of a connection.</p>
   */
  inline const SparkEmrPropertiesInput& GetSparkEmrProperties() const { return m_sparkEmrProperties; }
  inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
  template <typename SparkEmrPropertiesT = SparkEmrPropertiesInput>
  void SetSparkEmrProperties(SparkEmrPropertiesT&& value) {
    m_sparkEmrPropertiesHasBeenSet = true;
    m_sparkEmrProperties = std::forward<SparkEmrPropertiesT>(value);
  }
  template <typename SparkEmrPropertiesT = SparkEmrPropertiesInput>
  ConnectionPropertiesInput& WithSparkEmrProperties(SparkEmrPropertiesT&& value) {
    SetSparkEmrProperties(std::forward<SparkEmrPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Spark Amazon Web Services Glue properties of a connection.</p>
   */
  inline const SparkGluePropertiesInput& GetSparkGlueProperties() const { return m_sparkGlueProperties; }
  inline bool SparkGluePropertiesHasBeenSet() const { return m_sparkGluePropertiesHasBeenSet; }
  template <typename SparkGluePropertiesT = SparkGluePropertiesInput>
  void SetSparkGlueProperties(SparkGluePropertiesT&& value) {
    m_sparkGluePropertiesHasBeenSet = true;
    m_sparkGlueProperties = std::forward<SparkGluePropertiesT>(value);
  }
  template <typename SparkGluePropertiesT = SparkGluePropertiesInput>
  ConnectionPropertiesInput& WithSparkGlueProperties(SparkGluePropertiesT&& value) {
    SetSparkGlueProperties(std::forward<SparkGluePropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  AmazonQPropertiesInput m_amazonQProperties;

  AthenaPropertiesInput m_athenaProperties;

  GluePropertiesInput m_glueProperties;

  HyperPodPropertiesInput m_hyperPodProperties;

  IamPropertiesInput m_iamProperties;

  MlflowPropertiesInput m_mlflowProperties;

  RedshiftPropertiesInput m_redshiftProperties;

  S3PropertiesInput m_s3Properties;

  SparkEmrPropertiesInput m_sparkEmrProperties;

  SparkGluePropertiesInput m_sparkGlueProperties;
  bool m_amazonQPropertiesHasBeenSet = false;
  bool m_athenaPropertiesHasBeenSet = false;
  bool m_gluePropertiesHasBeenSet = false;
  bool m_hyperPodPropertiesHasBeenSet = false;
  bool m_iamPropertiesHasBeenSet = false;
  bool m_mlflowPropertiesHasBeenSet = false;
  bool m_redshiftPropertiesHasBeenSet = false;
  bool m_s3PropertiesHasBeenSet = false;
  bool m_sparkEmrPropertiesHasBeenSet = false;
  bool m_sparkGluePropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
