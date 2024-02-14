/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/controltower/model/EnabledControlParameter.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class EnableControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API EnableControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b> control.
     * For information on how to find the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}


    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline const Aws::Vector<EnabledControlParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline void SetParameters(const Aws::Vector<EnabledControlParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline void SetParameters(Aws::Vector<EnabledControlParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline EnableControlRequest& WithParameters(const Aws::Vector<EnabledControlParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline EnableControlRequest& WithParameters(Aws::Vector<EnabledControlParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline EnableControlRequest& AddParameters(const EnabledControlParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of input parameter values, which are specified to configure the
     * control when you enable it.</p>
     */
    inline EnableControlRequest& AddParameters(EnabledControlParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be applied to the <code>EnabledControl</code> resource.</p>
     */
    inline EnableControlRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnableControlRequest& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}

  private:

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    Aws::Vector<EnabledControlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
