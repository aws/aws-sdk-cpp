/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Input properties to configure data lake access for your catalog resource in
   * the Glue Data Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataLakeAccessProperties">AWS
   * API Reference</a></p>
   */
  class DataLakeAccessProperties
  {
  public:
    AWS_GLUE_API DataLakeAccessProperties();
    AWS_GLUE_API DataLakeAccessProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataLakeAccessProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Turns on or off data lake access for Apache Spark applications that access
     * Amazon Redshift databases in the Data Catalog from any non-Redshift engine, such
     * as Amazon Athena, Amazon EMR, or Glue ETL.</p>
     */
    inline bool GetDataLakeAccess() const{ return m_dataLakeAccess; }
    inline bool DataLakeAccessHasBeenSet() const { return m_dataLakeAccessHasBeenSet; }
    inline void SetDataLakeAccess(bool value) { m_dataLakeAccessHasBeenSet = true; m_dataLakeAccess = value; }
    inline DataLakeAccessProperties& WithDataLakeAccess(bool value) { SetDataLakeAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A role that will be assumed by Glue for transferring data into/out of the
     * staging bucket during a query.</p>
     */
    inline const Aws::String& GetDataTransferRole() const{ return m_dataTransferRole; }
    inline bool DataTransferRoleHasBeenSet() const { return m_dataTransferRoleHasBeenSet; }
    inline void SetDataTransferRole(const Aws::String& value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole = value; }
    inline void SetDataTransferRole(Aws::String&& value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole = std::move(value); }
    inline void SetDataTransferRole(const char* value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole.assign(value); }
    inline DataLakeAccessProperties& WithDataTransferRole(const Aws::String& value) { SetDataTransferRole(value); return *this;}
    inline DataLakeAccessProperties& WithDataTransferRole(Aws::String&& value) { SetDataTransferRole(std::move(value)); return *this;}
    inline DataLakeAccessProperties& WithDataTransferRole(const char* value) { SetDataTransferRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encryption key that will be used for the staging bucket that will be
     * created along with the catalog.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline DataLakeAccessProperties& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline DataLakeAccessProperties& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline DataLakeAccessProperties& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a federated catalog type for the native catalog resource. The
     * currently supported type is <code>aws:redshift</code>.</p>
     */
    inline const Aws::String& GetCatalogType() const{ return m_catalogType; }
    inline bool CatalogTypeHasBeenSet() const { return m_catalogTypeHasBeenSet; }
    inline void SetCatalogType(const Aws::String& value) { m_catalogTypeHasBeenSet = true; m_catalogType = value; }
    inline void SetCatalogType(Aws::String&& value) { m_catalogTypeHasBeenSet = true; m_catalogType = std::move(value); }
    inline void SetCatalogType(const char* value) { m_catalogTypeHasBeenSet = true; m_catalogType.assign(value); }
    inline DataLakeAccessProperties& WithCatalogType(const Aws::String& value) { SetCatalogType(value); return *this;}
    inline DataLakeAccessProperties& WithCatalogType(Aws::String&& value) { SetCatalogType(std::move(value)); return *this;}
    inline DataLakeAccessProperties& WithCatalogType(const char* value) { SetCatalogType(value); return *this;}
    ///@}
  private:

    bool m_dataLakeAccess;
    bool m_dataLakeAccessHasBeenSet = false;

    Aws::String m_dataTransferRole;
    bool m_dataTransferRoleHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_catalogType;
    bool m_catalogTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
