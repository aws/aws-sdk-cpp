/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Represents the timeline of the cluster's lifecycle.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ClusterTimeline">AWS
   * API Reference</a></p>
   */
  class ClusterTimeline
  {
  public:
    AWS_EMR_API ClusterTimeline();
    AWS_EMR_API ClusterTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ClusterTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline ClusterTimeline& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the cluster.</p>
     */
    inline ClusterTimeline& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }

    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline ClusterTimeline& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster was ready to run steps.</p>
     */
    inline ClusterTimeline& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline ClusterTimeline& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster was terminated.</p>
     */
    inline ClusterTimeline& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readyDateTime;
    bool m_readyDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
