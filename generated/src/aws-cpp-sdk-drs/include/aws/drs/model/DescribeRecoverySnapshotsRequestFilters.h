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
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters() = default;
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeRecoverySnapshotsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start date in a date range query.</p>
     */
    inline const Aws::String& GetFromDateTime() const { return m_fromDateTime; }
    inline bool FromDateTimeHasBeenSet() const { return m_fromDateTimeHasBeenSet; }
    template<typename FromDateTimeT = Aws::String>
    void SetFromDateTime(FromDateTimeT&& value) { m_fromDateTimeHasBeenSet = true; m_fromDateTime = std::forward<FromDateTimeT>(value); }
    template<typename FromDateTimeT = Aws::String>
    DescribeRecoverySnapshotsRequestFilters& WithFromDateTime(FromDateTimeT&& value) { SetFromDateTime(std::forward<FromDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date in a date range query.</p>
     */
    inline const Aws::String& GetToDateTime() const { return m_toDateTime; }
    inline bool ToDateTimeHasBeenSet() const { return m_toDateTimeHasBeenSet; }
    template<typename ToDateTimeT = Aws::String>
    void SetToDateTime(ToDateTimeT&& value) { m_toDateTimeHasBeenSet = true; m_toDateTime = std::forward<ToDateTimeT>(value); }
    template<typename ToDateTimeT = Aws::String>
    DescribeRecoverySnapshotsRequestFilters& WithToDateTime(ToDateTimeT&& value) { SetToDateTime(std::forward<ToDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fromDateTime;
    bool m_fromDateTimeHasBeenSet = false;

    Aws::String m_toDateTime;
    bool m_toDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
