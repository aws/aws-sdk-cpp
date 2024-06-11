/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>Information about the metadata for a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_CODESTAR_API ProjectSummary();
    AWS_CODESTAR_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline ProjectSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline ProjectSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline ProjectSummary& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline ProjectSummary& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
