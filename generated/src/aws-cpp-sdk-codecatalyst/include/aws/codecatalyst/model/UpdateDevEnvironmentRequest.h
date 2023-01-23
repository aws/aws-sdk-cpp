/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/codecatalyst/model/IdeConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class UpdateDevEnvironmentRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API UpdateDevEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDevEnvironment"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline UpdateDevEnvironmentRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline UpdateDevEnvironmentRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment. Changing this value will
     * not cause a restart.</p>
     */
    inline UpdateDevEnvironmentRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline const Aws::Vector<IdeConfiguration>& GetIdes() const{ return m_ides; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline void SetIdes(const Aws::Vector<IdeConfiguration>& value) { m_idesHasBeenSet = true; m_ides = value; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline void SetIdes(Aws::Vector<IdeConfiguration>&& value) { m_idesHasBeenSet = true; m_ides = std::move(value); }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline UpdateDevEnvironmentRequest& WithIdes(const Aws::Vector<IdeConfiguration>& value) { SetIdes(value); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline UpdateDevEnvironmentRequest& WithIdes(Aws::Vector<IdeConfiguration>&& value) { SetIdes(std::move(value)); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline UpdateDevEnvironmentRequest& AddIdes(const IdeConfiguration& value) { m_idesHasBeenSet = true; m_ides.push_back(value); return *this; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline UpdateDevEnvironmentRequest& AddIdes(IdeConfiguration&& value) { m_idesHasBeenSet = true; m_ides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline UpdateDevEnvironmentRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p> 
     * <p>Changing this value will cause a restart of the Dev Environment if it is
     * running.</p> 
     */
    inline UpdateDevEnvironmentRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>  <p>Changing this value will
     * cause a restart of the Dev Environment if it is running.</p> 
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>  <p>Changing this value will
     * cause a restart of the Dev Environment if it is running.</p> 
     */
    inline bool InactivityTimeoutMinutesHasBeenSet() const { return m_inactivityTimeoutMinutesHasBeenSet; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>  <p>Changing this value will
     * cause a restart of the Dev Environment if it is running.</p> 
     */
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutesHasBeenSet = true; m_inactivityTimeoutMinutes = value; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>  <p>Changing this value will
     * cause a restart of the Dev Environment if it is running.</p> 
     */
    inline UpdateDevEnvironmentRequest& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}


    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<IdeConfiguration> m_ides;
    bool m_idesHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_inactivityTimeoutMinutes;
    bool m_inactivityTimeoutMinutesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
