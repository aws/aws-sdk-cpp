/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AthenaPropertiesInput.h>
#include <aws/datazone/model/GluePropertiesInput.h>
#include <aws/datazone/model/HyperPodPropertiesInput.h>
#include <aws/datazone/model/IamPropertiesInput.h>
#include <aws/datazone/model/RedshiftPropertiesInput.h>
#include <aws/datazone/model/SparkEmrPropertiesInput.h>
#include <aws/datazone/model/SparkGluePropertiesInput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectionPropertiesInput">AWS
   * API Reference</a></p>
   */
  class ConnectionPropertiesInput
  {
  public:
    AWS_DATAZONE_API ConnectionPropertiesInput();
    AWS_DATAZONE_API ConnectionPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of a connection.</p>
     */
    inline const AthenaPropertiesInput& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const AthenaPropertiesInput& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(AthenaPropertiesInput&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithAthenaProperties(const AthenaPropertiesInput& value) { SetAthenaProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithAthenaProperties(AthenaPropertiesInput&& value) { SetAthenaProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue properties of a connection.</p>
     */
    inline const GluePropertiesInput& GetGlueProperties() const{ return m_glueProperties; }
    inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
    inline void SetGlueProperties(const GluePropertiesInput& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = value; }
    inline void SetGlueProperties(GluePropertiesInput&& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithGlueProperties(const GluePropertiesInput& value) { SetGlueProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithGlueProperties(GluePropertiesInput&& value) { SetGlueProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyper pod properties of a connection.</p>
     */
    inline const HyperPodPropertiesInput& GetHyperPodProperties() const{ return m_hyperPodProperties; }
    inline bool HyperPodPropertiesHasBeenSet() const { return m_hyperPodPropertiesHasBeenSet; }
    inline void SetHyperPodProperties(const HyperPodPropertiesInput& value) { m_hyperPodPropertiesHasBeenSet = true; m_hyperPodProperties = value; }
    inline void SetHyperPodProperties(HyperPodPropertiesInput&& value) { m_hyperPodPropertiesHasBeenSet = true; m_hyperPodProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithHyperPodProperties(const HyperPodPropertiesInput& value) { SetHyperPodProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithHyperPodProperties(HyperPodPropertiesInput&& value) { SetHyperPodProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM properties of a connection.</p>
     */
    inline const IamPropertiesInput& GetIamProperties() const{ return m_iamProperties; }
    inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
    inline void SetIamProperties(const IamPropertiesInput& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = value; }
    inline void SetIamProperties(IamPropertiesInput&& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithIamProperties(const IamPropertiesInput& value) { SetIamProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithIamProperties(IamPropertiesInput&& value) { SetIamProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift properties of a connection.</p>
     */
    inline const RedshiftPropertiesInput& GetRedshiftProperties() const{ return m_redshiftProperties; }
    inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
    inline void SetRedshiftProperties(const RedshiftPropertiesInput& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = value; }
    inline void SetRedshiftProperties(RedshiftPropertiesInput&& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithRedshiftProperties(const RedshiftPropertiesInput& value) { SetRedshiftProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithRedshiftProperties(RedshiftPropertiesInput&& value) { SetRedshiftProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark EMR properties of a connection.</p>
     */
    inline const SparkEmrPropertiesInput& GetSparkEmrProperties() const{ return m_sparkEmrProperties; }
    inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
    inline void SetSparkEmrProperties(const SparkEmrPropertiesInput& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = value; }
    inline void SetSparkEmrProperties(SparkEmrPropertiesInput&& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithSparkEmrProperties(const SparkEmrPropertiesInput& value) { SetSparkEmrProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithSparkEmrProperties(SparkEmrPropertiesInput&& value) { SetSparkEmrProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark Amazon Web Services Glue properties of a connection.</p>
     */
    inline const SparkGluePropertiesInput& GetSparkGlueProperties() const{ return m_sparkGlueProperties; }
    inline bool SparkGluePropertiesHasBeenSet() const { return m_sparkGluePropertiesHasBeenSet; }
    inline void SetSparkGlueProperties(const SparkGluePropertiesInput& value) { m_sparkGluePropertiesHasBeenSet = true; m_sparkGlueProperties = value; }
    inline void SetSparkGlueProperties(SparkGluePropertiesInput&& value) { m_sparkGluePropertiesHasBeenSet = true; m_sparkGlueProperties = std::move(value); }
    inline ConnectionPropertiesInput& WithSparkGlueProperties(const SparkGluePropertiesInput& value) { SetSparkGlueProperties(value); return *this;}
    inline ConnectionPropertiesInput& WithSparkGlueProperties(SparkGluePropertiesInput&& value) { SetSparkGlueProperties(std::move(value)); return *this;}
    ///@}
  private:

    AthenaPropertiesInput m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    GluePropertiesInput m_glueProperties;
    bool m_gluePropertiesHasBeenSet = false;

    HyperPodPropertiesInput m_hyperPodProperties;
    bool m_hyperPodPropertiesHasBeenSet = false;

    IamPropertiesInput m_iamProperties;
    bool m_iamPropertiesHasBeenSet = false;

    RedshiftPropertiesInput m_redshiftProperties;
    bool m_redshiftPropertiesHasBeenSet = false;

    SparkEmrPropertiesInput m_sparkEmrProperties;
    bool m_sparkEmrPropertiesHasBeenSet = false;

    SparkGluePropertiesInput m_sparkGlueProperties;
    bool m_sparkGluePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
