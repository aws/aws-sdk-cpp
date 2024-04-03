/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The time series data points form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TimeSeriesDataPointFormInput">AWS
   * API Reference</a></p>
   */
  class TimeSeriesDataPointFormInput
  {
  public:
    AWS_DATAZONE_API TimeSeriesDataPointFormInput();
    AWS_DATAZONE_API TimeSeriesDataPointFormInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TimeSeriesDataPointFormInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the time series data points form.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The name of the time series data points form.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithFormName(const char* value) { SetFormName(value); return *this;}


    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}


    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormInput& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
