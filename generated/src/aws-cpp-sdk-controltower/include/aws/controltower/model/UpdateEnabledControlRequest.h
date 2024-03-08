/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateEnabledControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API UpdateEnabledControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnabledControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const{ return m_enabledControlIdentifier; }

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline void SetEnabledControlIdentifier(const Aws::String& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = value; }

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline void SetEnabledControlIdentifier(Aws::String&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::move(value); }

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline void SetEnabledControlIdentifier(const char* value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier.assign(value); }

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline UpdateEnabledControlRequest& WithEnabledControlIdentifier(const Aws::String& value) { SetEnabledControlIdentifier(value); return *this;}

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline UpdateEnabledControlRequest& WithEnabledControlIdentifier(Aws::String&& value) { SetEnabledControlIdentifier(std::move(value)); return *this;}

    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline UpdateEnabledControlRequest& WithEnabledControlIdentifier(const char* value) { SetEnabledControlIdentifier(value); return *this;}


    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline const Aws::Vector<EnabledControlParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline void SetParameters(const Aws::Vector<EnabledControlParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline void SetParameters(Aws::Vector<EnabledControlParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline UpdateEnabledControlRequest& WithParameters(const Aws::Vector<EnabledControlParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline UpdateEnabledControlRequest& WithParameters(Aws::Vector<EnabledControlParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline UpdateEnabledControlRequest& AddParameters(const EnabledControlParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline UpdateEnabledControlRequest& AddParameters(EnabledControlParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;

    Aws::Vector<EnabledControlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
