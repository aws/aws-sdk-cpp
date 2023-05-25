/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/SdkConfigurationProperty.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A type of SDK that API Gateway can generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkType">AWS
   * API Reference</a></p>
   */
  class SdkType
  {
  public:
    AWS_APIGATEWAY_API SdkType();
    AWS_APIGATEWAY_API SdkType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API SdkType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline SdkType& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline SdkType& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline SdkType& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline const Aws::String& GetFriendlyName() const{ return m_friendlyName; }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline bool FriendlyNameHasBeenSet() const { return m_friendlyNameHasBeenSet; }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(const Aws::String& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = value; }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(Aws::String&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::move(value); }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(const char* value) { m_friendlyNameHasBeenSet = true; m_friendlyName.assign(value); }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline SdkType& WithFriendlyName(const Aws::String& value) { SetFriendlyName(value); return *this;}

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline SdkType& WithFriendlyName(Aws::String&& value) { SetFriendlyName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline SdkType& WithFriendlyName(const char* value) { SetFriendlyName(value); return *this;}


    /**
     * <p>The description of an SdkType.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline SdkType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of an SdkType.</p>
     */
    inline SdkType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an SdkType.</p>
     */
    inline SdkType& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline const Aws::Vector<SdkConfigurationProperty>& GetConfigurationProperties() const{ return m_configurationProperties; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline bool ConfigurationPropertiesHasBeenSet() const { return m_configurationPropertiesHasBeenSet; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline void SetConfigurationProperties(const Aws::Vector<SdkConfigurationProperty>& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = value; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline void SetConfigurationProperties(Aws::Vector<SdkConfigurationProperty>&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = std::move(value); }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline SdkType& WithConfigurationProperties(const Aws::Vector<SdkConfigurationProperty>& value) { SetConfigurationProperties(value); return *this;}

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline SdkType& WithConfigurationProperties(Aws::Vector<SdkConfigurationProperty>&& value) { SetConfigurationProperties(std::move(value)); return *this;}

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline SdkType& AddConfigurationProperties(const SdkConfigurationProperty& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.push_back(value); return *this; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline SdkType& AddConfigurationProperties(SdkConfigurationProperty&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline SdkType& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SdkType& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SdkType& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_friendlyName;
    bool m_friendlyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SdkConfigurationProperty> m_configurationProperties;
    bool m_configurationPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
