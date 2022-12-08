/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline CreateProfileRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline CreateProfileRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const{ return m_managedPolicyArns; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline void SetManagedPolicyArns(const Aws::Vector<Aws::String>& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = value; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline void SetManagedPolicyArns(Aws::Vector<Aws::String>&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = std::move(value); }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline CreateProfileRequest& WithManagedPolicyArns(const Aws::Vector<Aws::String>& value) { SetManagedPolicyArns(value); return *this;}

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline CreateProfileRequest& WithManagedPolicyArns(Aws::Vector<Aws::String>&& value) { SetManagedPolicyArns(std::move(value)); return *this;}

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline CreateProfileRequest& AddManagedPolicyArns(const Aws::String& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline CreateProfileRequest& AddManagedPolicyArns(Aws::String&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline CreateProfileRequest& AddManagedPolicyArns(const char* value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }


    /**
     * <p>The name of the profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline bool GetRequireInstanceProperties() const{ return m_requireInstanceProperties; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline void SetRequireInstanceProperties(bool value) { m_requireInstancePropertiesHasBeenSet = true; m_requireInstanceProperties = value; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline CreateProfileRequest& WithRequireInstanceProperties(bool value) { SetRequireInstanceProperties(value); return *this;}


    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const{ return m_roleArns; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline void SetRoleArns(const Aws::Vector<Aws::String>& value) { m_roleArnsHasBeenSet = true; m_roleArns = value; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline void SetRoleArns(Aws::Vector<Aws::String>&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::move(value); }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline CreateProfileRequest& WithRoleArns(const Aws::Vector<Aws::String>& value) { SetRoleArns(value); return *this;}

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline CreateProfileRequest& WithRoleArns(Aws::Vector<Aws::String>&& value) { SetRoleArns(std::move(value)); return *this;}

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline CreateProfileRequest& AddRoleArns(const Aws::String& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline CreateProfileRequest& AddRoleArns(Aws::String&& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline CreateProfileRequest& AddRoleArns(const char* value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }


    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline const Aws::String& GetSessionPolicy() const{ return m_sessionPolicy; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(const Aws::String& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = value; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(Aws::String&& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = std::move(value); }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(const char* value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy.assign(value); }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline CreateProfileRequest& WithSessionPolicy(const Aws::String& value) { SetSessionPolicy(value); return *this;}

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline CreateProfileRequest& WithSessionPolicy(Aws::String&& value) { SetSessionPolicy(std::move(value)); return *this;}

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline CreateProfileRequest& WithSessionPolicy(const char* value) { SetSessionPolicy(value); return *this;}


    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_requireInstanceProperties;
    bool m_requireInstancePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_sessionPolicy;
    bool m_sessionPolicyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
