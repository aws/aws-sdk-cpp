/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/BackendAPIConflictResolution.h>
#include <aws/amplifybackend/model/BackendAPIAuthType.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The resource config for the data model, configured as a part of the Amplify
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAPIResourceConfig">AWS
   * API Reference</a></p>
   */
  class BackendAPIResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig();
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional authentication methods used to interact with your data models.</p>
     */
    inline const Aws::Vector<BackendAPIAuthType>& GetAdditionalAuthTypes() const{ return m_additionalAuthTypes; }
    inline bool AdditionalAuthTypesHasBeenSet() const { return m_additionalAuthTypesHasBeenSet; }
    inline void SetAdditionalAuthTypes(const Aws::Vector<BackendAPIAuthType>& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes = value; }
    inline void SetAdditionalAuthTypes(Aws::Vector<BackendAPIAuthType>&& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes = std::move(value); }
    inline BackendAPIResourceConfig& WithAdditionalAuthTypes(const Aws::Vector<BackendAPIAuthType>& value) { SetAdditionalAuthTypes(value); return *this;}
    inline BackendAPIResourceConfig& WithAdditionalAuthTypes(Aws::Vector<BackendAPIAuthType>&& value) { SetAdditionalAuthTypes(std::move(value)); return *this;}
    inline BackendAPIResourceConfig& AddAdditionalAuthTypes(const BackendAPIAuthType& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes.push_back(value); return *this; }
    inline BackendAPIResourceConfig& AddAdditionalAuthTypes(BackendAPIAuthType&& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The API name used to interact with the data model, configured as a part of
     * your Amplify project.</p>
     */
    inline const Aws::String& GetApiName() const{ return m_apiName; }
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }
    inline void SetApiName(const Aws::String& value) { m_apiNameHasBeenSet = true; m_apiName = value; }
    inline void SetApiName(Aws::String&& value) { m_apiNameHasBeenSet = true; m_apiName = std::move(value); }
    inline void SetApiName(const char* value) { m_apiNameHasBeenSet = true; m_apiName.assign(value); }
    inline BackendAPIResourceConfig& WithApiName(const Aws::String& value) { SetApiName(value); return *this;}
    inline BackendAPIResourceConfig& WithApiName(Aws::String&& value) { SetApiName(std::move(value)); return *this;}
    inline BackendAPIResourceConfig& WithApiName(const char* value) { SetApiName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conflict resolution strategy for your data stored in the data models.</p>
     */
    inline const BackendAPIConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    inline void SetConflictResolution(const BackendAPIConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }
    inline void SetConflictResolution(BackendAPIConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }
    inline BackendAPIResourceConfig& WithConflictResolution(const BackendAPIConflictResolution& value) { SetConflictResolution(value); return *this;}
    inline BackendAPIResourceConfig& WithConflictResolution(BackendAPIConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication type for interacting with the configured data
     * models in your Amplify project.</p>
     */
    inline const BackendAPIAuthType& GetDefaultAuthType() const{ return m_defaultAuthType; }
    inline bool DefaultAuthTypeHasBeenSet() const { return m_defaultAuthTypeHasBeenSet; }
    inline void SetDefaultAuthType(const BackendAPIAuthType& value) { m_defaultAuthTypeHasBeenSet = true; m_defaultAuthType = value; }
    inline void SetDefaultAuthType(BackendAPIAuthType&& value) { m_defaultAuthTypeHasBeenSet = true; m_defaultAuthType = std::move(value); }
    inline BackendAPIResourceConfig& WithDefaultAuthType(const BackendAPIAuthType& value) { SetDefaultAuthType(value); return *this;}
    inline BackendAPIResourceConfig& WithDefaultAuthType(BackendAPIAuthType&& value) { SetDefaultAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service used to provision and interact with the data model.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline BackendAPIResourceConfig& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline BackendAPIResourceConfig& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline BackendAPIResourceConfig& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the data model in the annotated transform of the GraphQL
     * schema.</p>
     */
    inline const Aws::String& GetTransformSchema() const{ return m_transformSchema; }
    inline bool TransformSchemaHasBeenSet() const { return m_transformSchemaHasBeenSet; }
    inline void SetTransformSchema(const Aws::String& value) { m_transformSchemaHasBeenSet = true; m_transformSchema = value; }
    inline void SetTransformSchema(Aws::String&& value) { m_transformSchemaHasBeenSet = true; m_transformSchema = std::move(value); }
    inline void SetTransformSchema(const char* value) { m_transformSchemaHasBeenSet = true; m_transformSchema.assign(value); }
    inline BackendAPIResourceConfig& WithTransformSchema(const Aws::String& value) { SetTransformSchema(value); return *this;}
    inline BackendAPIResourceConfig& WithTransformSchema(Aws::String&& value) { SetTransformSchema(std::move(value)); return *this;}
    inline BackendAPIResourceConfig& WithTransformSchema(const char* value) { SetTransformSchema(value); return *this;}
    ///@}
  private:

    Aws::Vector<BackendAPIAuthType> m_additionalAuthTypes;
    bool m_additionalAuthTypesHasBeenSet = false;

    Aws::String m_apiName;
    bool m_apiNameHasBeenSet = false;

    BackendAPIConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;

    BackendAPIAuthType m_defaultAuthType;
    bool m_defaultAuthTypeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_transformSchema;
    bool m_transformSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
