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
    AWS_AUDITMANAGER_API ControlSet() = default;
    AWS_AUDITMANAGER_API ControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ControlSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control set. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ControlSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of controls within the control set. </p>
     */
    inline const Aws::Vector<Control>& GetControls() const { return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    template<typename ControlsT = Aws::Vector<Control>>
    void SetControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls = std::forward<ControlsT>(value); }
    template<typename ControlsT = Aws::Vector<Control>>
    ControlSet& WithControls(ControlsT&& value) { SetControls(std::forward<ControlsT>(value)); return *this;}
    template<typename ControlsT = Control>
    ControlSet& AddControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls.emplace_back(std::forward<ControlsT>(value)); return *this; }
    ///@}
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
