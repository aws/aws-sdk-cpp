/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Unit.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Defines the minimum amount of time since last access for a file to be
   * eligible for release. Only files that have been exported to S3 and that were
   * last accessed or modified before this point-in-time are eligible to be released
   * from the Amazon FSx for Lustre file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DurationSinceLastAccess">AWS
   * API Reference</a></p>
   */
  class DurationSinceLastAccess
  {
  public:
    AWS_FSX_API DurationSinceLastAccess();
    AWS_FSX_API DurationSinceLastAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DurationSinceLastAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline DurationSinceLastAccess& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of time used by the <code>Value</code> parameter to determine if a
     * file can be released, based on when it was last accessed. <code>DAYS</code> is
     * the only supported value. This is a required parameter.</p>
     */
    inline DurationSinceLastAccess& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>An integer that represents the minimum amount of time (in days) since a file
     * was last accessed in the file system. Only exported files with a
     * <code>MAX(atime, ctime, mtime)</code> timestamp that is more than this amount of
     * time in the past (relative to the task create time) will be released. The
     * default of <code>Value</code> is <code>0</code>. This is a required
     * parameter.</p>  <p>If an exported file meets the last accessed time
     * criteria, its file or directory path must also be specified in the
     * <code>Paths</code> parameter of the operation in order for the file to be
     * released.</p> 
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>An integer that represents the minimum amount of time (in days) since a file
     * was last accessed in the file system. Only exported files with a
     * <code>MAX(atime, ctime, mtime)</code> timestamp that is more than this amount of
     * time in the past (relative to the task create time) will be released. The
     * default of <code>Value</code> is <code>0</code>. This is a required
     * parameter.</p>  <p>If an exported file meets the last accessed time
     * criteria, its file or directory path must also be specified in the
     * <code>Paths</code> parameter of the operation in order for the file to be
     * released.</p> 
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An integer that represents the minimum amount of time (in days) since a file
     * was last accessed in the file system. Only exported files with a
     * <code>MAX(atime, ctime, mtime)</code> timestamp that is more than this amount of
     * time in the past (relative to the task create time) will be released. The
     * default of <code>Value</code> is <code>0</code>. This is a required
     * parameter.</p>  <p>If an exported file meets the last accessed time
     * criteria, its file or directory path must also be specified in the
     * <code>Paths</code> parameter of the operation in order for the file to be
     * released.</p> 
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An integer that represents the minimum amount of time (in days) since a file
     * was last accessed in the file system. Only exported files with a
     * <code>MAX(atime, ctime, mtime)</code> timestamp that is more than this amount of
     * time in the past (relative to the task create time) will be released. The
     * default of <code>Value</code> is <code>0</code>. This is a required
     * parameter.</p>  <p>If an exported file meets the last accessed time
     * criteria, its file or directory path must also be specified in the
     * <code>Paths</code> parameter of the operation in order for the file to be
     * released.</p> 
     */
    inline DurationSinceLastAccess& WithValue(long long value) { SetValue(value); return *this;}

  private:

    Unit m_unit;
    bool m_unitHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
