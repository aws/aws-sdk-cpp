/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ReprocessingStatus.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about pipeline reprocessing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ReprocessingSummary">AWS
   * API Reference</a></p>
   */
  class ReprocessingSummary
  {
  public:
    AWS_IOTANALYTICS_API ReprocessingSummary();
    AWS_IOTANALYTICS_API ReprocessingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ReprocessingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline ReprocessingSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline ReprocessingSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The <code>reprocessingId</code> returned by
     * <code>StartPipelineReprocessing</code>.</p>
     */
    inline ReprocessingSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline const ReprocessingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline void SetStatus(const ReprocessingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline void SetStatus(ReprocessingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline ReprocessingSummary& WithStatus(const ReprocessingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the pipeline reprocessing.</p>
     */
    inline ReprocessingSummary& WithStatus(ReprocessingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline ReprocessingSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the pipeline reprocessing was created.</p>
     */
    inline ReprocessingSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ReprocessingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
