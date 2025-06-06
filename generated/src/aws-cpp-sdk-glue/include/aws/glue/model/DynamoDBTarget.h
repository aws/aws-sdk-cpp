﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Amazon DynamoDB table to crawl.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DynamoDBTarget">AWS
   * API Reference</a></p>
   */
  class DynamoDBTarget
  {
  public:
    AWS_GLUE_API DynamoDBTarget() = default;
    AWS_GLUE_API DynamoDBTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DynamoDBTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    DynamoDBTarget& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to scan all the records, or to sample rows from the table.
     * Scanning all the records can take a long time when the table is not a high
     * throughput table.</p> <p>A value of <code>true</code> means to scan all records,
     * while a value of <code>false</code> means to sample the records. If no value is
     * specified, the value defaults to <code>true</code>.</p>
     */
    inline bool GetScanAll() const { return m_scanAll; }
    inline bool ScanAllHasBeenSet() const { return m_scanAllHasBeenSet; }
    inline void SetScanAll(bool value) { m_scanAllHasBeenSet = true; m_scanAll = value; }
    inline DynamoDBTarget& WithScanAll(bool value) { SetScanAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the configured read capacity units to use by the Glue
     * crawler. Read capacity units is a term defined by DynamoDB, and is a numeric
     * value that acts as rate limiter for the number of reads that can be performed on
     * that table per second.</p> <p>The valid values are null or a value between 0.1
     * to 1.5. A null value is used when user does not provide a value, and defaults to
     * 0.5 of the configured Read Capacity Unit (for provisioned tables), or 0.25 of
     * the max configured Read Capacity Unit (for tables using on-demand mode).</p>
     */
    inline double GetScanRate() const { return m_scanRate; }
    inline bool ScanRateHasBeenSet() const { return m_scanRateHasBeenSet; }
    inline void SetScanRate(double value) { m_scanRateHasBeenSet = true; m_scanRate = value; }
    inline DynamoDBTarget& WithScanRate(double value) { SetScanRate(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    bool m_scanAll{false};
    bool m_scanAllHasBeenSet = false;

    double m_scanRate{0.0};
    bool m_scanRateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
