/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/FlywheelStatus.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Filter the flywheels based on creation time or flywheel status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/FlywheelFilter">AWS
   * API Reference</a></p>
   */
  class FlywheelFilter
  {
  public:
    AWS_COMPREHEND_API FlywheelFilter();
    AWS_COMPREHEND_API FlywheelFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline const FlywheelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline void SetStatus(const FlywheelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline void SetStatus(FlywheelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline FlywheelFilter& WithStatus(const FlywheelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Filter the flywheels based on the flywheel status.</p>
     */
    inline FlywheelFilter& WithStatus(FlywheelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline FlywheelFilter& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Filter the flywheels to include flywheels created after the specified
     * time.</p>
     */
    inline FlywheelFilter& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline FlywheelFilter& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Filter the flywheels to include flywheels created before the specified
     * time.</p>
     */
    inline FlywheelFilter& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}

  private:

    FlywheelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
