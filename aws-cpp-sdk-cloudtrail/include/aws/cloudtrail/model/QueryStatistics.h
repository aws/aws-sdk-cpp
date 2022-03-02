/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>

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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Metadata about a query, such as the number of results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/QueryStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API QueryStatistics
  {
  public:
    QueryStatistics();
    QueryStatistics(Aws::Utils::Json::JsonView jsonValue);
    QueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of results returned.</p>
     */
    inline int GetResultsCount() const{ return m_resultsCount; }

    /**
     * <p>The number of results returned.</p>
     */
    inline bool ResultsCountHasBeenSet() const { return m_resultsCountHasBeenSet; }

    /**
     * <p>The number of results returned.</p>
     */
    inline void SetResultsCount(int value) { m_resultsCountHasBeenSet = true; m_resultsCount = value; }

    /**
     * <p>The number of results returned.</p>
     */
    inline QueryStatistics& WithResultsCount(int value) { SetResultsCount(value); return *this;}


    /**
     * <p>The total number of results returned by a query.</p>
     */
    inline int GetTotalResultsCount() const{ return m_totalResultsCount; }

    /**
     * <p>The total number of results returned by a query.</p>
     */
    inline bool TotalResultsCountHasBeenSet() const { return m_totalResultsCountHasBeenSet; }

    /**
     * <p>The total number of results returned by a query.</p>
     */
    inline void SetTotalResultsCount(int value) { m_totalResultsCountHasBeenSet = true; m_totalResultsCount = value; }

    /**
     * <p>The total number of results returned by a query.</p>
     */
    inline QueryStatistics& WithTotalResultsCount(int value) { SetTotalResultsCount(value); return *this;}


    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline long long GetBytesScanned() const{ return m_bytesScanned; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline void SetBytesScanned(long long value) { m_bytesScannedHasBeenSet = true; m_bytesScanned = value; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline QueryStatistics& WithBytesScanned(long long value) { SetBytesScanned(value); return *this;}

  private:

    int m_resultsCount;
    bool m_resultsCountHasBeenSet;

    int m_totalResultsCount;
    bool m_totalResultsCountHasBeenSet;

    long long m_bytesScanned;
    bool m_bytesScannedHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
