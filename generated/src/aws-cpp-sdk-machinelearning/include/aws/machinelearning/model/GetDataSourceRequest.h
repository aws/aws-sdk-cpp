﻿/**
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
  class GetDataSourceRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API GetDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataSource"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    GetDataSourceRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the <code>GetDataSource</code> operation should return
     * <code>DataSourceSchema</code>.</p> <p>If true, <code>DataSourceSchema</code> is
     * returned.</p> <p>If false, <code>DataSourceSchema</code> is not returned.</p>
     */
    inline bool GetVerbose() const { return m_verbose; }
    inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }
    inline GetDataSourceRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    bool m_verbose{false};
    bool m_verboseHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
