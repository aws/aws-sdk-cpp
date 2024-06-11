﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Validator.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppConfig
{
namespace Model
{
  class UpdateConfigurationProfileResult
  {
  public:
    AWS_APPCONFIG_API UpdateConfigurationProfileResult();
    AWS_APPCONFIG_API UpdateConfigurationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateConfigurationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline UpdateConfigurationProfileResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateConfigurationProfileResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateConfigurationProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateConfigurationProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateConfigurationProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateConfigurationProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateConfigurationProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConfigurationProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI location of the configuration.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }
    inline UpdateConfigurationProfileResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline UpdateConfigurationProfileResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArn = value; }
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArn = std::move(value); }
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArn.assign(value); }
    inline UpdateConfigurationProfileResult& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}
    inline UpdateConfigurationProfileResult& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validators = value; }
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validators = std::move(value); }
    inline UpdateConfigurationProfileResult& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}
    inline UpdateConfigurationProfileResult& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& AddValidators(const Validator& value) { m_validators.push_back(value); return *this; }
    inline UpdateConfigurationProfileResult& AddValidators(Validator&& value) { m_validators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline UpdateConfigurationProfileResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline UpdateConfigurationProfileResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key to encrypt new
     * configuration data versions in the AppConfig hosted configuration store. This
     * attribute is only used for <code>hosted</code> configuration types. To encrypt
     * data managed in other configuration stores, see the documentation for how to
     * specify an KMS key for that particular service.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline UpdateConfigurationProfileResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline UpdateConfigurationProfileResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key identifier (key ID, key alias, or key ARN)
     * provided when the resource was created or updated.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline UpdateConfigurationProfileResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline UpdateConfigurationProfileResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConfigurationProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConfigurationProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConfigurationProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_locationUri;

    Aws::String m_retrievalRoleArn;

    Aws::Vector<Validator> m_validators;

    Aws::String m_type;

    Aws::String m_kmsKeyArn;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
