/**
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
  class CreateConfigurationProfileResult
  {
  public:
    AWS_APPCONFIG_API CreateConfigurationProfileResult();
    AWS_APPCONFIG_API CreateConfigurationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API CreateConfigurationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateConfigurationProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateConfigurationProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateConfigurationProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline CreateConfigurationProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline CreateConfigurationProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline CreateConfigurationProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration profile description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The configuration profile description.</p>
     */
    inline CreateConfigurationProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The configuration profile description.</p>
     */
    inline CreateConfigurationProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The configuration profile description.</p>
     */
    inline CreateConfigurationProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URI location of the configuration.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline CreateConfigurationProfileResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline CreateConfigurationProfileResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline CreateConfigurationProfileResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArn = value; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline CreateConfigurationProfileResult& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline CreateConfigurationProfileResult& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline CreateConfigurationProfileResult& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}


    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validators = value; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validators = std::move(value); }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileResult& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileResult& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileResult& AddValidators(const Validator& value) { m_validators.push_back(value); return *this; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileResult& AddValidators(Validator&& value) { m_validators.push_back(std::move(value)); return *this; }


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

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileResult& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_locationUri;

    Aws::String m_retrievalRoleArn;

    Aws::Vector<Validator> m_validators;

    Aws::String m_type;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
