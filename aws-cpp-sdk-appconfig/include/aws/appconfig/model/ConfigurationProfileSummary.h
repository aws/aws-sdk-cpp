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
  class AWS_APPCONFIG_API ConfigurationProfileSummary
  {
  public:
    ConfigurationProfileSummary();
    ConfigurationProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline ConfigurationProfileSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ConfigurationProfileSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ConfigurationProfileSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URI location of the configuration.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline ConfigurationProfileSummary& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline ConfigurationProfileSummary& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline ConfigurationProfileSummary& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline const Aws::Vector<ValidatorType>& GetValidatorTypes() const{ return m_validatorTypes; }

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline bool ValidatorTypesHasBeenSet() const { return m_validatorTypesHasBeenSet; }

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline void SetValidatorTypes(const Aws::Vector<ValidatorType>& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes = value; }

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline void SetValidatorTypes(Aws::Vector<ValidatorType>&& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes = std::move(value); }

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithValidatorTypes(const Aws::Vector<ValidatorType>& value) { SetValidatorTypes(value); return *this;}

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& WithValidatorTypes(Aws::Vector<ValidatorType>&& value) { SetValidatorTypes(std::move(value)); return *this;}

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& AddValidatorTypes(const ValidatorType& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes.push_back(value); return *this; }

    /**
     * <p>The types of validators in the configuration profile.</p>
     */
    inline ConfigurationProfileSummary& AddValidatorTypes(ValidatorType&& value) { m_validatorTypesHasBeenSet = true; m_validatorTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet;

    Aws::Vector<ValidatorType> m_validatorTypes;
    bool m_validatorTypesHasBeenSet;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
