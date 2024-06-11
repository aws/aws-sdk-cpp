/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SearchContactsTimeRangeType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure of time range that you want to search results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchContactsTimeRange">AWS
   * API Reference</a></p>
   */
  class SearchContactsTimeRange
  {
  public:
    AWS_CONNECT_API SearchContactsTimeRange();
    AWS_CONNECT_API SearchContactsTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchContactsTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of timestamp to search.</p>
     */
    inline const SearchContactsTimeRangeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SearchContactsTimeRangeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SearchContactsTimeRangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SearchContactsTimeRange& WithType(const SearchContactsTimeRangeType& value) { SetType(value); return *this;}
    inline SearchContactsTimeRange& WithType(SearchContactsTimeRangeType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the time range.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline SearchContactsTimeRange& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline SearchContactsTimeRange& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the time range.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline SearchContactsTimeRange& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline SearchContactsTimeRange& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    SearchContactsTimeRangeType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
