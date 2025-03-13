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
   * <p> Provides statistics for the specified <code>ImportID</code>. CloudTrail does
   * not update import statistics in real-time. Returned values for parameters such
   * as <code>EventsCompleted</code> may be lower than the actual value, because
   * CloudTrail updates statistics incrementally over the course of the import.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ImportStatistics">AWS
   * API Reference</a></p>
   */
  class ImportStatistics
  {
  public:
    AWS_CLOUDTRAIL_API ImportStatistics() = default;
    AWS_CLOUDTRAIL_API ImportStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ImportStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of S3 prefixes found for the import. </p>
     */
    inline long long GetPrefixesFound() const { return m_prefixesFound; }
    inline bool PrefixesFoundHasBeenSet() const { return m_prefixesFoundHasBeenSet; }
    inline void SetPrefixesFound(long long value) { m_prefixesFoundHasBeenSet = true; m_prefixesFound = value; }
    inline ImportStatistics& WithPrefixesFound(long long value) { SetPrefixesFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of S3 prefixes that completed import. </p>
     */
    inline long long GetPrefixesCompleted() const { return m_prefixesCompleted; }
    inline bool PrefixesCompletedHasBeenSet() const { return m_prefixesCompletedHasBeenSet; }
    inline void SetPrefixesCompleted(long long value) { m_prefixesCompletedHasBeenSet = true; m_prefixesCompleted = value; }
    inline ImportStatistics& WithPrefixesCompleted(long long value) { SetPrefixesCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of log files that completed import.</p>
     */
    inline long long GetFilesCompleted() const { return m_filesCompleted; }
    inline bool FilesCompletedHasBeenSet() const { return m_filesCompletedHasBeenSet; }
    inline void SetFilesCompleted(long long value) { m_filesCompletedHasBeenSet = true; m_filesCompleted = value; }
    inline ImportStatistics& WithFilesCompleted(long long value) { SetFilesCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of trail events imported into the event data store. </p>
     */
    inline long long GetEventsCompleted() const { return m_eventsCompleted; }
    inline bool EventsCompletedHasBeenSet() const { return m_eventsCompletedHasBeenSet; }
    inline void SetEventsCompleted(long long value) { m_eventsCompletedHasBeenSet = true; m_eventsCompleted = value; }
    inline ImportStatistics& WithEventsCompleted(long long value) { SetEventsCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of failed entries. </p>
     */
    inline long long GetFailedEntries() const { return m_failedEntries; }
    inline bool FailedEntriesHasBeenSet() const { return m_failedEntriesHasBeenSet; }
    inline void SetFailedEntries(long long value) { m_failedEntriesHasBeenSet = true; m_failedEntries = value; }
    inline ImportStatistics& WithFailedEntries(long long value) { SetFailedEntries(value); return *this;}
    ///@}
  private:

    long long m_prefixesFound{0};
    bool m_prefixesFoundHasBeenSet = false;

    long long m_prefixesCompleted{0};
    bool m_prefixesCompletedHasBeenSet = false;

    long long m_filesCompleted{0};
    bool m_filesCompletedHasBeenSet = false;

    long long m_eventsCompleted{0};
    bool m_eventsCompletedHasBeenSet = false;

    long long m_failedEntries{0};
    bool m_failedEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
