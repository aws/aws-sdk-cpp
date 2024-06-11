/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the information about a production branch for an Amplify app.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ProductionBranch">AWS
   * API Reference</a></p>
   */
  class ProductionBranch
  {
  public:
    AWS_AMPLIFY_API ProductionBranch();
    AWS_AMPLIFY_API ProductionBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API ProductionBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last deploy time of the production branch. </p>
     */
    inline const Aws::Utils::DateTime& GetLastDeployTime() const{ return m_lastDeployTime; }
    inline bool LastDeployTimeHasBeenSet() const { return m_lastDeployTimeHasBeenSet; }
    inline void SetLastDeployTime(const Aws::Utils::DateTime& value) { m_lastDeployTimeHasBeenSet = true; m_lastDeployTime = value; }
    inline void SetLastDeployTime(Aws::Utils::DateTime&& value) { m_lastDeployTimeHasBeenSet = true; m_lastDeployTime = std::move(value); }
    inline ProductionBranch& WithLastDeployTime(const Aws::Utils::DateTime& value) { SetLastDeployTime(value); return *this;}
    inline ProductionBranch& WithLastDeployTime(Aws::Utils::DateTime&& value) { SetLastDeployTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the production branch. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ProductionBranch& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ProductionBranch& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ProductionBranch& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thumbnail URL for the production branch. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const{ return m_thumbnailUrl; }
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
    inline void SetThumbnailUrl(const Aws::String& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = value; }
    inline void SetThumbnailUrl(Aws::String&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::move(value); }
    inline void SetThumbnailUrl(const char* value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl.assign(value); }
    inline ProductionBranch& WithThumbnailUrl(const Aws::String& value) { SetThumbnailUrl(value); return *this;}
    inline ProductionBranch& WithThumbnailUrl(Aws::String&& value) { SetThumbnailUrl(std::move(value)); return *this;}
    inline ProductionBranch& WithThumbnailUrl(const char* value) { SetThumbnailUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch name for the production branch. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline ProductionBranch& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline ProductionBranch& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline ProductionBranch& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastDeployTime;
    bool m_lastDeployTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_thumbnailUrl;
    bool m_thumbnailUrlHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
