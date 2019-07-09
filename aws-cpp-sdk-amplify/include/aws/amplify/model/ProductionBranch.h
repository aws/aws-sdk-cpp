/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Structure with Production Branch information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ProductionBranch">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ProductionBranch
  {
  public:
    ProductionBranch();
    ProductionBranch(Aws::Utils::Json::JsonView jsonValue);
    ProductionBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline const Aws::Utils::DateTime& GetLastDeployTime() const{ return m_lastDeployTime; }

    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline bool LastDeployTimeHasBeenSet() const { return m_lastDeployTimeHasBeenSet; }

    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline void SetLastDeployTime(const Aws::Utils::DateTime& value) { m_lastDeployTimeHasBeenSet = true; m_lastDeployTime = value; }

    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline void SetLastDeployTime(Aws::Utils::DateTime&& value) { m_lastDeployTimeHasBeenSet = true; m_lastDeployTime = std::move(value); }

    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline ProductionBranch& WithLastDeployTime(const Aws::Utils::DateTime& value) { SetLastDeployTime(value); return *this;}

    /**
     * <p> Last Deploy Time of Production Branch. </p>
     */
    inline ProductionBranch& WithLastDeployTime(Aws::Utils::DateTime&& value) { SetLastDeployTime(std::move(value)); return *this;}


    /**
     * <p> Status of Production Branch. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> Status of Production Branch. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status of Production Branch. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status of Production Branch. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status of Production Branch. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> Status of Production Branch. </p>
     */
    inline ProductionBranch& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of Production Branch. </p>
     */
    inline ProductionBranch& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> Status of Production Branch. </p>
     */
    inline ProductionBranch& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const{ return m_thumbnailUrl; }

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline void SetThumbnailUrl(const Aws::String& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = value; }

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline void SetThumbnailUrl(Aws::String&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::move(value); }

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline void SetThumbnailUrl(const char* value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl.assign(value); }

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline ProductionBranch& WithThumbnailUrl(const Aws::String& value) { SetThumbnailUrl(value); return *this;}

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline ProductionBranch& WithThumbnailUrl(Aws::String&& value) { SetThumbnailUrl(std::move(value)); return *this;}

    /**
     * <p> Thumbnail URL for Production Branch. </p>
     */
    inline ProductionBranch& WithThumbnailUrl(const char* value) { SetThumbnailUrl(value); return *this;}


    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline ProductionBranch& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline ProductionBranch& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Branch Name for Production Branch. </p>
     */
    inline ProductionBranch& WithBranchName(const char* value) { SetBranchName(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastDeployTime;
    bool m_lastDeployTimeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_thumbnailUrl;
    bool m_thumbnailUrlHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
