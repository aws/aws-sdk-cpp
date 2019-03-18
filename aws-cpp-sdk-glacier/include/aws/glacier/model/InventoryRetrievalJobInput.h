/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Provides options for specifying a range inventory retrieval
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InventoryRetrievalJobInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API InventoryRetrievalJobInput
  {
  public:
    InventoryRetrievalJobInput();
    InventoryRetrievalJobInput(Aws::Utils::Json::JsonView jsonValue);
    InventoryRetrievalJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The start of the date range in UTC for vault inventory retrieval that
     * includes archives created on or after this date. This value should be a string
     * in the ISO 8601 date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The end of the date range in UTC for vault inventory retrieval that includes
     * archives created before this date. This value should be a string in the ISO 8601
     * date format, for example <code>2013-03-20T17:03:43Z</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline const Aws::String& GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline void SetLimit(const Aws::String& value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline void SetLimit(Aws::String&& value) { m_limitHasBeenSet = true; m_limit = std::move(value); }

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline void SetLimit(const char* value) { m_limitHasBeenSet = true; m_limit.assign(value); }

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline InventoryRetrievalJobInput& WithLimit(const Aws::String& value) { SetLimit(value); return *this;}

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline InventoryRetrievalJobInput& WithLimit(Aws::String&& value) { SetLimit(std::move(value)); return *this;}

    /**
     * <p>Specifies the maximum number of inventory items returned per vault inventory
     * retrieval request. Valid values are greater than or equal to 1.</p>
     */
    inline InventoryRetrievalJobInput& WithLimit(const char* value) { SetLimit(value); return *this;}


    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the vault
     * inventory retrieval results. You use the marker in a new <b>InitiateJob</b>
     * request to obtain additional inventory items. If there are no more inventory
     * items, this value is <code>null</code>.</p>
     */
    inline InventoryRetrievalJobInput& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_startDate;
    bool m_startDateHasBeenSet;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet;

    Aws::String m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
