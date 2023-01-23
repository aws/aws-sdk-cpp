/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response object for the Amazon FSx for NetApp ONTAP volume being deleted
   * in the <code>DeleteVolume</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteVolumeOntapResponse">AWS
   * API Reference</a></p>
   */
  class DeleteVolumeOntapResponse
  {
  public:
    AWS_FSX_API DeleteVolumeOntapResponse();
    AWS_FSX_API DeleteVolumeOntapResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteVolumeOntapResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetFinalBackupId() const{ return m_finalBackupId; }

    
    inline bool FinalBackupIdHasBeenSet() const { return m_finalBackupIdHasBeenSet; }

    
    inline void SetFinalBackupId(const Aws::String& value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId = value; }

    
    inline void SetFinalBackupId(Aws::String&& value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId = std::move(value); }

    
    inline void SetFinalBackupId(const char* value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId.assign(value); }

    
    inline DeleteVolumeOntapResponse& WithFinalBackupId(const Aws::String& value) { SetFinalBackupId(value); return *this;}

    
    inline DeleteVolumeOntapResponse& WithFinalBackupId(Aws::String&& value) { SetFinalBackupId(std::move(value)); return *this;}

    
    inline DeleteVolumeOntapResponse& WithFinalBackupId(const char* value) { SetFinalBackupId(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    
    inline DeleteVolumeOntapResponse& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    
    inline DeleteVolumeOntapResponse& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    
    inline DeleteVolumeOntapResponse& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    
    inline DeleteVolumeOntapResponse& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_finalBackupId;
    bool m_finalBackupIdHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
