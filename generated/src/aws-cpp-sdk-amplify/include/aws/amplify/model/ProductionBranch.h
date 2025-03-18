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
    AWS_AMPLIFY_API ProductionBranch() = default;
    AWS_AMPLIFY_API ProductionBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API ProductionBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last deploy time of the production branch. </p>
     */
    inline const Aws::Utils::DateTime& GetLastDeployTime() const { return m_lastDeployTime; }
    inline bool LastDeployTimeHasBeenSet() const { return m_lastDeployTimeHasBeenSet; }
    template<typename LastDeployTimeT = Aws::Utils::DateTime>
    void SetLastDeployTime(LastDeployTimeT&& value) { m_lastDeployTimeHasBeenSet = true; m_lastDeployTime = std::forward<LastDeployTimeT>(value); }
    template<typename LastDeployTimeT = Aws::Utils::DateTime>
    ProductionBranch& WithLastDeployTime(LastDeployTimeT&& value) { SetLastDeployTime(std::forward<LastDeployTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the production branch. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ProductionBranch& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thumbnail URL for the production branch. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const { return m_thumbnailUrl; }
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
    template<typename ThumbnailUrlT = Aws::String>
    void SetThumbnailUrl(ThumbnailUrlT&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::forward<ThumbnailUrlT>(value); }
    template<typename ThumbnailUrlT = Aws::String>
    ProductionBranch& WithThumbnailUrl(ThumbnailUrlT&& value) { SetThumbnailUrl(std::forward<ThumbnailUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch name for the production branch. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    ProductionBranch& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastDeployTime{};
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
