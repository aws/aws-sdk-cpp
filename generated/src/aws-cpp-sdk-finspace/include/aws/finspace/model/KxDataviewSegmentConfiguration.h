/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> The configuration that contains the database path of the data that you want
   * to place on each selected volume. Each segment must have a unique database path
   * for each volume. If you do not explicitly specify any database path for a
   * volume, they are accessible from the cluster through the default S3/object store
   * segment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDataviewSegmentConfiguration">AWS
   * API Reference</a></p>
   */
  class KxDataviewSegmentConfiguration
  {
  public:
    AWS_FINSPACE_API KxDataviewSegmentConfiguration();
    AWS_FINSPACE_API KxDataviewSegmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewSegmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbPaths() const{ return m_dbPaths; }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline bool DbPathsHasBeenSet() const { return m_dbPathsHasBeenSet; }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline void SetDbPaths(const Aws::Vector<Aws::String>& value) { m_dbPathsHasBeenSet = true; m_dbPaths = value; }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline void SetDbPaths(Aws::Vector<Aws::String>&& value) { m_dbPathsHasBeenSet = true; m_dbPaths = std::move(value); }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline KxDataviewSegmentConfiguration& WithDbPaths(const Aws::Vector<Aws::String>& value) { SetDbPaths(value); return *this;}

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline KxDataviewSegmentConfiguration& WithDbPaths(Aws::Vector<Aws::String>&& value) { SetDbPaths(std::move(value)); return *this;}

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline KxDataviewSegmentConfiguration& AddDbPaths(const Aws::String& value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(value); return *this; }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline KxDataviewSegmentConfiguration& AddDbPaths(Aws::String&& value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(std::move(value)); return *this; }

    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline KxDataviewSegmentConfiguration& AddDbPaths(const char* value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(value); return *this; }


    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline void SetVolumeName(const Aws::String& value) { m_volumeNameHasBeenSet = true; m_volumeName = value; }

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline void SetVolumeName(Aws::String&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::move(value); }

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline void SetVolumeName(const char* value) { m_volumeNameHasBeenSet = true; m_volumeName.assign(value); }

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline KxDataviewSegmentConfiguration& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline KxDataviewSegmentConfiguration& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}

    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline KxDataviewSegmentConfiguration& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dbPaths;
    bool m_dbPathsHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
