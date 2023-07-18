﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioComponentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponentSubtype.h>
#include <aws/nimble/model/StudioComponentType.h>
#include <aws/nimble/model/StudioComponentInitializationScript.h>
#include <aws/nimble/model/ScriptParameterKeyValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AWS_NIMBLESTUDIO_API UpdateStudioComponentRequest : public NimbleStudioRequest
  {
  public:
    UpdateStudioComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStudioComponent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateStudioComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateStudioComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateStudioComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline const StudioComponentConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline void SetConfiguration(const StudioComponentConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline void SetConfiguration(StudioComponentConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline UpdateStudioComponentRequest& WithConfiguration(const StudioComponentConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration of the studio component, based on component type.</p>
     */
    inline UpdateStudioComponentRequest& WithConfiguration(StudioComponentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateStudioComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateStudioComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateStudioComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SecurityGroupIds() const{ return m_ec2SecurityGroupIds; }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline bool Ec2SecurityGroupIdsHasBeenSet() const { return m_ec2SecurityGroupIdsHasBeenSet; }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline void SetEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = value; }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline void SetEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = std::move(value); }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetEc2SecurityGroupIds(value); return *this;}

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetEc2SecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline UpdateStudioComponentRequest& AddEc2SecurityGroupIds(const Aws::String& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline UpdateStudioComponentRequest& AddEc2SecurityGroupIds(Aws::String&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline UpdateStudioComponentRequest& AddEc2SecurityGroupIds(const char* value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline const Aws::Vector<StudioComponentInitializationScript>& GetInitializationScripts() const{ return m_initializationScripts; }

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline bool InitializationScriptsHasBeenSet() const { return m_initializationScriptsHasBeenSet; }

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline void SetInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = value; }

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline void SetInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts = std::move(value); }

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline UpdateStudioComponentRequest& WithInitializationScripts(const Aws::Vector<StudioComponentInitializationScript>& value) { SetInitializationScripts(value); return *this;}

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline UpdateStudioComponentRequest& WithInitializationScripts(Aws::Vector<StudioComponentInitializationScript>&& value) { SetInitializationScripts(std::move(value)); return *this;}

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline UpdateStudioComponentRequest& AddInitializationScripts(const StudioComponentInitializationScript& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(value); return *this; }

    /**
     * <p>Initialization scripts for studio components.</p>
     */
    inline UpdateStudioComponentRequest& AddInitializationScripts(StudioComponentInitializationScript&& value) { m_initializationScriptsHasBeenSet = true; m_initializationScripts.push_back(std::move(value)); return *this; }


    /**
     * <p>The name for the studio component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline const Aws::Vector<ScriptParameterKeyValue>& GetScriptParameters() const{ return m_scriptParameters; }

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline bool ScriptParametersHasBeenSet() const { return m_scriptParametersHasBeenSet; }

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline void SetScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = value; }

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline void SetScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters = std::move(value); }

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline UpdateStudioComponentRequest& WithScriptParameters(const Aws::Vector<ScriptParameterKeyValue>& value) { SetScriptParameters(value); return *this;}

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline UpdateStudioComponentRequest& WithScriptParameters(Aws::Vector<ScriptParameterKeyValue>&& value) { SetScriptParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline UpdateStudioComponentRequest& AddScriptParameters(const ScriptParameterKeyValue& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(value); return *this; }

    /**
     * <p>Parameters for the studio component scripts.</p>
     */
    inline UpdateStudioComponentRequest& AddScriptParameters(ScriptParameterKeyValue&& value) { m_scriptParametersHasBeenSet = true; m_scriptParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The studio component ID.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }

    /**
     * <p>The studio component ID.</p>
     */
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }

    /**
     * <p>The studio component ID.</p>
     */
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }

    /**
     * <p>The studio component ID.</p>
     */
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }

    /**
     * <p>The studio component ID.</p>
     */
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }

    /**
     * <p>The studio component ID.</p>
     */
    inline UpdateStudioComponentRequest& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}

    /**
     * <p>The studio component ID.</p>
     */
    inline UpdateStudioComponentRequest& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}

    /**
     * <p>The studio component ID.</p>
     */
    inline UpdateStudioComponentRequest& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateStudioComponentRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateStudioComponentRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateStudioComponentRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline const StudioComponentSubtype& GetSubtype() const{ return m_subtype; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline void SetSubtype(const StudioComponentSubtype& value) { m_subtypeHasBeenSet = true; m_subtype = value; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline void SetSubtype(StudioComponentSubtype&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithSubtype(const StudioComponentSubtype& value) { SetSubtype(value); return *this;}

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithSubtype(StudioComponentSubtype&& value) { SetSubtype(std::move(value)); return *this;}


    /**
     * <p>The type of the studio component.</p>
     */
    inline const StudioComponentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline void SetType(const StudioComponentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline void SetType(StudioComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithType(const StudioComponentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the studio component.</p>
     */
    inline UpdateStudioComponentRequest& WithType(StudioComponentType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    StudioComponentConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_ec2SecurityGroupIds;
    bool m_ec2SecurityGroupIdsHasBeenSet;

    Aws::Vector<StudioComponentInitializationScript> m_initializationScripts;
    bool m_initializationScriptsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<ScriptParameterKeyValue> m_scriptParameters;
    bool m_scriptParametersHasBeenSet;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;

    StudioComponentSubtype m_subtype;
    bool m_subtypeHasBeenSet;

    StudioComponentType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
