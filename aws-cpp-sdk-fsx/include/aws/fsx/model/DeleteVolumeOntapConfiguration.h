/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
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
   * <p>Use to specify skipping a final backup, or to add tags to a final
   * backup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteVolumeOntapConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteVolumeOntapConfiguration
  {
  public:
    AWS_FSX_API DeleteVolumeOntapConfiguration();
    AWS_FSX_API DeleteVolumeOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteVolumeOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline bool GetSkipFinalBackup() const{ return m_skipFinalBackup; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline DeleteVolumeOntapConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    
    inline DeleteVolumeOntapConfiguration& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    
    inline DeleteVolumeOntapConfiguration& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    
    inline DeleteVolumeOntapConfiguration& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    
    inline DeleteVolumeOntapConfiguration& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }

  private:

    bool m_skipFinalBackup;
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
