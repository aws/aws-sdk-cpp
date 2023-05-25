/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class BatchGetProjectsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API BatchGetProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetProjects"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline BatchGetProjectsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline BatchGetProjectsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline BatchGetProjectsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline BatchGetProjectsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The names or ARNs of the build projects. To get information about a project
     * shared with your Amazon Web Services account, its ARN must be specified. You
     * cannot specify a shared project using its name.</p>
     */
    inline BatchGetProjectsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
