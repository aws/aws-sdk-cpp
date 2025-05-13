/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class StopQueryExecutionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API StopQueryExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopQueryExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the query execution to stop.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const { return m_queryExecutionId; }
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }
    template<typename QueryExecutionIdT = Aws::String>
    void SetQueryExecutionId(QueryExecutionIdT&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::forward<QueryExecutionIdT>(value); }
    template<typename QueryExecutionIdT = Aws::String>
    StopQueryExecutionRequest& WithQueryExecutionId(QueryExecutionIdT&& value) { SetQueryExecutionId(std::forward<QueryExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryExecutionId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_queryExecutionIdHasBeenSet = true;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
