/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class DeleteDataSourceRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API DeleteDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataSource"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline DeleteDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline DeleteDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline DeleteDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
