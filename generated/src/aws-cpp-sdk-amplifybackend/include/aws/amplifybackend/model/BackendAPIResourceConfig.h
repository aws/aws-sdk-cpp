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
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig() = default;
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional authentication methods used to interact with your data models.</p>
     */
    inline const Aws::Vector<BackendAPIAuthType>& GetAdditionalAuthTypes() const { return m_additionalAuthTypes; }
    inline bool AdditionalAuthTypesHasBeenSet() const { return m_additionalAuthTypesHasBeenSet; }
    template<typename AdditionalAuthTypesT = Aws::Vector<BackendAPIAuthType>>
    void SetAdditionalAuthTypes(AdditionalAuthTypesT&& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes = std::forward<AdditionalAuthTypesT>(value); }
    template<typename AdditionalAuthTypesT = Aws::Vector<BackendAPIAuthType>>
    BackendAPIResourceConfig& WithAdditionalAuthTypes(AdditionalAuthTypesT&& value) { SetAdditionalAuthTypes(std::forward<AdditionalAuthTypesT>(value)); return *this;}
    template<typename AdditionalAuthTypesT = BackendAPIAuthType>
    BackendAPIResourceConfig& AddAdditionalAuthTypes(AdditionalAuthTypesT&& value) { m_additionalAuthTypesHasBeenSet = true; m_additionalAuthTypes.emplace_back(std::forward<AdditionalAuthTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The API name used to interact with the data model, configured as a part of
     * your Amplify project.</p>
     */
    inline const Aws::String& GetApiName() const { return m_apiName; }
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }
    template<typename ApiNameT = Aws::String>
    void SetApiName(ApiNameT&& value) { m_apiNameHasBeenSet = true; m_apiName = std::forward<ApiNameT>(value); }
    template<typename ApiNameT = Aws::String>
    BackendAPIResourceConfig& WithApiName(ApiNameT&& value) { SetApiName(std::forward<ApiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conflict resolution strategy for your data stored in the data models.</p>
     */
    inline const BackendAPIConflictResolution& GetConflictResolution() const { return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    template<typename ConflictResolutionT = BackendAPIConflictResolution>
    void SetConflictResolution(ConflictResolutionT&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::forward<ConflictResolutionT>(value); }
    template<typename ConflictResolutionT = BackendAPIConflictResolution>
    BackendAPIResourceConfig& WithConflictResolution(ConflictResolutionT&& value) { SetConflictResolution(std::forward<ConflictResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication type for interacting with the configured data
     * models in your Amplify project.</p>
     */
    inline const BackendAPIAuthType& GetDefaultAuthType() const { return m_defaultAuthType; }
    inline bool DefaultAuthTypeHasBeenSet() const { return m_defaultAuthTypeHasBeenSet; }
    template<typename DefaultAuthTypeT = BackendAPIAuthType>
    void SetDefaultAuthType(DefaultAuthTypeT&& value) { m_defaultAuthTypeHasBeenSet = true; m_defaultAuthType = std::forward<DefaultAuthTypeT>(value); }
    template<typename DefaultAuthTypeT = BackendAPIAuthType>
    BackendAPIResourceConfig& WithDefaultAuthType(DefaultAuthTypeT&& value) { SetDefaultAuthType(std::forward<DefaultAuthTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service used to provision and interact with the data model.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    BackendAPIResourceConfig& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the data model in the annotated transform of the GraphQL
     * schema.</p>
     */
    inline const Aws::String& GetTransformSchema() const { return m_transformSchema; }
    inline bool TransformSchemaHasBeenSet() const { return m_transformSchemaHasBeenSet; }
    template<typename TransformSchemaT = Aws::String>
    void SetTransformSchema(TransformSchemaT&& value) { m_transformSchemaHasBeenSet = true; m_transformSchema = std::forward<TransformSchemaT>(value); }
    template<typename TransformSchemaT = Aws::String>
    BackendAPIResourceConfig& WithTransformSchema(TransformSchemaT&& value) { SetTransformSchema(std::forward<TransformSchemaT>(value)); return *this;}
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
