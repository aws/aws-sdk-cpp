/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents additional options for correct interpretation of datetime
   * parameters used in the Amazon S3 path of a dataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DatetimeOptions">AWS
   * API Reference</a></p>
   */
  class DatetimeOptions
  {
  public:
    AWS_GLUEDATABREW_API DatetimeOptions();
    AWS_GLUEDATABREW_API DatetimeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatetimeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline DatetimeOptions& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline DatetimeOptions& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>Required option, that defines the datetime format used for a date parameter
     * in the Amazon S3 path. Should use only supported datetime specifiers and
     * separation characters, all literal a-z or A-Z characters should be escaped with
     * single quotes. E.g. "MM.dd.yyyy-'at'-HH:mm".</p>
     */
    inline DatetimeOptions& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline const Aws::String& GetTimezoneOffset() const{ return m_timezoneOffset; }

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline bool TimezoneOffsetHasBeenSet() const { return m_timezoneOffsetHasBeenSet; }

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline void SetTimezoneOffset(const Aws::String& value) { m_timezoneOffsetHasBeenSet = true; m_timezoneOffset = value; }

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline void SetTimezoneOffset(Aws::String&& value) { m_timezoneOffsetHasBeenSet = true; m_timezoneOffset = std::move(value); }

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline void SetTimezoneOffset(const char* value) { m_timezoneOffsetHasBeenSet = true; m_timezoneOffset.assign(value); }

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline DatetimeOptions& WithTimezoneOffset(const Aws::String& value) { SetTimezoneOffset(value); return *this;}

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline DatetimeOptions& WithTimezoneOffset(Aws::String&& value) { SetTimezoneOffset(std::move(value)); return *this;}

    /**
     * <p>Optional value for a timezone offset of the datetime parameter value in the
     * Amazon S3 path. Shouldn't be used if Format for this parameter includes timezone
     * fields. If no offset specified, UTC is assumed.</p>
     */
    inline DatetimeOptions& WithTimezoneOffset(const char* value) { SetTimezoneOffset(value); return *this;}


    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline const Aws::String& GetLocaleCode() const{ return m_localeCode; }

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline bool LocaleCodeHasBeenSet() const { return m_localeCodeHasBeenSet; }

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline void SetLocaleCode(const Aws::String& value) { m_localeCodeHasBeenSet = true; m_localeCode = value; }

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline void SetLocaleCode(Aws::String&& value) { m_localeCodeHasBeenSet = true; m_localeCode = std::move(value); }

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline void SetLocaleCode(const char* value) { m_localeCodeHasBeenSet = true; m_localeCode.assign(value); }

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline DatetimeOptions& WithLocaleCode(const Aws::String& value) { SetLocaleCode(value); return *this;}

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline DatetimeOptions& WithLocaleCode(Aws::String&& value) { SetLocaleCode(std::move(value)); return *this;}

    /**
     * <p>Optional value for a non-US locale code, needed for correct interpretation of
     * some date formats.</p>
     */
    inline DatetimeOptions& WithLocaleCode(const char* value) { SetLocaleCode(value); return *this;}

  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_timezoneOffset;
    bool m_timezoneOffsetHasBeenSet = false;

    Aws::String m_localeCode;
    bool m_localeCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
