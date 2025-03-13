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
    AWS_IOT_API MitigationAction() = default;
    AWS_IOT_API MitigationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A user-friendly name for the mitigation action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MitigationAction& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MitigationAction& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    MitigationAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of parameters for this mitigation action. The parameters vary,
     * depending on the kind of action you apply.</p>
     */
    inline const MitigationActionParams& GetActionParams() const { return m_actionParams; }
    inline bool ActionParamsHasBeenSet() const { return m_actionParamsHasBeenSet; }
    template<typename ActionParamsT = MitigationActionParams>
    void SetActionParams(ActionParamsT&& value) { m_actionParamsHasBeenSet = true; m_actionParams = std::forward<ActionParamsT>(value); }
    template<typename ActionParamsT = MitigationActionParams>
    MitigationAction& WithActionParams(ActionParamsT&& value) { SetActionParams(std::forward<ActionParamsT>(value)); return *this;}
    ///@}
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
