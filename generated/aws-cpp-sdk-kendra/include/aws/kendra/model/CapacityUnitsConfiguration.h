﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
namespace kendra
{
namespace Model
{

  /**
   * <p>Specifies capacity units configured for your enterprise edition index. You
   * can add and remove capacity units to tune an index to your
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CapacityUnitsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API CapacityUnitsConfiguration
  {
  public:
    CapacityUnitsConfiguration();
    CapacityUnitsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CapacityUnitsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of extra storage capacity for an index. A single capacity unit
     * provides 30 GB of storage space or 100,000 documents, whichever is reached
     * first.</p>
     */
    inline int GetStorageCapacityUnits() const{ return m_storageCapacityUnits; }

    /**
     * <p>The amount of extra storage capacity for an index. A single capacity unit
     * provides 30 GB of storage space or 100,000 documents, whichever is reached
     * first.</p>
     */
    inline bool StorageCapacityUnitsHasBeenSet() const { return m_storageCapacityUnitsHasBeenSet; }

    /**
     * <p>The amount of extra storage capacity for an index. A single capacity unit
     * provides 30 GB of storage space or 100,000 documents, whichever is reached
     * first.</p>
     */
    inline void SetStorageCapacityUnits(int value) { m_storageCapacityUnitsHasBeenSet = true; m_storageCapacityUnits = value; }

    /**
     * <p>The amount of extra storage capacity for an index. A single capacity unit
     * provides 30 GB of storage space or 100,000 documents, whichever is reached
     * first.</p>
     */
    inline CapacityUnitsConfiguration& WithStorageCapacityUnits(int value) { SetStorageCapacityUnits(value); return *this;}


    /**
     * <p>The amount of extra query capacity for an index and <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>
     * capacity.</p> <p>A single extra capacity unit for an index provides 0.1 queries
     * per second or approximately 8,000 queries per day.</p> <p>
     * <code>GetQuerySuggestions</code> capacity is five times the provisioned query
     * capacity for an index, or the base capacity of 2.5 calls per second, whichever
     * is higher. For example, the base capacity for an index is 0.1 queries per
     * second, and <code>GetQuerySuggestions</code> capacity has a base of 2.5 calls
     * per second. If you add another 0.1 queries per second to total 0.2 queries per
     * second for an index, the <code>GetQuerySuggestions</code> capacity is 2.5 calls
     * per second (higher than five times 0.2 queries per second).</p>
     */
    inline int GetQueryCapacityUnits() const{ return m_queryCapacityUnits; }

    /**
     * <p>The amount of extra query capacity for an index and <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>
     * capacity.</p> <p>A single extra capacity unit for an index provides 0.1 queries
     * per second or approximately 8,000 queries per day.</p> <p>
     * <code>GetQuerySuggestions</code> capacity is five times the provisioned query
     * capacity for an index, or the base capacity of 2.5 calls per second, whichever
     * is higher. For example, the base capacity for an index is 0.1 queries per
     * second, and <code>GetQuerySuggestions</code> capacity has a base of 2.5 calls
     * per second. If you add another 0.1 queries per second to total 0.2 queries per
     * second for an index, the <code>GetQuerySuggestions</code> capacity is 2.5 calls
     * per second (higher than five times 0.2 queries per second).</p>
     */
    inline bool QueryCapacityUnitsHasBeenSet() const { return m_queryCapacityUnitsHasBeenSet; }

    /**
     * <p>The amount of extra query capacity for an index and <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>
     * capacity.</p> <p>A single extra capacity unit for an index provides 0.1 queries
     * per second or approximately 8,000 queries per day.</p> <p>
     * <code>GetQuerySuggestions</code> capacity is five times the provisioned query
     * capacity for an index, or the base capacity of 2.5 calls per second, whichever
     * is higher. For example, the base capacity for an index is 0.1 queries per
     * second, and <code>GetQuerySuggestions</code> capacity has a base of 2.5 calls
     * per second. If you add another 0.1 queries per second to total 0.2 queries per
     * second for an index, the <code>GetQuerySuggestions</code> capacity is 2.5 calls
     * per second (higher than five times 0.2 queries per second).</p>
     */
    inline void SetQueryCapacityUnits(int value) { m_queryCapacityUnitsHasBeenSet = true; m_queryCapacityUnits = value; }

    /**
     * <p>The amount of extra query capacity for an index and <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>
     * capacity.</p> <p>A single extra capacity unit for an index provides 0.1 queries
     * per second or approximately 8,000 queries per day.</p> <p>
     * <code>GetQuerySuggestions</code> capacity is five times the provisioned query
     * capacity for an index, or the base capacity of 2.5 calls per second, whichever
     * is higher. For example, the base capacity for an index is 0.1 queries per
     * second, and <code>GetQuerySuggestions</code> capacity has a base of 2.5 calls
     * per second. If you add another 0.1 queries per second to total 0.2 queries per
     * second for an index, the <code>GetQuerySuggestions</code> capacity is 2.5 calls
     * per second (higher than five times 0.2 queries per second).</p>
     */
    inline CapacityUnitsConfiguration& WithQueryCapacityUnits(int value) { SetQueryCapacityUnits(value); return *this;}

  private:

    int m_storageCapacityUnits;
    bool m_storageCapacityUnitsHasBeenSet;

    int m_queryCapacityUnits;
    bool m_queryCapacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
