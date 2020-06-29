/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateDomainRequest : public SageMakerRequest
  {
  public:
    UpdateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }

    /**
     * <p>A collection of settings.</p>
     */
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = value; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::move(value); }

    /**
     * <p>A collection of settings.</p>
     */
    inline UpdateDomainRequest& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}

    /**
     * <p>A collection of settings.</p>
     */
    inline UpdateDomainRequest& WithDefaultUserSettings(UserSettings&& value) { SetDefaultUserSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
