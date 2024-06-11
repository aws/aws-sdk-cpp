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
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet();
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the control set. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAssessmentFrameworkControlSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAssessmentFrameworkControlSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAssessmentFrameworkControlSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of controls within the control set. This doesn't contain the
     * control set ID. </p>
     */
    inline const Aws::Vector<CreateAssessmentFrameworkControl>& GetControls() const{ return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    inline void SetControls(const Aws::Vector<CreateAssessmentFrameworkControl>& value) { m_controlsHasBeenSet = true; m_controls = value; }
    inline void SetControls(Aws::Vector<CreateAssessmentFrameworkControl>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }
    inline CreateAssessmentFrameworkControlSet& WithControls(const Aws::Vector<CreateAssessmentFrameworkControl>& value) { SetControls(value); return *this;}
    inline CreateAssessmentFrameworkControlSet& WithControls(Aws::Vector<CreateAssessmentFrameworkControl>&& value) { SetControls(std::move(value)); return *this;}
    inline CreateAssessmentFrameworkControlSet& AddControls(const CreateAssessmentFrameworkControl& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }
    inline CreateAssessmentFrameworkControlSet& AddControls(CreateAssessmentFrameworkControl&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }
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
