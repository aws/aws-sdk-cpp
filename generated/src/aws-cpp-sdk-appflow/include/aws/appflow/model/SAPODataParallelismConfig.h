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
   * <p>Sets the number of <i>concurrent processes</i> that transfer OData records
   * from your SAP instance. A concurrent process is query that retrieves a batch of
   * records as part of a flow run. Amazon AppFlow can run multiple concurrent
   * processes in parallel to transfer data faster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataParallelismConfig">AWS
   * API Reference</a></p>
   */
  class SAPODataParallelismConfig
  {
  public:
    AWS_APPFLOW_API SAPODataParallelismConfig();
    AWS_APPFLOW_API SAPODataParallelismConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataParallelismConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of processes that Amazon AppFlow runs at the same time
     * when it retrieves your data from your SAP application.</p>
     */
    inline int GetMaxParallelism() const{ return m_maxParallelism; }

    /**
     * <p>The maximum number of processes that Amazon AppFlow runs at the same time
     * when it retrieves your data from your SAP application.</p>
     */
    inline bool MaxParallelismHasBeenSet() const { return m_maxParallelismHasBeenSet; }

    /**
     * <p>The maximum number of processes that Amazon AppFlow runs at the same time
     * when it retrieves your data from your SAP application.</p>
     */
    inline void SetMaxParallelism(int value) { m_maxParallelismHasBeenSet = true; m_maxParallelism = value; }

    /**
     * <p>The maximum number of processes that Amazon AppFlow runs at the same time
     * when it retrieves your data from your SAP application.</p>
     */
    inline SAPODataParallelismConfig& WithMaxParallelism(int value) { SetMaxParallelism(value); return *this;}

  private:

    int m_maxParallelism;
    bool m_maxParallelismHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
