/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/S3Location.h>
#include <aws/databrew/model/DataCatalogInputDefinition.h>
#include <aws/databrew/model/DatabaseInputDefinition.h>
#include <aws/databrew/model/Metadata.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents information on how DataBrew can find data, in either the Glue Data
   * Catalog or Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Input">AWS API
   * Reference</a></p>
   */
  class Input
  {
  public:
    AWS_GLUEDATABREW_API Input();
    AWS_GLUEDATABREW_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline const S3Location& GetS3InputDefinition() const{ return m_s3InputDefinition; }

    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline bool S3InputDefinitionHasBeenSet() const { return m_s3InputDefinitionHasBeenSet; }

    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline void SetS3InputDefinition(const S3Location& value) { m_s3InputDefinitionHasBeenSet = true; m_s3InputDefinition = value; }

    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline void SetS3InputDefinition(S3Location&& value) { m_s3InputDefinitionHasBeenSet = true; m_s3InputDefinition = std::move(value); }

    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline Input& WithS3InputDefinition(const S3Location& value) { SetS3InputDefinition(value); return *this;}

    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline Input& WithS3InputDefinition(S3Location&& value) { SetS3InputDefinition(std::move(value)); return *this;}


    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline const DataCatalogInputDefinition& GetDataCatalogInputDefinition() const{ return m_dataCatalogInputDefinition; }

    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline bool DataCatalogInputDefinitionHasBeenSet() const { return m_dataCatalogInputDefinitionHasBeenSet; }

    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline void SetDataCatalogInputDefinition(const DataCatalogInputDefinition& value) { m_dataCatalogInputDefinitionHasBeenSet = true; m_dataCatalogInputDefinition = value; }

    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline void SetDataCatalogInputDefinition(DataCatalogInputDefinition&& value) { m_dataCatalogInputDefinitionHasBeenSet = true; m_dataCatalogInputDefinition = std::move(value); }

    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline Input& WithDataCatalogInputDefinition(const DataCatalogInputDefinition& value) { SetDataCatalogInputDefinition(value); return *this;}

    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline Input& WithDataCatalogInputDefinition(DataCatalogInputDefinition&& value) { SetDataCatalogInputDefinition(std::move(value)); return *this;}


    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline const DatabaseInputDefinition& GetDatabaseInputDefinition() const{ return m_databaseInputDefinition; }

    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline bool DatabaseInputDefinitionHasBeenSet() const { return m_databaseInputDefinitionHasBeenSet; }

    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline void SetDatabaseInputDefinition(const DatabaseInputDefinition& value) { m_databaseInputDefinitionHasBeenSet = true; m_databaseInputDefinition = value; }

    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline void SetDatabaseInputDefinition(DatabaseInputDefinition&& value) { m_databaseInputDefinitionHasBeenSet = true; m_databaseInputDefinition = std::move(value); }

    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline Input& WithDatabaseInputDefinition(const DatabaseInputDefinition& value) { SetDatabaseInputDefinition(value); return *this;}

    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline Input& WithDatabaseInputDefinition(DatabaseInputDefinition&& value) { SetDatabaseInputDefinition(std::move(value)); return *this;}


    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline const Metadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline void SetMetadata(const Metadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline void SetMetadata(Metadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline Input& WithMetadata(const Metadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline Input& WithMetadata(Metadata&& value) { SetMetadata(std::move(value)); return *this;}

  private:

    S3Location m_s3InputDefinition;
    bool m_s3InputDefinitionHasBeenSet = false;

    DataCatalogInputDefinition m_dataCatalogInputDefinition;
    bool m_dataCatalogInputDefinitionHasBeenSet = false;

    DatabaseInputDefinition m_databaseInputDefinition;
    bool m_databaseInputDefinitionHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
