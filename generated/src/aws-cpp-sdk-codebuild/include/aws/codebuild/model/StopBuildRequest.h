/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
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
  class StopBuildRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API StopBuildRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopBuild"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the build.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the build.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the build.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the build.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the build.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the build.</p>
     */
    inline StopBuildRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the build.</p>
     */
    inline StopBuildRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the build.</p>
     */
    inline StopBuildRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
