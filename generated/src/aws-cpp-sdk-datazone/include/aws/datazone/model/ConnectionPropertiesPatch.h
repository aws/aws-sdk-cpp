/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AthenaPropertiesPatch.h>
#include <aws/datazone/model/GluePropertiesPatch.h>
#include <aws/datazone/model/IamPropertiesPatch.h>
#include <aws/datazone/model/RedshiftPropertiesPatch.h>
#include <aws/datazone/model/SparkEmrPropertiesPatch.h>
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
   * <p>The connection properties patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectionPropertiesPatch">AWS
   * API Reference</a></p>
   */
  class ConnectionPropertiesPatch
  {
  public:
    AWS_DATAZONE_API ConnectionPropertiesPatch();
    AWS_DATAZONE_API ConnectionPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of a connection properties patch.</p>
     */
    inline const AthenaPropertiesPatch& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const AthenaPropertiesPatch& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(AthenaPropertiesPatch&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline ConnectionPropertiesPatch& WithAthenaProperties(const AthenaPropertiesPatch& value) { SetAthenaProperties(value); return *this;}
    inline ConnectionPropertiesPatch& WithAthenaProperties(AthenaPropertiesPatch&& value) { SetAthenaProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue properties of a connection properties patch.</p>
     */
    inline const GluePropertiesPatch& GetGlueProperties() const{ return m_glueProperties; }
    inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
    inline void SetGlueProperties(const GluePropertiesPatch& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = value; }
    inline void SetGlueProperties(GluePropertiesPatch&& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = std::move(value); }
    inline ConnectionPropertiesPatch& WithGlueProperties(const GluePropertiesPatch& value) { SetGlueProperties(value); return *this;}
    inline ConnectionPropertiesPatch& WithGlueProperties(GluePropertiesPatch&& value) { SetGlueProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM properties of a connection properties patch.</p>
     */
    inline const IamPropertiesPatch& GetIamProperties() const{ return m_iamProperties; }
    inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
    inline void SetIamProperties(const IamPropertiesPatch& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = value; }
    inline void SetIamProperties(IamPropertiesPatch&& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = std::move(value); }
    inline ConnectionPropertiesPatch& WithIamProperties(const IamPropertiesPatch& value) { SetIamProperties(value); return *this;}
    inline ConnectionPropertiesPatch& WithIamProperties(IamPropertiesPatch&& value) { SetIamProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift properties of a connection properties patch.</p>
     */
    inline const RedshiftPropertiesPatch& GetRedshiftProperties() const{ return m_redshiftProperties; }
    inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
    inline void SetRedshiftProperties(const RedshiftPropertiesPatch& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = value; }
    inline void SetRedshiftProperties(RedshiftPropertiesPatch&& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = std::move(value); }
    inline ConnectionPropertiesPatch& WithRedshiftProperties(const RedshiftPropertiesPatch& value) { SetRedshiftProperties(value); return *this;}
    inline ConnectionPropertiesPatch& WithRedshiftProperties(RedshiftPropertiesPatch&& value) { SetRedshiftProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark EMR properties of a connection properties patch.</p>
     */
    inline const SparkEmrPropertiesPatch& GetSparkEmrProperties() const{ return m_sparkEmrProperties; }
    inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
    inline void SetSparkEmrProperties(const SparkEmrPropertiesPatch& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = value; }
    inline void SetSparkEmrProperties(SparkEmrPropertiesPatch&& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = std::move(value); }
    inline ConnectionPropertiesPatch& WithSparkEmrProperties(const SparkEmrPropertiesPatch& value) { SetSparkEmrProperties(value); return *this;}
    inline ConnectionPropertiesPatch& WithSparkEmrProperties(SparkEmrPropertiesPatch&& value) { SetSparkEmrProperties(std::move(value)); return *this;}
    ///@}
  private:

    AthenaPropertiesPatch m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    GluePropertiesPatch m_glueProperties;
    bool m_gluePropertiesHasBeenSet = false;

    IamPropertiesPatch m_iamProperties;
    bool m_iamPropertiesHasBeenSet = false;

    RedshiftPropertiesPatch m_redshiftProperties;
    bool m_redshiftPropertiesHasBeenSet = false;

    SparkEmrPropertiesPatch m_sparkEmrProperties;
    bool m_sparkEmrPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
