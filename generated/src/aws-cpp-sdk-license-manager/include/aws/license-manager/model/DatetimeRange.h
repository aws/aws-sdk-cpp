/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes a time range, in ISO8601-UTC format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DatetimeRange">AWS
   * API Reference</a></p>
   */
  class DatetimeRange
  {
  public:
    AWS_LICENSEMANAGER_API DatetimeRange() = default;
    AWS_LICENSEMANAGER_API DatetimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API DatetimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start of the time range.</p>
     */
    inline const Aws::String& GetBegin() const { return m_begin; }
    inline bool BeginHasBeenSet() const { return m_beginHasBeenSet; }
    template<typename BeginT = Aws::String>
    void SetBegin(BeginT&& value) { m_beginHasBeenSet = true; m_begin = std::forward<BeginT>(value); }
    template<typename BeginT = Aws::String>
    DatetimeRange& WithBegin(BeginT&& value) { SetBegin(std::forward<BeginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>End of the time range.</p>
     */
    inline const Aws::String& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::String>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::String>
    DatetimeRange& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_begin;
    bool m_beginHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
