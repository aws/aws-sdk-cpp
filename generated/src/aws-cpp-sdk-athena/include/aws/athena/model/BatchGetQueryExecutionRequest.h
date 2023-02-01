/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains an array of query execution IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetQueryExecutionInput">AWS
   * API Reference</a></p>
   */
  class BatchGetQueryExecutionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API BatchGetQueryExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetQueryExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of query execution IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryExecutionIds() const{ return m_queryExecutionIds; }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline bool QueryExecutionIdsHasBeenSet() const { return m_queryExecutionIdsHasBeenSet; }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline void SetQueryExecutionIds(const Aws::Vector<Aws::String>& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds = value; }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline void SetQueryExecutionIds(Aws::Vector<Aws::String>&& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds = std::move(value); }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline BatchGetQueryExecutionRequest& WithQueryExecutionIds(const Aws::Vector<Aws::String>& value) { SetQueryExecutionIds(value); return *this;}

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline BatchGetQueryExecutionRequest& WithQueryExecutionIds(Aws::Vector<Aws::String>&& value) { SetQueryExecutionIds(std::move(value)); return *this;}

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline BatchGetQueryExecutionRequest& AddQueryExecutionIds(const Aws::String& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds.push_back(value); return *this; }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline BatchGetQueryExecutionRequest& AddQueryExecutionIds(Aws::String&& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of query execution IDs.</p>
     */
    inline BatchGetQueryExecutionRequest& AddQueryExecutionIds(const char* value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_queryExecutionIds;
    bool m_queryExecutionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
