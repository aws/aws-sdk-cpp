/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Describes the options for a range inventory retrieval job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InventoryRetrievalJobDescription">AWS
   * API Reference</a></p>
   */
  class InventoryRetrievalJobDescription
  {
  public:
    AWS_GLACIER_API InventoryRetrievalJobDescription() = default;
    AWS_GLACIER_API InventoryRetrievalJobDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API InventoryRetrievalJobDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output format for the vault inventory list, which is set by the
     * <b>InitiateJob</b> request when initiating a job to retrieve a vault inventory.
     * Valid values are <code>CSV</code> and <code>JSON</code>.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    InventoryRetrievalJobDescription& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the date range in Universal Coordinated Time (UTC) for vault
     * inventory retrieval that includes archives created on or after this date. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::String>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::String>
    InventoryRetrievalJobDescription& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::String>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::String>
    InventoryRetrievalJobDescription& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inventory items returned per vault inventory retrieval
     * request. This limit is set when initiating the job with the a <b>InitiateJob</b>
     * request. </p>
     */
    inline const Aws::String& GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    template<typename LimitT = Aws::String>
    void SetLimit(LimitT&& value) { m_limitHasBeenSet = true; m_limit = std::forward<LimitT>(value); }
    template<typename LimitT = Aws::String>
    InventoryRetrievalJobDescription& WithLimit(LimitT&& value) { SetLimit(std::forward<LimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-initiate-job-post.html#api-initiate-job-post-vault-inventory-list-filtering">
     * Range Inventory Retrieval</a>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    InventoryRetrievalJobDescription& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
