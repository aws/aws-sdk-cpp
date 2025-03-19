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
    AWS_GLUEDATABREW_API Input() = default;
    AWS_GLUEDATABREW_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location where the data is stored.</p>
     */
    inline const S3Location& GetS3InputDefinition() const { return m_s3InputDefinition; }
    inline bool S3InputDefinitionHasBeenSet() const { return m_s3InputDefinitionHasBeenSet; }
    template<typename S3InputDefinitionT = S3Location>
    void SetS3InputDefinition(S3InputDefinitionT&& value) { m_s3InputDefinitionHasBeenSet = true; m_s3InputDefinition = std::forward<S3InputDefinitionT>(value); }
    template<typename S3InputDefinitionT = S3Location>
    Input& WithS3InputDefinition(S3InputDefinitionT&& value) { SetS3InputDefinition(std::forward<S3InputDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue Data Catalog parameters for the data.</p>
     */
    inline const DataCatalogInputDefinition& GetDataCatalogInputDefinition() const { return m_dataCatalogInputDefinition; }
    inline bool DataCatalogInputDefinitionHasBeenSet() const { return m_dataCatalogInputDefinitionHasBeenSet; }
    template<typename DataCatalogInputDefinitionT = DataCatalogInputDefinition>
    void SetDataCatalogInputDefinition(DataCatalogInputDefinitionT&& value) { m_dataCatalogInputDefinitionHasBeenSet = true; m_dataCatalogInputDefinition = std::forward<DataCatalogInputDefinitionT>(value); }
    template<typename DataCatalogInputDefinitionT = DataCatalogInputDefinition>
    Input& WithDataCatalogInputDefinition(DataCatalogInputDefinitionT&& value) { SetDataCatalogInputDefinition(std::forward<DataCatalogInputDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection information for dataset input files stored in a database.</p>
     */
    inline const DatabaseInputDefinition& GetDatabaseInputDefinition() const { return m_databaseInputDefinition; }
    inline bool DatabaseInputDefinitionHasBeenSet() const { return m_databaseInputDefinitionHasBeenSet; }
    template<typename DatabaseInputDefinitionT = DatabaseInputDefinition>
    void SetDatabaseInputDefinition(DatabaseInputDefinitionT&& value) { m_databaseInputDefinitionHasBeenSet = true; m_databaseInputDefinition = std::forward<DatabaseInputDefinitionT>(value); }
    template<typename DatabaseInputDefinitionT = DatabaseInputDefinition>
    Input& WithDatabaseInputDefinition(DatabaseInputDefinitionT&& value) { SetDatabaseInputDefinition(std::forward<DatabaseInputDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional resource information needed for specific datasets.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    Input& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
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
