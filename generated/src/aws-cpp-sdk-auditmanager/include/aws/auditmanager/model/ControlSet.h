/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/Control.h>
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
   * <p> A set of controls in Audit Manager. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlSet">AWS
   * API Reference</a></p>
   */
  class ControlSet
  {
  public:
    AWS_AUDITMANAGER_API ControlSet();
    AWS_AUDITMANAGER_API ControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline ControlSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline ControlSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline ControlSet& WithId(const char* value) { SetId(value); return *this;}


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
    inline ControlSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the control set. </p>
     */
    inline ControlSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the control set. </p>
     */
    inline ControlSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The list of controls within the control set. </p>
     */
    inline const Aws::Vector<Control>& GetControls() const{ return m_controls; }

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline void SetControls(const Aws::Vector<Control>& value) { m_controlsHasBeenSet = true; m_controls = value; }

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline void SetControls(Aws::Vector<Control>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline ControlSet& WithControls(const Aws::Vector<Control>& value) { SetControls(value); return *this;}

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline ControlSet& WithControls(Aws::Vector<Control>&& value) { SetControls(std::move(value)); return *this;}

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline ControlSet& AddControls(const Control& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }

    /**
     * <p> The list of controls within the control set. </p>
     */
    inline ControlSet& AddControls(Control&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Control> m_controls;
    bool m_controlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
