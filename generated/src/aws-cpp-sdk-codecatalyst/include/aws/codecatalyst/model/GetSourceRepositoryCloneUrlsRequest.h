/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class GetSourceRepositoryCloneUrlsRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API GetSourceRepositoryCloneUrlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSourceRepositoryCloneUrls"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline GetSourceRepositoryCloneUrlsRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline GetSourceRepositoryCloneUrlsRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source repository.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const{ return m_sourceRepositoryName; }
    inline bool SourceRepositoryNameHasBeenSet() const { return m_sourceRepositoryNameHasBeenSet; }
    inline void SetSourceRepositoryName(const Aws::String& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = value; }
    inline void SetSourceRepositoryName(Aws::String&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::move(value); }
    inline void SetSourceRepositoryName(const char* value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName.assign(value); }
    inline GetSourceRepositoryCloneUrlsRequest& WithSourceRepositoryName(const Aws::String& value) { SetSourceRepositoryName(value); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithSourceRepositoryName(Aws::String&& value) { SetSourceRepositoryName(std::move(value)); return *this;}
    inline GetSourceRepositoryCloneUrlsRequest& WithSourceRepositoryName(const char* value) { SetSourceRepositoryName(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
