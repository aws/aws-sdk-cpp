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
    AWS_FINSPACE_API KxDataviewSegmentConfiguration() = default;
    AWS_FINSPACE_API KxDataviewSegmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewSegmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The database path of the data that you want to place on each selected volume
     * for the segment. Each segment must have a unique database path for each
     * volume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbPaths() const { return m_dbPaths; }
    inline bool DbPathsHasBeenSet() const { return m_dbPathsHasBeenSet; }
    template<typename DbPathsT = Aws::Vector<Aws::String>>
    void SetDbPaths(DbPathsT&& value) { m_dbPathsHasBeenSet = true; m_dbPaths = std::forward<DbPathsT>(value); }
    template<typename DbPathsT = Aws::Vector<Aws::String>>
    KxDataviewSegmentConfiguration& WithDbPaths(DbPathsT&& value) { SetDbPaths(std::forward<DbPathsT>(value)); return *this;}
    template<typename DbPathsT = Aws::String>
    KxDataviewSegmentConfiguration& AddDbPaths(DbPathsT&& value) { m_dbPathsHasBeenSet = true; m_dbPaths.emplace_back(std::forward<DbPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the volume where you want to add data. </p>
     */
    inline const Aws::String& GetVolumeName() const { return m_volumeName; }
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
    template<typename VolumeNameT = Aws::String>
    void SetVolumeName(VolumeNameT&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::forward<VolumeNameT>(value); }
    template<typename VolumeNameT = Aws::String>
    KxDataviewSegmentConfiguration& WithVolumeName(VolumeNameT&& value) { SetVolumeName(std::forward<VolumeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables on-demand caching on the selected database path when a particular
     * file or a column of the database is accessed. When on demand caching is
     * <b>True</b>, dataviews perform minimal loading of files on the filesystem as
     * needed. When it is set to <b>False</b>, everything is cached. The default value
     * is <b>False</b>. </p>
     */
    inline bool GetOnDemand() const { return m_onDemand; }
    inline bool OnDemandHasBeenSet() const { return m_onDemandHasBeenSet; }
    inline void SetOnDemand(bool value) { m_onDemandHasBeenSet = true; m_onDemand = value; }
    inline KxDataviewSegmentConfiguration& WithOnDemand(bool value) { SetOnDemand(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dbPaths;
    bool m_dbPathsHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    bool m_onDemand{false};
    bool m_onDemandHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
