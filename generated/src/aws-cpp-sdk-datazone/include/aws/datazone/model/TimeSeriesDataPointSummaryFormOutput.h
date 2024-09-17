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
   * <p>The summary of the time series data points form.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TimeSeriesDataPointSummaryFormOutput">AWS
   * API Reference</a></p>
   */
  class TimeSeriesDataPointSummaryFormOutput
  {
  public:
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput();
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the summary of the time series data points form.</p>
     */
    inline const Aws::String& GetContentSummary() const{ return m_contentSummary; }
    inline bool ContentSummaryHasBeenSet() const { return m_contentSummaryHasBeenSet; }
    inline void SetContentSummary(const Aws::String& value) { m_contentSummaryHasBeenSet = true; m_contentSummary = value; }
    inline void SetContentSummary(Aws::String&& value) { m_contentSummaryHasBeenSet = true; m_contentSummary = std::move(value); }
    inline void SetContentSummary(const char* value) { m_contentSummaryHasBeenSet = true; m_contentSummary.assign(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithContentSummary(const Aws::String& value) { SetContentSummary(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithContentSummary(Aws::String&& value) { SetContentSummary(std::move(value)); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithContentSummary(const char* value) { SetContentSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series data points summary form.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithFormName(const char* value) { SetFormName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the time series data points summary form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time series data points summary form.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type ID of the time series data points summary form.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type revision of the time series data points summary form.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}
    inline TimeSeriesDataPointSummaryFormOutput& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_contentSummary;
    bool m_contentSummaryHasBeenSet = false;

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
