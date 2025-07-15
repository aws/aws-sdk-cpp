/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AthenaPropertiesOutput.h>
#include <aws/datazone/model/GluePropertiesOutput.h>
#include <aws/datazone/model/HyperPodPropertiesOutput.h>
#include <aws/datazone/model/IamPropertiesOutput.h>
#include <aws/datazone/model/RedshiftPropertiesOutput.h>
#include <aws/datazone/model/S3PropertiesOutput.h>
#include <aws/datazone/model/SparkEmrPropertiesOutput.h>
#include <aws/datazone/model/SparkGluePropertiesOutput.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectionPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class ConnectionPropertiesOutput
  {
  public:
    AWS_DATAZONE_API ConnectionPropertiesOutput() = default;
    AWS_DATAZONE_API ConnectionPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of a connection.</p>
     */
    inline const AthenaPropertiesOutput& GetAthenaProperties() const { return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    template<typename AthenaPropertiesT = AthenaPropertiesOutput>
    void SetAthenaProperties(AthenaPropertiesT&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::forward<AthenaPropertiesT>(value); }
    template<typename AthenaPropertiesT = AthenaPropertiesOutput>
    ConnectionPropertiesOutput& WithAthenaProperties(AthenaPropertiesT&& value) { SetAthenaProperties(std::forward<AthenaPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue properties of a connection.</p>
     */
    inline const GluePropertiesOutput& GetGlueProperties() const { return m_glueProperties; }
    inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
    template<typename GluePropertiesT = GluePropertiesOutput>
    void SetGlueProperties(GluePropertiesT&& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = std::forward<GluePropertiesT>(value); }
    template<typename GluePropertiesT = GluePropertiesOutput>
    ConnectionPropertiesOutput& WithGlueProperties(GluePropertiesT&& value) { SetGlueProperties(std::forward<GluePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyper pod properties of a connection.</p>
     */
    inline const HyperPodPropertiesOutput& GetHyperPodProperties() const { return m_hyperPodProperties; }
    inline bool HyperPodPropertiesHasBeenSet() const { return m_hyperPodPropertiesHasBeenSet; }
    template<typename HyperPodPropertiesT = HyperPodPropertiesOutput>
    void SetHyperPodProperties(HyperPodPropertiesT&& value) { m_hyperPodPropertiesHasBeenSet = true; m_hyperPodProperties = std::forward<HyperPodPropertiesT>(value); }
    template<typename HyperPodPropertiesT = HyperPodPropertiesOutput>
    ConnectionPropertiesOutput& WithHyperPodProperties(HyperPodPropertiesT&& value) { SetHyperPodProperties(std::forward<HyperPodPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM properties of a connection.</p>
     */
    inline const IamPropertiesOutput& GetIamProperties() const { return m_iamProperties; }
    inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
    template<typename IamPropertiesT = IamPropertiesOutput>
    void SetIamProperties(IamPropertiesT&& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = std::forward<IamPropertiesT>(value); }
    template<typename IamPropertiesT = IamPropertiesOutput>
    ConnectionPropertiesOutput& WithIamProperties(IamPropertiesT&& value) { SetIamProperties(std::forward<IamPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift properties of a connection.</p>
     */
    inline const RedshiftPropertiesOutput& GetRedshiftProperties() const { return m_redshiftProperties; }
    inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
    template<typename RedshiftPropertiesT = RedshiftPropertiesOutput>
    void SetRedshiftProperties(RedshiftPropertiesT&& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = std::forward<RedshiftPropertiesT>(value); }
    template<typename RedshiftPropertiesT = RedshiftPropertiesOutput>
    ConnectionPropertiesOutput& WithRedshiftProperties(RedshiftPropertiesT&& value) { SetRedshiftProperties(std::forward<RedshiftPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 properties of a connection.</p>
     */
    inline const S3PropertiesOutput& GetS3Properties() const { return m_s3Properties; }
    inline bool S3PropertiesHasBeenSet() const { return m_s3PropertiesHasBeenSet; }
    template<typename S3PropertiesT = S3PropertiesOutput>
    void SetS3Properties(S3PropertiesT&& value) { m_s3PropertiesHasBeenSet = true; m_s3Properties = std::forward<S3PropertiesT>(value); }
    template<typename S3PropertiesT = S3PropertiesOutput>
    ConnectionPropertiesOutput& WithS3Properties(S3PropertiesT&& value) { SetS3Properties(std::forward<S3PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark EMR properties of a connection.</p>
     */
    inline const SparkEmrPropertiesOutput& GetSparkEmrProperties() const { return m_sparkEmrProperties; }
    inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
    template<typename SparkEmrPropertiesT = SparkEmrPropertiesOutput>
    void SetSparkEmrProperties(SparkEmrPropertiesT&& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = std::forward<SparkEmrPropertiesT>(value); }
    template<typename SparkEmrPropertiesT = SparkEmrPropertiesOutput>
    ConnectionPropertiesOutput& WithSparkEmrProperties(SparkEmrPropertiesT&& value) { SetSparkEmrProperties(std::forward<SparkEmrPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark Amazon Web Services Glue properties of a connection.</p>
     */
    inline const SparkGluePropertiesOutput& GetSparkGlueProperties() const { return m_sparkGlueProperties; }
    inline bool SparkGluePropertiesHasBeenSet() const { return m_sparkGluePropertiesHasBeenSet; }
    template<typename SparkGluePropertiesT = SparkGluePropertiesOutput>
    void SetSparkGlueProperties(SparkGluePropertiesT&& value) { m_sparkGluePropertiesHasBeenSet = true; m_sparkGlueProperties = std::forward<SparkGluePropertiesT>(value); }
    template<typename SparkGluePropertiesT = SparkGluePropertiesOutput>
    ConnectionPropertiesOutput& WithSparkGlueProperties(SparkGluePropertiesT&& value) { SetSparkGlueProperties(std::forward<SparkGluePropertiesT>(value)); return *this;}
    ///@}
  private:

    AthenaPropertiesOutput m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    GluePropertiesOutput m_glueProperties;
    bool m_gluePropertiesHasBeenSet = false;

    HyperPodPropertiesOutput m_hyperPodProperties;
    bool m_hyperPodPropertiesHasBeenSet = false;

    IamPropertiesOutput m_iamProperties;
    bool m_iamPropertiesHasBeenSet = false;

    RedshiftPropertiesOutput m_redshiftProperties;
    bool m_redshiftPropertiesHasBeenSet = false;

    S3PropertiesOutput m_s3Properties;
    bool m_s3PropertiesHasBeenSet = false;

    SparkEmrPropertiesOutput m_sparkEmrProperties;
    bool m_sparkEmrPropertiesHasBeenSet = false;

    SparkGluePropertiesOutput m_sparkGlueProperties;
    bool m_sparkGluePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
