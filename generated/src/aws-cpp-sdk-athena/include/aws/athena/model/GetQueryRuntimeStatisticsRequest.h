/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetQueryRuntimeStatisticsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetQueryRuntimeStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueryRuntimeStatistics"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = value; }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::move(value); }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId.assign(value); }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryRuntimeStatisticsRequest& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryRuntimeStatisticsRequest& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryRuntimeStatisticsRequest& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}

  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
