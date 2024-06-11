/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is a resource filter containing FromDate: DateTime and ToDate: DateTime.
   * Both values are required. Future DateTime values are not permitted.</p> <p>The
   * date and time are in Unix format and Coordinated Universal Time (UTC), and it is
   * accurate to milliseconds ((milliseconds are optional). For example, the value
   * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
   * AM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DateRange">AWS
   * API Reference</a></p>
   */
  class DateRange
  {
  public:
    AWS_BACKUP_API DateRange();
    AWS_BACKUP_API DateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API DateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This value is the beginning date, inclusive.</p> <p>The date and time are in
     * Unix format and Coordinated Universal Time (UTC), and it is accurate to
     * milliseconds (milliseconds are optional).</p>
     */
    inline const Aws::Utils::DateTime& GetFromDate() const{ return m_fromDate; }
    inline bool FromDateHasBeenSet() const { return m_fromDateHasBeenSet; }
    inline void SetFromDate(const Aws::Utils::DateTime& value) { m_fromDateHasBeenSet = true; m_fromDate = value; }
    inline void SetFromDate(Aws::Utils::DateTime&& value) { m_fromDateHasBeenSet = true; m_fromDate = std::move(value); }
    inline DateRange& WithFromDate(const Aws::Utils::DateTime& value) { SetFromDate(value); return *this;}
    inline DateRange& WithFromDate(Aws::Utils::DateTime&& value) { SetFromDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the end date, inclusive.</p> <p>The date and time are in Unix
     * format and Coordinated Universal Time (UTC), and it is accurate to milliseconds
     * (milliseconds are optional).</p>
     */
    inline const Aws::Utils::DateTime& GetToDate() const{ return m_toDate; }
    inline bool ToDateHasBeenSet() const { return m_toDateHasBeenSet; }
    inline void SetToDate(const Aws::Utils::DateTime& value) { m_toDateHasBeenSet = true; m_toDate = value; }
    inline void SetToDate(Aws::Utils::DateTime&& value) { m_toDateHasBeenSet = true; m_toDate = std::move(value); }
    inline DateRange& WithToDate(const Aws::Utils::DateTime& value) { SetToDate(value); return *this;}
    inline DateRange& WithToDate(Aws::Utils::DateTime&& value) { SetToDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_fromDate;
    bool m_fromDateHasBeenSet = false;

    Aws::Utils::DateTime m_toDate;
    bool m_toDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
