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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/SubDomainSetting.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> Request structure for update Domain Association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateDomainAssociationRequest : public AmplifyRequest
  {
  public:
    UpdateDomainAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainAssociation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> Name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const{ return m_enableAutoSubDomain; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline UpdateDomainAssociationRequest& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}


    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline const Aws::Vector<SubDomainSetting>& GetSubDomainSettings() const{ return m_subDomainSettings; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline bool SubDomainSettingsHasBeenSet() const { return m_subDomainSettingsHasBeenSet; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline void SetSubDomainSettings(const Aws::Vector<SubDomainSetting>& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings = value; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline void SetSubDomainSettings(Aws::Vector<SubDomainSetting>&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings = std::move(value); }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& WithSubDomainSettings(const Aws::Vector<SubDomainSetting>& value) { SetSubDomainSettings(value); return *this;}

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& WithSubDomainSettings(Aws::Vector<SubDomainSetting>&& value) { SetSubDomainSettings(std::move(value)); return *this;}

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& AddSubDomainSettings(const SubDomainSetting& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings.push_back(value); return *this; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& AddSubDomainSettings(SubDomainSetting&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    bool m_enableAutoSubDomain;
    bool m_enableAutoSubDomainHasBeenSet;

    Aws::Vector<SubDomainSetting> m_subDomainSettings;
    bool m_subDomainSettingsHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
