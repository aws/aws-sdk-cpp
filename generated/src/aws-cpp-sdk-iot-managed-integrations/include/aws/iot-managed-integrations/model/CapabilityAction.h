/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Action for an Amazon Web Services capability, containing the action
   * parameters for control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilityAction">AWS
   * API Reference</a></p>
   */
  class CapabilityAction
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction();
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describe a capability action with a name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CapabilityAction& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CapabilityAction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CapabilityAction& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with an reference.</p>
     */
    inline const Aws::String& GetRef() const{ return m_ref; }
    inline bool RefHasBeenSet() const { return m_refHasBeenSet; }
    inline void SetRef(const Aws::String& value) { m_refHasBeenSet = true; m_ref = value; }
    inline void SetRef(Aws::String&& value) { m_refHasBeenSet = true; m_ref = std::move(value); }
    inline void SetRef(const char* value) { m_refHasBeenSet = true; m_ref.assign(value); }
    inline CapabilityAction& WithRef(const Aws::String& value) { SetRef(value); return *this;}
    inline CapabilityAction& WithRef(Aws::String&& value) { SetRef(std::move(value)); return *this;}
    inline CapabilityAction& WithRef(const char* value) { SetRef(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with an <code>actionTraceId</code> for a
     * response command.</p>
     */
    inline const Aws::String& GetActionTraceId() const{ return m_actionTraceId; }
    inline bool ActionTraceIdHasBeenSet() const { return m_actionTraceIdHasBeenSet; }
    inline void SetActionTraceId(const Aws::String& value) { m_actionTraceIdHasBeenSet = true; m_actionTraceId = value; }
    inline void SetActionTraceId(Aws::String&& value) { m_actionTraceIdHasBeenSet = true; m_actionTraceId = std::move(value); }
    inline void SetActionTraceId(const char* value) { m_actionTraceIdHasBeenSet = true; m_actionTraceId.assign(value); }
    inline CapabilityAction& WithActionTraceId(const Aws::String& value) { SetActionTraceId(value); return *this;}
    inline CapabilityAction& WithActionTraceId(Aws::String&& value) { SetActionTraceId(std::move(value)); return *this;}
    inline CapabilityAction& WithActionTraceId(const char* value) { SetActionTraceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with a capability property.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CapabilityAction& WithParameters(const Aws::Utils::Document& value) { SetParameters(value); return *this;}
    inline CapabilityAction& WithParameters(Aws::Utils::Document&& value) { SetParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ref;
    bool m_refHasBeenSet = false;

    Aws::String m_actionTraceId;
    bool m_actionTraceIdHasBeenSet = false;

    Aws::Utils::Document m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
