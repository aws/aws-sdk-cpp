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
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration();
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergOrphanFileDeletionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days that orphan files should be retained before file deletion.
     * If an input is not provided, the default value 3 will be used.</p>
     */
    inline int GetOrphanFileRetentionPeriodInDays() const{ return m_orphanFileRetentionPeriodInDays; }
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
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline IcebergOrphanFileDeletionConfiguration& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline IcebergOrphanFileDeletionConfiguration& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline IcebergOrphanFileDeletionConfiguration& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
  private:

    int m_orphanFileRetentionPeriodInDays;
    bool m_orphanFileRetentionPeriodInDaysHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
