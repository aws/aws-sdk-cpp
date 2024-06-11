﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a workflow definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowDefinitionSummary
  {
  public:
    AWS_CODECATALYST_API WorkflowDefinitionSummary();
    AWS_CODECATALYST_API WorkflowDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the workflow definition file stored in the source repository for
     * the project, including the file name.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline WorkflowDefinitionSummary& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline WorkflowDefinitionSummary& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline WorkflowDefinitionSummary& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
