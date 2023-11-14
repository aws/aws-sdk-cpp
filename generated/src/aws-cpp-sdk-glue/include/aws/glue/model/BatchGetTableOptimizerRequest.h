/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/BatchGetTableOptimizerEntry.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchGetTableOptimizerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetTableOptimizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTableOptimizer"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline const Aws::Vector<BatchGetTableOptimizerEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline void SetEntries(const Aws::Vector<BatchGetTableOptimizerEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline void SetEntries(Aws::Vector<BatchGetTableOptimizerEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline BatchGetTableOptimizerRequest& WithEntries(const Aws::Vector<BatchGetTableOptimizerEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline BatchGetTableOptimizerRequest& WithEntries(Aws::Vector<BatchGetTableOptimizerEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline BatchGetTableOptimizerRequest& AddEntries(const BatchGetTableOptimizerEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>A list of <code>BatchGetTableOptimizerEntry</code> objects specifying the
     * table optimizers to retrieve.</p>
     */
    inline BatchGetTableOptimizerRequest& AddEntries(BatchGetTableOptimizerEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetTableOptimizerEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
