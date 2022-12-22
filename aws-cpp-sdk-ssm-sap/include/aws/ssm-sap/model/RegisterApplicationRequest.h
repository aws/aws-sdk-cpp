/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class RegisterApplicationRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API RegisterApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterApplication"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p/>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p/>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p/>
     */
    inline const ApplicationType& GetApplicationType() const{ return m_applicationType; }

    /**
     * <p/>
     */
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationType(const ApplicationType& value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }

    /**
     * <p/>
     */
    inline void SetApplicationType(ApplicationType&& value) { m_applicationTypeHasBeenSet = true; m_applicationType = std::move(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithApplicationType(const ApplicationType& value) { SetApplicationType(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithApplicationType(ApplicationType&& value) { SetApplicationType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }

    /**
     * <p/>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p/>
     */
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetSapInstanceNumber() const{ return m_sapInstanceNumber; }

    /**
     * <p/>
     */
    inline bool SapInstanceNumberHasBeenSet() const { return m_sapInstanceNumberHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSapInstanceNumber(const Aws::String& value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber = value; }

    /**
     * <p/>
     */
    inline void SetSapInstanceNumber(Aws::String&& value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSapInstanceNumber(const char* value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber.assign(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSapInstanceNumber(const Aws::String& value) { SetSapInstanceNumber(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSapInstanceNumber(Aws::String&& value) { SetSapInstanceNumber(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSapInstanceNumber(const char* value) { SetSapInstanceNumber(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSid() const{ return m_sid; }

    /**
     * <p/>
     */
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSid(const Aws::String& value) { m_sidHasBeenSet = true; m_sid = value; }

    /**
     * <p/>
     */
    inline void SetSid(Aws::String&& value) { m_sidHasBeenSet = true; m_sid = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSid(const char* value) { m_sidHasBeenSet = true; m_sid.assign(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSid(const Aws::String& value) { SetSid(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSid(Aws::String&& value) { SetSid(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithSid(const char* value) { SetSid(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const{ return m_credentials; }

    /**
     * <p/>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCredentials(const Aws::Vector<ApplicationCredential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p/>
     */
    inline void SetCredentials(Aws::Vector<ApplicationCredential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithCredentials(const Aws::Vector<ApplicationCredential>& value) { SetCredentials(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& WithCredentials(Aws::Vector<ApplicationCredential>&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddCredentials(const ApplicationCredential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline RegisterApplicationRequest& AddCredentials(ApplicationCredential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ApplicationType m_applicationType;
    bool m_applicationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::String m_sapInstanceNumber;
    bool m_sapInstanceNumberHasBeenSet = false;

    Aws::String m_sid;
    bool m_sidHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
