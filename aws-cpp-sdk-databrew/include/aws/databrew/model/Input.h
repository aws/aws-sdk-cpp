/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/S3Location.h>
#include <aws/databrew/model/DataCatalogInputDefinition.h>
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
   * <p>Information on how AWS Glue DataBrew can find data, in either the AWS Glue
   * Data Catalog or Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Input">AWS API
   * Reference</a></p>
   */
  class AWS_GLUEDATABREW_API Input
  {
  public:
    Input();
    Input(Aws::Utils::Json::JsonView jsonValue);
    Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline const DataCatalogInputDefinition& GetDataCatalogInputDefinition() const{ return m_dataCatalogInputDefinition; }

    /**
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline bool DataCatalogInputDefinitionHasBeenSet() const { return m_dataCatalogInputDefinitionHasBeenSet; }

    /**
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline void SetDataCatalogInputDefinition(const DataCatalogInputDefinition& value) { m_dataCatalogInputDefinitionHasBeenSet = true; m_dataCatalogInputDefinition = value; }

    /**
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline void SetDataCatalogInputDefinition(DataCatalogInputDefinition&& value) { m_dataCatalogInputDefinitionHasBeenSet = true; m_dataCatalogInputDefinition = std::move(value); }

    /**
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline Input& WithDataCatalogInputDefinition(const DataCatalogInputDefinition& value) { SetDataCatalogInputDefinition(value); return *this;}

    /**
     * <p>The AWS Glue Data Catalog parameters for the data.</p>
     */
    inline Input& WithDataCatalogInputDefinition(DataCatalogInputDefinition&& value) { SetDataCatalogInputDefinition(std::move(value)); return *this;}

  private:

    S3Location m_s3InputDefinition;
    bool m_s3InputDefinitionHasBeenSet;

    DataCatalogInputDefinition m_dataCatalogInputDefinition;
    bool m_dataCatalogInputDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
