/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The configuration for an Iceberg orphan file deletion
   * optimizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergOrphanFileDeletionConfiguration">AWS
   * API Reference</a></p>
   */
  class IcebergOrphanFileDeletionConfiguration
  {
  public:
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration() = default;
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days that orphan files should be retained before file deletion.
     * If an input is not provided, the default value 3 will be used.</p>
     */
    inline int GetOrphanFileRetentionPeriodInDays() const { return m_orphanFileRetentionPeriodInDays; }
    inline bool OrphanFileRetentionPeriodInDaysHasBeenSet() const { return m_orphanFileRetentionPeriodInDaysHasBeenSet; }
    inline void SetOrphanFileRetentionPeriodInDays(int value) { m_orphanFileRetentionPeriodInDaysHasBeenSet = true; m_orphanFileRetentionPeriodInDays = value; }
    inline IcebergOrphanFileDeletionConfiguration& WithOrphanFileRetentionPeriodInDays(int value) { SetOrphanFileRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a directory in which to look for files (defaults to the table's
     * location). You may choose a sub-directory rather than the top-level table
     * location.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    IcebergOrphanFileDeletionConfiguration& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval in hours between orphan file deletion job runs. This parameter
     * controls how frequently the orphan file deletion optimizer will run to clean up
     * orphan files. The value must be between 3 and 168 hours (7 days). If an input is
     * not provided, the default value 24 will be used.</p>
     */
    inline int GetRunRateInHours() const { return m_runRateInHours; }
    inline bool RunRateInHoursHasBeenSet() const { return m_runRateInHoursHasBeenSet; }
    inline void SetRunRateInHours(int value) { m_runRateInHoursHasBeenSet = true; m_runRateInHours = value; }
    inline IcebergOrphanFileDeletionConfiguration& WithRunRateInHours(int value) { SetRunRateInHours(value); return *this;}
    ///@}
  private:

    int m_orphanFileRetentionPeriodInDays{0};
    bool m_orphanFileRetentionPeriodInDaysHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    int m_runRateInHours{0};
    bool m_runRateInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
