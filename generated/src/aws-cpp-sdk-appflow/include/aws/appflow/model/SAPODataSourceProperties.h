/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SAPODataParallelismConfig.h>
#include <aws/appflow/model/SAPODataPaginationConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when using SAPOData as a flow source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataSourceProperties">AWS
   * API Reference</a></p>
   */
  class SAPODataSourceProperties
  {
  public:
    AWS_APPFLOW_API SAPODataSourceProperties();
    AWS_APPFLOW_API SAPODataSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline const Aws::String& GetObjectPath() const{ return m_objectPath; }

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline bool ObjectPathHasBeenSet() const { return m_objectPathHasBeenSet; }

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline void SetObjectPath(const Aws::String& value) { m_objectPathHasBeenSet = true; m_objectPath = value; }

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline void SetObjectPath(Aws::String&& value) { m_objectPathHasBeenSet = true; m_objectPath = std::move(value); }

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline void SetObjectPath(const char* value) { m_objectPathHasBeenSet = true; m_objectPath.assign(value); }

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline SAPODataSourceProperties& WithObjectPath(const Aws::String& value) { SetObjectPath(value); return *this;}

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline SAPODataSourceProperties& WithObjectPath(Aws::String&& value) { SetObjectPath(std::move(value)); return *this;}

    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline SAPODataSourceProperties& WithObjectPath(const char* value) { SetObjectPath(value); return *this;}


    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline const SAPODataParallelismConfig& GetParallelismConfig() const{ return m_parallelismConfig; }

    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline bool ParallelismConfigHasBeenSet() const { return m_parallelismConfigHasBeenSet; }

    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline void SetParallelismConfig(const SAPODataParallelismConfig& value) { m_parallelismConfigHasBeenSet = true; m_parallelismConfig = value; }

    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline void SetParallelismConfig(SAPODataParallelismConfig&& value) { m_parallelismConfigHasBeenSet = true; m_parallelismConfig = std::move(value); }

    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline SAPODataSourceProperties& WithParallelismConfig(const SAPODataParallelismConfig& value) { SetParallelismConfig(value); return *this;}

    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline SAPODataSourceProperties& WithParallelismConfig(SAPODataParallelismConfig&& value) { SetParallelismConfig(std::move(value)); return *this;}


    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline const SAPODataPaginationConfig& GetPaginationConfig() const{ return m_paginationConfig; }

    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline bool PaginationConfigHasBeenSet() const { return m_paginationConfigHasBeenSet; }

    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline void SetPaginationConfig(const SAPODataPaginationConfig& value) { m_paginationConfigHasBeenSet = true; m_paginationConfig = value; }

    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline void SetPaginationConfig(SAPODataPaginationConfig&& value) { m_paginationConfigHasBeenSet = true; m_paginationConfig = std::move(value); }

    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline SAPODataSourceProperties& WithPaginationConfig(const SAPODataPaginationConfig& value) { SetPaginationConfig(value); return *this;}

    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline SAPODataSourceProperties& WithPaginationConfig(SAPODataPaginationConfig&& value) { SetPaginationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_objectPath;
    bool m_objectPathHasBeenSet = false;

    SAPODataParallelismConfig m_parallelismConfig;
    bool m_parallelismConfigHasBeenSet = false;

    SAPODataPaginationConfig m_paginationConfig;
    bool m_paginationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
