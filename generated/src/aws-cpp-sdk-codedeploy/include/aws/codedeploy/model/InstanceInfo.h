/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Tag.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an on-premises instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/InstanceInfo">AWS
   * API Reference</a></p>
   */
  class InstanceInfo
  {
  public:
    AWS_CODEDEPLOY_API InstanceInfo() = default;
    AWS_CODEDEPLOY_API InstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API InstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the on-premises instance.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    InstanceInfo& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM session associated with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamSessionArn() const { return m_iamSessionArn; }
    inline bool IamSessionArnHasBeenSet() const { return m_iamSessionArnHasBeenSet; }
    template<typename IamSessionArnT = Aws::String>
    void SetIamSessionArn(IamSessionArnT&& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = std::forward<IamSessionArnT>(value); }
    template<typename IamSessionArnT = Aws::String>
    InstanceInfo& WithIamSessionArn(IamSessionArnT&& value) { SetIamSessionArn(std::forward<IamSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ARN associated with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    InstanceInfo& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the on-premises instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    InstanceInfo& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the on-premises instance was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisterTime() const { return m_registerTime; }
    inline bool RegisterTimeHasBeenSet() const { return m_registerTimeHasBeenSet; }
    template<typename RegisterTimeT = Aws::Utils::DateTime>
    void SetRegisterTime(RegisterTimeT&& value) { m_registerTimeHasBeenSet = true; m_registerTime = std::forward<RegisterTimeT>(value); }
    template<typename RegisterTimeT = Aws::Utils::DateTime>
    InstanceInfo& WithRegisterTime(RegisterTimeT&& value) { SetRegisterTime(std::forward<RegisterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the on-premises instance was deregistered, the time at which the
     * on-premises instance was deregistered.</p>
     */
    inline const Aws::Utils::DateTime& GetDeregisterTime() const { return m_deregisterTime; }
    inline bool DeregisterTimeHasBeenSet() const { return m_deregisterTimeHasBeenSet; }
    template<typename DeregisterTimeT = Aws::Utils::DateTime>
    void SetDeregisterTime(DeregisterTimeT&& value) { m_deregisterTimeHasBeenSet = true; m_deregisterTime = std::forward<DeregisterTimeT>(value); }
    template<typename DeregisterTimeT = Aws::Utils::DateTime>
    InstanceInfo& WithDeregisterTime(DeregisterTimeT&& value) { SetDeregisterTime(std::forward<DeregisterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags currently associated with the on-premises instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_iamSessionArn;
    bool m_iamSessionArnHasBeenSet = false;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_registerTime{};
    bool m_registerTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deregisterTime{};
    bool m_deregisterTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
