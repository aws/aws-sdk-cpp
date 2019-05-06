/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/AlertTargetType.h>
#include <aws/iot/model/AlertTarget.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API UpdateSecurityProfileRequest : public IoTRequest
  {
  public:
    UpdateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityProfile"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>A description of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const{ return m_securityProfileDescription; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline bool SecurityProfileDescriptionHasBeenSet() const { return m_securityProfileDescriptionHasBeenSet; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(const Aws::String& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = value; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(Aws::String&& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = std::move(value); }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(const char* value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription.assign(value); }

    /**
     * <p>A description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}

    /**
     * <p>A description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}


    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const{ return m_behaviors; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline bool BehaviorsHasBeenSet() const { return m_behaviorsHasBeenSet; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(const Aws::Vector<Behavior>& value) { m_behaviorsHasBeenSet = true; m_behaviors = value; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(Aws::Vector<Behavior>&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::move(value); }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline UpdateSecurityProfileRequest& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline UpdateSecurityProfileRequest& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline UpdateSecurityProfileRequest& AddBehaviors(const Behavior& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(value); return *this; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline UpdateSecurityProfileRequest& AddBehaviors(Behavior&& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = value; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::move(value); }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), value); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline UpdateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMetricsToRetain() const{ return m_additionalMetricsToRetain; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline bool AdditionalMetricsToRetainHasBeenSet() const { return m_additionalMetricsToRetainHasBeenSet; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline void SetAdditionalMetricsToRetain(const Aws::Vector<Aws::String>& value) { m_additionalMetricsToRetainHasBeenSet = true; m_additionalMetricsToRetain = value; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline void SetAdditionalMetricsToRetain(Aws::Vector<Aws::String>&& value) { m_additionalMetricsToRetainHasBeenSet = true; m_additionalMetricsToRetain = std::move(value); }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline UpdateSecurityProfileRequest& WithAdditionalMetricsToRetain(const Aws::Vector<Aws::String>& value) { SetAdditionalMetricsToRetain(value); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline UpdateSecurityProfileRequest& WithAdditionalMetricsToRetain(Aws::Vector<Aws::String>&& value) { SetAdditionalMetricsToRetain(std::move(value)); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline UpdateSecurityProfileRequest& AddAdditionalMetricsToRetain(const Aws::String& value) { m_additionalMetricsToRetainHasBeenSet = true; m_additionalMetricsToRetain.push_back(value); return *this; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline UpdateSecurityProfileRequest& AddAdditionalMetricsToRetain(Aws::String&& value) { m_additionalMetricsToRetainHasBeenSet = true; m_additionalMetricsToRetain.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code> but it is
     * also retained for any metric specified here.</p>
     */
    inline UpdateSecurityProfileRequest& AddAdditionalMetricsToRetain(const char* value) { m_additionalMetricsToRetainHasBeenSet = true; m_additionalMetricsToRetain.push_back(value); return *this; }


    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation an exception
     * occurs.</p>
     */
    inline bool GetDeleteBehaviors() const{ return m_deleteBehaviors; }

    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation an exception
     * occurs.</p>
     */
    inline bool DeleteBehaviorsHasBeenSet() const { return m_deleteBehaviorsHasBeenSet; }

    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation an exception
     * occurs.</p>
     */
    inline void SetDeleteBehaviors(bool value) { m_deleteBehaviorsHasBeenSet = true; m_deleteBehaviors = value; }

    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation an exception
     * occurs.</p>
     */
    inline UpdateSecurityProfileRequest& WithDeleteBehaviors(bool value) { SetDeleteBehaviors(value); return *this;}


    /**
     * <p>If true, delete all <code>alertTargets</code> defined for this security
     * profile. If any <code>alertTargets</code> are defined in the current invocation
     * an exception occurs.</p>
     */
    inline bool GetDeleteAlertTargets() const{ return m_deleteAlertTargets; }

    /**
     * <p>If true, delete all <code>alertTargets</code> defined for this security
     * profile. If any <code>alertTargets</code> are defined in the current invocation
     * an exception occurs.</p>
     */
    inline bool DeleteAlertTargetsHasBeenSet() const { return m_deleteAlertTargetsHasBeenSet; }

    /**
     * <p>If true, delete all <code>alertTargets</code> defined for this security
     * profile. If any <code>alertTargets</code> are defined in the current invocation
     * an exception occurs.</p>
     */
    inline void SetDeleteAlertTargets(bool value) { m_deleteAlertTargetsHasBeenSet = true; m_deleteAlertTargets = value; }

    /**
     * <p>If true, delete all <code>alertTargets</code> defined for this security
     * profile. If any <code>alertTargets</code> are defined in the current invocation
     * an exception occurs.</p>
     */
    inline UpdateSecurityProfileRequest& WithDeleteAlertTargets(bool value) { SetDeleteAlertTargets(value); return *this;}


    /**
     * <p>If true, delete all <code>additionalMetricsToRetain</code> defined for this
     * security profile. If any <code>additionalMetricsToRetain</code> are defined in
     * the current invocation an exception occurs.</p>
     */
    inline bool GetDeleteAdditionalMetricsToRetain() const{ return m_deleteAdditionalMetricsToRetain; }

    /**
     * <p>If true, delete all <code>additionalMetricsToRetain</code> defined for this
     * security profile. If any <code>additionalMetricsToRetain</code> are defined in
     * the current invocation an exception occurs.</p>
     */
    inline bool DeleteAdditionalMetricsToRetainHasBeenSet() const { return m_deleteAdditionalMetricsToRetainHasBeenSet; }

    /**
     * <p>If true, delete all <code>additionalMetricsToRetain</code> defined for this
     * security profile. If any <code>additionalMetricsToRetain</code> are defined in
     * the current invocation an exception occurs.</p>
     */
    inline void SetDeleteAdditionalMetricsToRetain(bool value) { m_deleteAdditionalMetricsToRetainHasBeenSet = true; m_deleteAdditionalMetricsToRetain = value; }

    /**
     * <p>If true, delete all <code>additionalMetricsToRetain</code> defined for this
     * security profile. If any <code>additionalMetricsToRetain</code> are defined in
     * the current invocation an exception occurs.</p>
     */
    inline UpdateSecurityProfileRequest& WithDeleteAdditionalMetricsToRetain(bool value) { SetDeleteAdditionalMetricsToRetain(value); return *this;}


    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different than the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different than the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different than the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different than the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline UpdateSecurityProfileRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;

    Aws::String m_securityProfileDescription;
    bool m_securityProfileDescriptionHasBeenSet;

    Aws::Vector<Behavior> m_behaviors;
    bool m_behaviorsHasBeenSet;

    Aws::Map<AlertTargetType, AlertTarget> m_alertTargets;
    bool m_alertTargetsHasBeenSet;

    Aws::Vector<Aws::String> m_additionalMetricsToRetain;
    bool m_additionalMetricsToRetainHasBeenSet;

    bool m_deleteBehaviors;
    bool m_deleteBehaviorsHasBeenSet;

    bool m_deleteAlertTargets;
    bool m_deleteAlertTargetsHasBeenSet;

    bool m_deleteAdditionalMetricsToRetain;
    bool m_deleteAdditionalMetricsToRetainHasBeenSet;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
