/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/CreateAssessmentFrameworkControl.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A <code>controlSet</code> entity that represents a collection of controls in
   * Audit Manager. This doesn't contain the control set ID. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentFrameworkControlSet">AWS
   * API Reference</a></p>
   */
  class CreateAssessmentFrameworkControlSet
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet() = default;
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the control set. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAssessmentFrameworkControlSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of controls within the control set. This doesn't contain the
     * control set ID. </p>
     */
    inline const Aws::Vector<CreateAssessmentFrameworkControl>& GetControls() const { return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    template<typename ControlsT = Aws::Vector<CreateAssessmentFrameworkControl>>
    void SetControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls = std::forward<ControlsT>(value); }
    template<typename ControlsT = Aws::Vector<CreateAssessmentFrameworkControl>>
    CreateAssessmentFrameworkControlSet& WithControls(ControlsT&& value) { SetControls(std::forward<ControlsT>(value)); return *this;}
    template<typename ControlsT = CreateAssessmentFrameworkControl>
    CreateAssessmentFrameworkControlSet& AddControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls.emplace_back(std::forward<ControlsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<CreateAssessmentFrameworkControl> m_controls;
    bool m_controlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
