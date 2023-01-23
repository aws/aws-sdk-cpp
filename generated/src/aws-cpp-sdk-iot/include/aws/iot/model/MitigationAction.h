/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MitigationActionParams.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes which changes should be applied as part of a mitigation
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MitigationAction">AWS
   * API Reference</a></p>
   */
  class MitigationAction
  {
  public:
    AWS_IOT_API MitigationAction();
    AWS_IOT_API MitigationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline MitigationAction& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline MitigationAction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline MitigationAction& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline MitigationAction& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline MitigationAction& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline MitigationAction& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline const MitigationActionParams& GetActionParams() const{ return m_actionParams; }

    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline bool ActionParamsHasBeenSet() const { return m_actionParamsHasBeenSet; }

    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline void SetActionParams(const MitigationActionParams& value) { m_actionParamsHasBeenSet = true; m_actionParams = value; }

    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline void SetActionParams(MitigationActionParams&& value) { m_actionParamsHasBeenSet = true; m_actionParams = std::move(value); }

    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline MitigationAction& WithActionParams(const MitigationActionParams& value) { SetActionParams(value); return *this;}

    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline MitigationAction& WithActionParams(MitigationActionParams&& value) { SetActionParams(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MitigationActionParams m_actionParams;
    bool m_actionParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
