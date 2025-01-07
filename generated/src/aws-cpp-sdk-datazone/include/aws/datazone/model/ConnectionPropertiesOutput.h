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
    AWS_DATAZONE_API ConnectionPropertiesOutput();
    AWS_DATAZONE_API ConnectionPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of a connection.</p>
     */
    inline const AthenaPropertiesOutput& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const AthenaPropertiesOutput& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(AthenaPropertiesOutput&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithAthenaProperties(const AthenaPropertiesOutput& value) { SetAthenaProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithAthenaProperties(AthenaPropertiesOutput&& value) { SetAthenaProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue properties of a connection.</p>
     */
    inline const GluePropertiesOutput& GetGlueProperties() const{ return m_glueProperties; }
    inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
    inline void SetGlueProperties(const GluePropertiesOutput& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = value; }
    inline void SetGlueProperties(GluePropertiesOutput&& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithGlueProperties(const GluePropertiesOutput& value) { SetGlueProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithGlueProperties(GluePropertiesOutput&& value) { SetGlueProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyper pod properties of a connection.</p>
     */
    inline const HyperPodPropertiesOutput& GetHyperPodProperties() const{ return m_hyperPodProperties; }
    inline bool HyperPodPropertiesHasBeenSet() const { return m_hyperPodPropertiesHasBeenSet; }
    inline void SetHyperPodProperties(const HyperPodPropertiesOutput& value) { m_hyperPodPropertiesHasBeenSet = true; m_hyperPodProperties = value; }
    inline void SetHyperPodProperties(HyperPodPropertiesOutput&& value) { m_hyperPodPropertiesHasBeenSet = true; m_hyperPodProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithHyperPodProperties(const HyperPodPropertiesOutput& value) { SetHyperPodProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithHyperPodProperties(HyperPodPropertiesOutput&& value) { SetHyperPodProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM properties of a connection.</p>
     */
    inline const IamPropertiesOutput& GetIamProperties() const{ return m_iamProperties; }
    inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
    inline void SetIamProperties(const IamPropertiesOutput& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = value; }
    inline void SetIamProperties(IamPropertiesOutput&& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithIamProperties(const IamPropertiesOutput& value) { SetIamProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithIamProperties(IamPropertiesOutput&& value) { SetIamProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift properties of a connection.</p>
     */
    inline const RedshiftPropertiesOutput& GetRedshiftProperties() const{ return m_redshiftProperties; }
    inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
    inline void SetRedshiftProperties(const RedshiftPropertiesOutput& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = value; }
    inline void SetRedshiftProperties(RedshiftPropertiesOutput&& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithRedshiftProperties(const RedshiftPropertiesOutput& value) { SetRedshiftProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithRedshiftProperties(RedshiftPropertiesOutput&& value) { SetRedshiftProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark EMR properties of a connection.</p>
     */
    inline const SparkEmrPropertiesOutput& GetSparkEmrProperties() const{ return m_sparkEmrProperties; }
    inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
    inline void SetSparkEmrProperties(const SparkEmrPropertiesOutput& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = value; }
    inline void SetSparkEmrProperties(SparkEmrPropertiesOutput&& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithSparkEmrProperties(const SparkEmrPropertiesOutput& value) { SetSparkEmrProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithSparkEmrProperties(SparkEmrPropertiesOutput&& value) { SetSparkEmrProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark Amazon Web Services Glue properties of a connection.</p>
     */
    inline const SparkGluePropertiesOutput& GetSparkGlueProperties() const{ return m_sparkGlueProperties; }
    inline bool SparkGluePropertiesHasBeenSet() const { return m_sparkGluePropertiesHasBeenSet; }
    inline void SetSparkGlueProperties(const SparkGluePropertiesOutput& value) { m_sparkGluePropertiesHasBeenSet = true; m_sparkGlueProperties = value; }
    inline void SetSparkGlueProperties(SparkGluePropertiesOutput&& value) { m_sparkGluePropertiesHasBeenSet = true; m_sparkGlueProperties = std::move(value); }
    inline ConnectionPropertiesOutput& WithSparkGlueProperties(const SparkGluePropertiesOutput& value) { SetSparkGlueProperties(value); return *this;}
    inline ConnectionPropertiesOutput& WithSparkGlueProperties(SparkGluePropertiesOutput&& value) { SetSparkGlueProperties(std::move(value)); return *this;}
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

    SparkEmrPropertiesOutput m_sparkEmrProperties;
    bool m_sparkEmrPropertiesHasBeenSet = false;

    SparkGluePropertiesOutput m_sparkGlueProperties;
    bool m_sparkGluePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
