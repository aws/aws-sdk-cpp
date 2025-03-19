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
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput() = default;
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TimeSeriesDataPointSummaryFormOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the summary of the time series data points form.</p>
     */
    inline const Aws::String& GetContentSummary() const { return m_contentSummary; }
    inline bool ContentSummaryHasBeenSet() const { return m_contentSummaryHasBeenSet; }
    template<typename ContentSummaryT = Aws::String>
    void SetContentSummary(ContentSummaryT&& value) { m_contentSummaryHasBeenSet = true; m_contentSummary = std::forward<ContentSummaryT>(value); }
    template<typename ContentSummaryT = Aws::String>
    TimeSeriesDataPointSummaryFormOutput& WithContentSummary(ContentSummaryT&& value) { SetContentSummary(std::forward<ContentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series data points summary form.</p>
     */
    inline const Aws::String& GetFormName() const { return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    template<typename FormNameT = Aws::String>
    void SetFormName(FormNameT&& value) { m_formNameHasBeenSet = true; m_formName = std::forward<FormNameT>(value); }
    template<typename FormNameT = Aws::String>
    TimeSeriesDataPointSummaryFormOutput& WithFormName(FormNameT&& value) { SetFormName(std::forward<FormNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the time series data points summary form.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TimeSeriesDataPointSummaryFormOutput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time series data points summary form.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    TimeSeriesDataPointSummaryFormOutput& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type ID of the time series data points summary form.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const { return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    template<typename TypeIdentifierT = Aws::String>
    void SetTypeIdentifier(TypeIdentifierT&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::forward<TypeIdentifierT>(value); }
    template<typename TypeIdentifierT = Aws::String>
    TimeSeriesDataPointSummaryFormOutput& WithTypeIdentifier(TypeIdentifierT&& value) { SetTypeIdentifier(std::forward<TypeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type revision of the time series data points summary form.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    TimeSeriesDataPointSummaryFormOutput& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentSummary;
    bool m_contentSummaryHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
