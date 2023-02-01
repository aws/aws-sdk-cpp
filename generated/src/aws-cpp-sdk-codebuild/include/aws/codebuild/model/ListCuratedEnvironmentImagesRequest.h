/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListCuratedEnvironmentImagesRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListCuratedEnvironmentImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCuratedEnvironmentImages"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
