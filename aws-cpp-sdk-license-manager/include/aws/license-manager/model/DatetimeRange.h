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
    AWS_LICENSEMANAGER_API DatetimeRange();
    AWS_LICENSEMANAGER_API DatetimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API DatetimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Start of the time range.</p>
     */
    inline const Aws::String& GetBegin() const{ return m_begin; }

    /**
     * <p>Start of the time range.</p>
     */
    inline bool BeginHasBeenSet() const { return m_beginHasBeenSet; }

    /**
     * <p>Start of the time range.</p>
     */
    inline void SetBegin(const Aws::String& value) { m_beginHasBeenSet = true; m_begin = value; }

    /**
     * <p>Start of the time range.</p>
     */
    inline void SetBegin(Aws::String&& value) { m_beginHasBeenSet = true; m_begin = std::move(value); }

    /**
     * <p>Start of the time range.</p>
     */
    inline void SetBegin(const char* value) { m_beginHasBeenSet = true; m_begin.assign(value); }

    /**
     * <p>Start of the time range.</p>
     */
    inline DatetimeRange& WithBegin(const Aws::String& value) { SetBegin(value); return *this;}

    /**
     * <p>Start of the time range.</p>
     */
    inline DatetimeRange& WithBegin(Aws::String&& value) { SetBegin(std::move(value)); return *this;}

    /**
     * <p>Start of the time range.</p>
     */
    inline DatetimeRange& WithBegin(const char* value) { SetBegin(value); return *this;}


    /**
     * <p>End of the time range.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>End of the time range.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>End of the time range.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>End of the time range.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>End of the time range.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>End of the time range.</p>
     */
    inline DatetimeRange& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>End of the time range.</p>
     */
    inline DatetimeRange& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>End of the time range.</p>
     */
    inline DatetimeRange& WithEnd(const char* value) { SetEnd(value); return *this;}

  private:

    Aws::String m_begin;
    bool m_beginHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
