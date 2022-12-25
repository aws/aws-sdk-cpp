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
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFrameworkControlSet">AWS
   * API Reference</a></p>
   */
  class UpdateAssessmentFrameworkControlSet
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkControlSet();
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the control set. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the control set. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the control set. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the control set. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the control set. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline const Aws::Vector<CreateAssessmentFrameworkControl>& GetControls() const{ return m_controls; }

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline void SetControls(const Aws::Vector<CreateAssessmentFrameworkControl>& value) { m_controlsHasBeenSet = true; m_controls = value; }

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline void SetControls(Aws::Vector<CreateAssessmentFrameworkControl>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithControls(const Aws::Vector<CreateAssessmentFrameworkControl>& value) { SetControls(value); return *this;}

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& WithControls(Aws::Vector<CreateAssessmentFrameworkControl>&& value) { SetControls(std::move(value)); return *this;}

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& AddControls(const CreateAssessmentFrameworkControl& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }

    /**
     * <p> The list of controls that are contained within the control set. </p>
     */
    inline UpdateAssessmentFrameworkControlSet& AddControls(CreateAssessmentFrameworkControl&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<CreateAssessmentFrameworkControl> m_controls;
    bool m_controlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
