/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetColumnStatisticsTaskRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetColumnStatisticsTaskRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetColumnStatisticsTaskRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const { return m_columnStatisticsTaskRunId; }
    inline bool ColumnStatisticsTaskRunIdHasBeenSet() const { return m_columnStatisticsTaskRunIdHasBeenSet; }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    void SetColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::forward<ColumnStatisticsTaskRunIdT>(value); }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    GetColumnStatisticsTaskRunRequest& WithColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { SetColumnStatisticsTaskRunId(std::forward<ColumnStatisticsTaskRunIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnStatisticsTaskRunId;
    bool m_columnStatisticsTaskRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
