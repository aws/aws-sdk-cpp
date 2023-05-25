/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A set of filters by which to return Recovery Snapshots.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoverySnapshotsRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeRecoverySnapshotsRequestFilters
  {
  public:
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters();
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start date in a date range query.</p>
     */
    inline const Aws::String& GetFromDateTime() const{ return m_fromDateTime; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline bool FromDateTimeHasBeenSet() const { return m_fromDateTimeHasBeenSet; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDateTime(const Aws::String& value) { m_fromDateTimeHasBeenSet = true; m_fromDateTime = value; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDateTime(Aws::String&& value) { m_fromDateTimeHasBeenSet = true; m_fromDateTime = std::move(value); }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDateTime(const char* value) { m_fromDateTimeHasBeenSet = true; m_fromDateTime.assign(value); }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithFromDateTime(const Aws::String& value) { SetFromDateTime(value); return *this;}

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithFromDateTime(Aws::String&& value) { SetFromDateTime(std::move(value)); return *this;}

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithFromDateTime(const char* value) { SetFromDateTime(value); return *this;}


    /**
     * <p>The end date in a date range query.</p>
     */
    inline const Aws::String& GetToDateTime() const{ return m_toDateTime; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline bool ToDateTimeHasBeenSet() const { return m_toDateTimeHasBeenSet; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDateTime(const Aws::String& value) { m_toDateTimeHasBeenSet = true; m_toDateTime = value; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDateTime(Aws::String&& value) { m_toDateTimeHasBeenSet = true; m_toDateTime = std::move(value); }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDateTime(const char* value) { m_toDateTimeHasBeenSet = true; m_toDateTime.assign(value); }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithToDateTime(const Aws::String& value) { SetToDateTime(value); return *this;}

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithToDateTime(Aws::String&& value) { SetToDateTime(std::move(value)); return *this;}

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeRecoverySnapshotsRequestFilters& WithToDateTime(const char* value) { SetToDateTime(value); return *this;}

  private:

    Aws::String m_fromDateTime;
    bool m_fromDateTimeHasBeenSet = false;

    Aws::String m_toDateTime;
    bool m_toDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
