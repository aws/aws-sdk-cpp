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
    AWS_CODEDEPLOY_API InstanceInfo();
    AWS_CODEDEPLOY_API InstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API InstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the on-premises instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline InstanceInfo& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline InstanceInfo& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline InstanceInfo& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM session associated with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamSessionArn() const{ return m_iamSessionArn; }
    inline bool IamSessionArnHasBeenSet() const { return m_iamSessionArnHasBeenSet; }
    inline void SetIamSessionArn(const Aws::String& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = value; }
    inline void SetIamSessionArn(Aws::String&& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = std::move(value); }
    inline void SetIamSessionArn(const char* value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn.assign(value); }
    inline InstanceInfo& WithIamSessionArn(const Aws::String& value) { SetIamSessionArn(value); return *this;}
    inline InstanceInfo& WithIamSessionArn(Aws::String&& value) { SetIamSessionArn(std::move(value)); return *this;}
    inline InstanceInfo& WithIamSessionArn(const char* value) { SetIamSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ARN associated with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }
    inline InstanceInfo& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}
    inline InstanceInfo& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}
    inline InstanceInfo& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the on-premises instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline InstanceInfo& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline InstanceInfo& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline InstanceInfo& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the on-premises instance was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisterTime() const{ return m_registerTime; }
    inline bool RegisterTimeHasBeenSet() const { return m_registerTimeHasBeenSet; }
    inline void SetRegisterTime(const Aws::Utils::DateTime& value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }
    inline void SetRegisterTime(Aws::Utils::DateTime&& value) { m_registerTimeHasBeenSet = true; m_registerTime = std::move(value); }
    inline InstanceInfo& WithRegisterTime(const Aws::Utils::DateTime& value) { SetRegisterTime(value); return *this;}
    inline InstanceInfo& WithRegisterTime(Aws::Utils::DateTime&& value) { SetRegisterTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the on-premises instance was deregistered, the time at which the
     * on-premises instance was deregistered.</p>
     */
    inline const Aws::Utils::DateTime& GetDeregisterTime() const{ return m_deregisterTime; }
    inline bool DeregisterTimeHasBeenSet() const { return m_deregisterTimeHasBeenSet; }
    inline void SetDeregisterTime(const Aws::Utils::DateTime& value) { m_deregisterTimeHasBeenSet = true; m_deregisterTime = value; }
    inline void SetDeregisterTime(Aws::Utils::DateTime&& value) { m_deregisterTimeHasBeenSet = true; m_deregisterTime = std::move(value); }
    inline InstanceInfo& WithDeregisterTime(const Aws::Utils::DateTime& value) { SetDeregisterTime(value); return *this;}
    inline InstanceInfo& WithDeregisterTime(Aws::Utils::DateTime&& value) { SetDeregisterTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags currently associated with the on-premises instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    Aws::Utils::DateTime m_registerTime;
    bool m_registerTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deregisterTime;
    bool m_deregisterTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
