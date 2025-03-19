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
    AWS_APPFLOW_API SAPODataSourceProperties() = default;
    AWS_APPFLOW_API SAPODataSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object path specified in the SAPOData flow source. </p>
     */
    inline const Aws::String& GetObjectPath() const { return m_objectPath; }
    inline bool ObjectPathHasBeenSet() const { return m_objectPathHasBeenSet; }
    template<typename ObjectPathT = Aws::String>
    void SetObjectPath(ObjectPathT&& value) { m_objectPathHasBeenSet = true; m_objectPath = std::forward<ObjectPathT>(value); }
    template<typename ObjectPathT = Aws::String>
    SAPODataSourceProperties& WithObjectPath(ObjectPathT&& value) { SetObjectPath(std::forward<ObjectPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of concurrent processes that transfers OData records from
     * your SAP instance.</p>
     */
    inline const SAPODataParallelismConfig& GetParallelismConfig() const { return m_parallelismConfig; }
    inline bool ParallelismConfigHasBeenSet() const { return m_parallelismConfigHasBeenSet; }
    template<typename ParallelismConfigT = SAPODataParallelismConfig>
    void SetParallelismConfig(ParallelismConfigT&& value) { m_parallelismConfigHasBeenSet = true; m_parallelismConfig = std::forward<ParallelismConfigT>(value); }
    template<typename ParallelismConfigT = SAPODataParallelismConfig>
    SAPODataSourceProperties& WithParallelismConfig(ParallelismConfigT&& value) { SetParallelismConfig(std::forward<ParallelismConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the page size for each concurrent process that transfers OData records
     * from your SAP instance.</p>
     */
    inline const SAPODataPaginationConfig& GetPaginationConfig() const { return m_paginationConfig; }
    inline bool PaginationConfigHasBeenSet() const { return m_paginationConfigHasBeenSet; }
    template<typename PaginationConfigT = SAPODataPaginationConfig>
    void SetPaginationConfig(PaginationConfigT&& value) { m_paginationConfigHasBeenSet = true; m_paginationConfig = std::forward<PaginationConfigT>(value); }
    template<typename PaginationConfigT = SAPODataPaginationConfig>
    SAPODataSourceProperties& WithPaginationConfig(PaginationConfigT&& value) { SetPaginationConfig(std::forward<PaginationConfigT>(value)); return *this;}
    ///@}
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
