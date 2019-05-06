/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   */
  class AWS_ATHENA_API BatchGetQueryExecutionRequest : public AthenaRequest
  {
  public:
    BatchGetQueryExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetQueryExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_queryExecutionIdsHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
