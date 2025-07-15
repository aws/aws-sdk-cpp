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
#include <aws/datazone/model/S3PropertiesPatch.h>
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
    AWS_DATAZONE_API ConnectionPropertiesPatch() = default;
    AWS_DATAZONE_API ConnectionPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of a connection properties patch.</p>
     */
    inline const AthenaPropertiesPatch& GetAthenaProperties() const { return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    template<typename AthenaPropertiesT = AthenaPropertiesPatch>
    void SetAthenaProperties(AthenaPropertiesT&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::forward<AthenaPropertiesT>(value); }
    template<typename AthenaPropertiesT = AthenaPropertiesPatch>
    ConnectionPropertiesPatch& WithAthenaProperties(AthenaPropertiesT&& value) { SetAthenaProperties(std::forward<AthenaPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue properties of a connection properties patch.</p>
     */
    inline const GluePropertiesPatch& GetGlueProperties() const { return m_glueProperties; }
    inline bool GluePropertiesHasBeenSet() const { return m_gluePropertiesHasBeenSet; }
    template<typename GluePropertiesT = GluePropertiesPatch>
    void SetGlueProperties(GluePropertiesT&& value) { m_gluePropertiesHasBeenSet = true; m_glueProperties = std::forward<GluePropertiesT>(value); }
    template<typename GluePropertiesT = GluePropertiesPatch>
    ConnectionPropertiesPatch& WithGlueProperties(GluePropertiesT&& value) { SetGlueProperties(std::forward<GluePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM properties of a connection properties patch.</p>
     */
    inline const IamPropertiesPatch& GetIamProperties() const { return m_iamProperties; }
    inline bool IamPropertiesHasBeenSet() const { return m_iamPropertiesHasBeenSet; }
    template<typename IamPropertiesT = IamPropertiesPatch>
    void SetIamProperties(IamPropertiesT&& value) { m_iamPropertiesHasBeenSet = true; m_iamProperties = std::forward<IamPropertiesT>(value); }
    template<typename IamPropertiesT = IamPropertiesPatch>
    ConnectionPropertiesPatch& WithIamProperties(IamPropertiesT&& value) { SetIamProperties(std::forward<IamPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift properties of a connection properties patch.</p>
     */
    inline const RedshiftPropertiesPatch& GetRedshiftProperties() const { return m_redshiftProperties; }
    inline bool RedshiftPropertiesHasBeenSet() const { return m_redshiftPropertiesHasBeenSet; }
    template<typename RedshiftPropertiesT = RedshiftPropertiesPatch>
    void SetRedshiftProperties(RedshiftPropertiesT&& value) { m_redshiftPropertiesHasBeenSet = true; m_redshiftProperties = std::forward<RedshiftPropertiesT>(value); }
    template<typename RedshiftPropertiesT = RedshiftPropertiesPatch>
    ConnectionPropertiesPatch& WithRedshiftProperties(RedshiftPropertiesT&& value) { SetRedshiftProperties(std::forward<RedshiftPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 properties of a connection properties patch.</p>
     */
    inline const S3PropertiesPatch& GetS3Properties() const { return m_s3Properties; }
    inline bool S3PropertiesHasBeenSet() const { return m_s3PropertiesHasBeenSet; }
    template<typename S3PropertiesT = S3PropertiesPatch>
    void SetS3Properties(S3PropertiesT&& value) { m_s3PropertiesHasBeenSet = true; m_s3Properties = std::forward<S3PropertiesT>(value); }
    template<typename S3PropertiesT = S3PropertiesPatch>
    ConnectionPropertiesPatch& WithS3Properties(S3PropertiesT&& value) { SetS3Properties(std::forward<S3PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark EMR properties of a connection properties patch.</p>
     */
    inline const SparkEmrPropertiesPatch& GetSparkEmrProperties() const { return m_sparkEmrProperties; }
    inline bool SparkEmrPropertiesHasBeenSet() const { return m_sparkEmrPropertiesHasBeenSet; }
    template<typename SparkEmrPropertiesT = SparkEmrPropertiesPatch>
    void SetSparkEmrProperties(SparkEmrPropertiesT&& value) { m_sparkEmrPropertiesHasBeenSet = true; m_sparkEmrProperties = std::forward<SparkEmrPropertiesT>(value); }
    template<typename SparkEmrPropertiesT = SparkEmrPropertiesPatch>
    ConnectionPropertiesPatch& WithSparkEmrProperties(SparkEmrPropertiesT&& value) { SetSparkEmrProperties(std::forward<SparkEmrPropertiesT>(value)); return *this;}
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

    S3PropertiesPatch m_s3Properties;
    bool m_s3PropertiesHasBeenSet = false;

    SparkEmrPropertiesPatch m_sparkEmrProperties;
    bool m_sparkEmrPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
