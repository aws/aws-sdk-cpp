/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/ValidatorType.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>A summary of a configuration profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ConfigurationProfileSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationProfileSummary
  {
  public:
    AWS_APPCONFIG_API ConfigurationProfileSummary();
    AWS_APPCONFIG_API ConfigurationProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API ConfigurationProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ConfigurationProfileSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ConfigurationProfileSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfigurationProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfigurationProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI location of the configuration.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }
    inline ConfigurationProfileSummary& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline ConfigurationProfileSummary& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline const Aws::Vector<ValidatorType>& GetValidatorTypes() const{ return m_validatorTypes; }
    inline bool ValidatorTypesHasBeenSet() const { return m_validatorTypesHasBeenSet; }
    inline void SetValidatorTypes(const Aws::Vector<ValidatorType>& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes = value; }
    inline void SetValidatorTypes(Aws::Vector<ValidatorType>&& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes = std::move(value); }
    inline ConfigurationProfileSummary& WithValidatorTypes(const Aws::Vector<ValidatorType>& value) { SetValidatorTypes(value); return *this;}
    inline ConfigurationProfileSummary& WithValidatorTypes(Aws::Vector<ValidatorType>&& value) { SetValidatorTypes(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& AddValidatorTypes(const ValidatorType& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes.push_back(value); return *this; }
    inline ConfigurationProfileSummary& AddValidatorTypes(ValidatorType&& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes.push_back(std::move(value)); return *this; }
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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConfigurationProfileSummary& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConfigurationProfileSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConfigurationProfileSummary& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Vector<ValidatorType> m_validatorTypes;
    bool m_validatorTypesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
