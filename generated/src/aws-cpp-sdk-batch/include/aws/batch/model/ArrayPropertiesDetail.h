/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the array properties of a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ArrayPropertiesDetail">AWS
   * API Reference</a></p>
   */
  class ArrayPropertiesDetail
  {
  public:
    AWS_BATCH_API ArrayPropertiesDetail();
    AWS_BATCH_API ArrayPropertiesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ArrayPropertiesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetStatusSummary() const{ return m_statusSummary; }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline void SetStatusSummary(const Aws::Map<Aws::String, int>& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline void SetStatusSummary(Aws::Map<Aws::String, int>&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline ArrayPropertiesDetail& WithStatusSummary(const Aws::Map<Aws::String, int>& value) { SetStatusSummary(value); return *this;}

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline ArrayPropertiesDetail& WithStatusSummary(Aws::Map<Aws::String, int>&& value) { SetStatusSummary(std::move(value)); return *this;}

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline ArrayPropertiesDetail& AddStatusSummary(const Aws::String& key, int value) { m_statusSummaryHasBeenSet = true; m_statusSummary.emplace(key, value); return *this; }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline ArrayPropertiesDetail& AddStatusSummary(Aws::String&& key, int value) { m_statusSummaryHasBeenSet = true; m_statusSummary.emplace(std::move(key), value); return *this; }

    /**
     * <p>A summary of the number of array job children in each available job status.
     * This parameter is returned for parent array jobs.</p>
     */
    inline ArrayPropertiesDetail& AddStatusSummary(const char* key, int value) { m_statusSummaryHasBeenSet = true; m_statusSummary.emplace(key, value); return *this; }


    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline ArrayPropertiesDetail& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The job index within the array that's associated with this job. This
     * parameter is returned for array job children.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The job index within the array that's associated with this job. This
     * parameter is returned for array job children.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The job index within the array that's associated with this job. This
     * parameter is returned for array job children.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The job index within the array that's associated with this job. This
     * parameter is returned for array job children.</p>
     */
    inline ArrayPropertiesDetail& WithIndex(int value) { SetIndex(value); return *this;}

  private:

    Aws::Map<Aws::String, int> m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    int m_index;
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
