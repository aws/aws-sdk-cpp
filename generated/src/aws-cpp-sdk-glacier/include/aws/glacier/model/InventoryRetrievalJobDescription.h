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
    AWS_GLACIER_API InventoryRetrievalJobDescription();
    AWS_GLACIER_API InventoryRetrievalJobDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API InventoryRetrievalJobDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output format for the vault inventory list, which is set by the
     * <b>InitiateJob</b> request when initiating a job to retrieve a vault inventory.
     * Valid values are <code>CSV</code> and <code>JSON</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline InventoryRetrievalJobDescription& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline InventoryRetrievalJobDescription& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline InventoryRetrievalJobDescription& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the date range in Universal Coordinated Time (UTC) for vault
     * inventory retrieval that includes archives created on or after this date. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline InventoryRetrievalJobDescription& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline InventoryRetrievalJobDescription& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline InventoryRetrievalJobDescription& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }
    inline InventoryRetrievalJobDescription& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline InventoryRetrievalJobDescription& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline InventoryRetrievalJobDescription& WithEndDate(const char* value) { SetEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inventory items returned per vault inventory retrieval
     * request. This limit is set when initiating the job with the a <b>InitiateJob</b>
     * request. </p>
     */
    inline const Aws::String& GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(const Aws::String& value) { m_limitHasBeenSet = true; m_limit = value; }
    inline void SetLimit(Aws::String&& value) { m_limitHasBeenSet = true; m_limit = std::move(value); }
    inline void SetLimit(const char* value) { m_limitHasBeenSet = true; m_limit.assign(value); }
    inline InventoryRetrievalJobDescription& WithLimit(const Aws::String& value) { SetLimit(value); return *this;}
    inline InventoryRetrievalJobDescription& WithLimit(Aws::String&& value) { SetLimit(std::move(value)); return *this;}
    inline InventoryRetrievalJobDescription& WithLimit(const char* value) { SetLimit(value); return *this;}
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
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline InventoryRetrievalJobDescription& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline InventoryRetrievalJobDescription& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline InventoryRetrievalJobDescription& WithMarker(const char* value) { SetMarker(value); return *this;}
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
