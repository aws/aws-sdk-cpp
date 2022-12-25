/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/DeleteOpenZFSVolumeOption.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A value that specifies whether to delete all child volumes and snapshots.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteVolumeOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteVolumeOpenZFSConfiguration
  {
  public:
    AWS_FSX_API DeleteVolumeOpenZFSConfiguration();
    AWS_FSX_API DeleteVolumeOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteVolumeOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline const Aws::Vector<DeleteOpenZFSVolumeOption>& GetOptions() const{ return m_options; }

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline void SetOptions(const Aws::Vector<DeleteOpenZFSVolumeOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline void SetOptions(Aws::Vector<DeleteOpenZFSVolumeOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline DeleteVolumeOpenZFSConfiguration& WithOptions(const Aws::Vector<DeleteOpenZFSVolumeOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline DeleteVolumeOpenZFSConfiguration& WithOptions(Aws::Vector<DeleteOpenZFSVolumeOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline DeleteVolumeOpenZFSConfiguration& AddOptions(const DeleteOpenZFSVolumeOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>To delete the volume's child volumes, snapshots, and clones, use the string
     * <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>.</p>
     */
    inline DeleteVolumeOpenZFSConfiguration& AddOptions(DeleteOpenZFSVolumeOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeleteOpenZFSVolumeOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
