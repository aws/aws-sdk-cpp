/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RuleScopeSelectionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies projects in which the rule is created.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectsForRule">AWS
   * API Reference</a></p>
   */
  class ProjectsForRule
  {
  public:
    AWS_DATAZONE_API ProjectsForRule();
    AWS_DATAZONE_API ProjectsForRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectsForRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selection mode of the rule.</p>
     */
    inline const RuleScopeSelectionMode& GetSelectionMode() const{ return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(const RuleScopeSelectionMode& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline void SetSelectionMode(RuleScopeSelectionMode&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }
    inline ProjectsForRule& WithSelectionMode(const RuleScopeSelectionMode& value) { SetSelectionMode(value); return *this;}
    inline ProjectsForRule& WithSelectionMode(RuleScopeSelectionMode&& value) { SetSelectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific projects in which the rule is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecificProjects() const{ return m_specificProjects; }
    inline bool SpecificProjectsHasBeenSet() const { return m_specificProjectsHasBeenSet; }
    inline void SetSpecificProjects(const Aws::Vector<Aws::String>& value) { m_specificProjectsHasBeenSet = true; m_specificProjects = value; }
    inline void SetSpecificProjects(Aws::Vector<Aws::String>&& value) { m_specificProjectsHasBeenSet = true; m_specificProjects = std::move(value); }
    inline ProjectsForRule& WithSpecificProjects(const Aws::Vector<Aws::String>& value) { SetSpecificProjects(value); return *this;}
    inline ProjectsForRule& WithSpecificProjects(Aws::Vector<Aws::String>&& value) { SetSpecificProjects(std::move(value)); return *this;}
    inline ProjectsForRule& AddSpecificProjects(const Aws::String& value) { m_specificProjectsHasBeenSet = true; m_specificProjects.push_back(value); return *this; }
    inline ProjectsForRule& AddSpecificProjects(Aws::String&& value) { m_specificProjectsHasBeenSet = true; m_specificProjects.push_back(std::move(value)); return *this; }
    inline ProjectsForRule& AddSpecificProjects(const char* value) { m_specificProjectsHasBeenSet = true; m_specificProjects.push_back(value); return *this; }
    ///@}
  private:

    RuleScopeSelectionMode m_selectionMode;
    bool m_selectionModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_specificProjects;
    bool m_specificProjectsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
