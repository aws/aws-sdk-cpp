/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>The latest known metered size (in bytes) of data stored in the file system,
   * in its <code>Value</code> field, and the time at which that size was determined
   * in its <code>Timestamp</code> field. The value doesn't represent the size of a
   * consistent snapshot of the file system, but it is eventually consistent when
   * there are no writes to the file system. That is, the value represents the actual
   * size only if the file system is not modified for a period longer than a couple
   * of hours. Otherwise, the value is not necessarily the exact size the file system
   * was at any instant in time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/FileSystemSize">AWS
   * API Reference</a></p>
   */
  class FileSystemSize
  {
  public:
    AWS_EFS_API FileSystemSize() = default;
    AWS_EFS_API FileSystemSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API FileSystemSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest known metered size (in bytes) of data stored in the file
     * system.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline FileSystemSize& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the size of data, returned in the <code>Value</code> field,
     * was determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    FileSystemSize& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest known metered size (in bytes) of data stored in the Infrequent
     * Access storage class.</p>
     */
    inline long long GetValueInIA() const { return m_valueInIA; }
    inline bool ValueInIAHasBeenSet() const { return m_valueInIAHasBeenSet; }
    inline void SetValueInIA(long long value) { m_valueInIAHasBeenSet = true; m_valueInIA = value; }
    inline FileSystemSize& WithValueInIA(long long value) { SetValueInIA(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest known metered size (in bytes) of data stored in the Standard
     * storage class.</p>
     */
    inline long long GetValueInStandard() const { return m_valueInStandard; }
    inline bool ValueInStandardHasBeenSet() const { return m_valueInStandardHasBeenSet; }
    inline void SetValueInStandard(long long value) { m_valueInStandardHasBeenSet = true; m_valueInStandard = value; }
    inline FileSystemSize& WithValueInStandard(long long value) { SetValueInStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest known metered size (in bytes) of data stored in the Archive
     * storage class.</p>
     */
    inline long long GetValueInArchive() const { return m_valueInArchive; }
    inline bool ValueInArchiveHasBeenSet() const { return m_valueInArchiveHasBeenSet; }
    inline void SetValueInArchive(long long value) { m_valueInArchiveHasBeenSet = true; m_valueInArchive = value; }
    inline FileSystemSize& WithValueInArchive(long long value) { SetValueInArchive(value); return *this;}
    ///@}
  private:

    long long m_value{0};
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    long long m_valueInIA{0};
    bool m_valueInIAHasBeenSet = false;

    long long m_valueInStandard{0};
    bool m_valueInStandardHasBeenSet = false;

    long long m_valueInArchive{0};
    bool m_valueInArchiveHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
