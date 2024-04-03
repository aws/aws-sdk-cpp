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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TimeSeriesDataPointFormOutput">AWS
   * API Reference</a></p>
   */
  class TimeSeriesDataPointFormOutput
  {
  public:
    AWS_DATAZONE_API TimeSeriesDataPointFormOutput();
    AWS_DATAZONE_API TimeSeriesDataPointFormOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TimeSeriesDataPointFormOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TimeSeriesDataPointFormOutput& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithContent(const char* value) { SetContent(value); return *this;}


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
    inline TimeSeriesDataPointFormOutput& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}

    /**
     * <p>The name of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithFormName(const char* value) { SetFormName(value); return *this;}


    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithId(const char* value) { SetId(value); return *this;}


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
    inline TimeSeriesDataPointFormOutput& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


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
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}


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
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
