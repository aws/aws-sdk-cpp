/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

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
   * <p>Sets the page size for each <i>concurrent process</i> that transfers OData
   * records from your SAP instance. A concurrent process is query that retrieves a
   * batch of records as part of a flow run. Amazon AppFlow can run multiple
   * concurrent processes in parallel to transfer data faster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataPaginationConfig">AWS
   * API Reference</a></p>
   */
  class SAPODataPaginationConfig
  {
  public:
    AWS_APPFLOW_API SAPODataPaginationConfig();
    AWS_APPFLOW_API SAPODataPaginationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataPaginationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of records that Amazon AppFlow receives in each page of
     * the response from your SAP application. For transfers of OData records, the
     * maximum page size is 3,000. For transfers of data that comes from an ODP
     * provider, the maximum page size is 10,000.</p>
     */
    inline int GetMaxPageSize() const{ return m_maxPageSize; }

    /**
     * <p>The maximum number of records that Amazon AppFlow receives in each page of
     * the response from your SAP application. For transfers of OData records, the
     * maximum page size is 3,000. For transfers of data that comes from an ODP
     * provider, the maximum page size is 10,000.</p>
     */
    inline bool MaxPageSizeHasBeenSet() const { return m_maxPageSizeHasBeenSet; }

    /**
     * <p>The maximum number of records that Amazon AppFlow receives in each page of
     * the response from your SAP application. For transfers of OData records, the
     * maximum page size is 3,000. For transfers of data that comes from an ODP
     * provider, the maximum page size is 10,000.</p>
     */
    inline void SetMaxPageSize(int value) { m_maxPageSizeHasBeenSet = true; m_maxPageSize = value; }

    /**
     * <p>The maximum number of records that Amazon AppFlow receives in each page of
     * the response from your SAP application. For transfers of OData records, the
     * maximum page size is 3,000. For transfers of data that comes from an ODP
     * provider, the maximum page size is 10,000.</p>
     */
    inline SAPODataPaginationConfig& WithMaxPageSize(int value) { SetMaxPageSize(value); return *this;}

  private:

    int m_maxPageSize;
    bool m_maxPageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
