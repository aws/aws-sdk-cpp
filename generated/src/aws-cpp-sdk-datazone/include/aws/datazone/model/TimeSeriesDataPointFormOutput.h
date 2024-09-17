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


    ///@{
    /**
     * <p>The content of the time series data points form.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline TimeSeriesDataPointFormOutput& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline TimeSeriesDataPointFormOutput& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series data points form.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }
    inline TimeSeriesDataPointFormOutput& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}
    inline TimeSeriesDataPointFormOutput& WithFormName(const char* value) { SetFormName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the time series data points form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TimeSeriesDataPointFormOutput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TimeSeriesDataPointFormOutput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time series data points form.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline TimeSeriesDataPointFormOutput& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the type of the time series data points form.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}
    inline TimeSeriesDataPointFormOutput& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision type of the time series data points form.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}
    inline TimeSeriesDataPointFormOutput& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}
    ///@}
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
