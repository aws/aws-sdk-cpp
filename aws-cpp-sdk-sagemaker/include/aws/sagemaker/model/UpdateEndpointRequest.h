/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VariantProperty.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateEndpointRequest : public SageMakerRequest
  {
  public:
    UpdateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline UpdateEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline UpdateEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline UpdateEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline UpdateEndpointRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline UpdateEndpointRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline UpdateEndpointRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>When updating endpoint resources, enables or disables the retention of
     * variant properties, such as the instance count or the variant weight. To retain
     * the variant properties of an endpoint when updating it, set
     * <code>RetainAllVariantProperties</code> to <code>true</code>. To use the variant
     * properties specified in a new <code>EndpointConfig</code> call when updating an
     * endpoint, set <code>RetainAllVariantProperties</code> to <code>false</code>.</p>
     */
    inline bool GetRetainAllVariantProperties() const{ return m_retainAllVariantProperties; }

    /**
     * <p>When updating endpoint resources, enables or disables the retention of
     * variant properties, such as the instance count or the variant weight. To retain
     * the variant properties of an endpoint when updating it, set
     * <code>RetainAllVariantProperties</code> to <code>true</code>. To use the variant
     * properties specified in a new <code>EndpointConfig</code> call when updating an
     * endpoint, set <code>RetainAllVariantProperties</code> to <code>false</code>.</p>
     */
    inline bool RetainAllVariantPropertiesHasBeenSet() const { return m_retainAllVariantPropertiesHasBeenSet; }

    /**
     * <p>When updating endpoint resources, enables or disables the retention of
     * variant properties, such as the instance count or the variant weight. To retain
     * the variant properties of an endpoint when updating it, set
     * <code>RetainAllVariantProperties</code> to <code>true</code>. To use the variant
     * properties specified in a new <code>EndpointConfig</code> call when updating an
     * endpoint, set <code>RetainAllVariantProperties</code> to <code>false</code>.</p>
     */
    inline void SetRetainAllVariantProperties(bool value) { m_retainAllVariantPropertiesHasBeenSet = true; m_retainAllVariantProperties = value; }

    /**
     * <p>When updating endpoint resources, enables or disables the retention of
     * variant properties, such as the instance count or the variant weight. To retain
     * the variant properties of an endpoint when updating it, set
     * <code>RetainAllVariantProperties</code> to <code>true</code>. To use the variant
     * properties specified in a new <code>EndpointConfig</code> call when updating an
     * endpoint, set <code>RetainAllVariantProperties</code> to <code>false</code>.</p>
     */
    inline UpdateEndpointRequest& WithRetainAllVariantProperties(bool value) { SetRetainAllVariantProperties(value); return *this;}


    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline const Aws::Vector<VariantProperty>& GetExcludeRetainedVariantProperties() const{ return m_excludeRetainedVariantProperties; }

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline bool ExcludeRetainedVariantPropertiesHasBeenSet() const { return m_excludeRetainedVariantPropertiesHasBeenSet; }

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline void SetExcludeRetainedVariantProperties(const Aws::Vector<VariantProperty>& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties = value; }

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline void SetExcludeRetainedVariantProperties(Aws::Vector<VariantProperty>&& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties = std::move(value); }

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline UpdateEndpointRequest& WithExcludeRetainedVariantProperties(const Aws::Vector<VariantProperty>& value) { SetExcludeRetainedVariantProperties(value); return *this;}

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline UpdateEndpointRequest& WithExcludeRetainedVariantProperties(Aws::Vector<VariantProperty>&& value) { SetExcludeRetainedVariantProperties(std::move(value)); return *this;}

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline UpdateEndpointRequest& AddExcludeRetainedVariantProperties(const VariantProperty& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties.push_back(value); return *this; }

    /**
     * <p>When you are updating endpoint resources with
     * <a>UpdateEndpointInput$RetainAllVariantProperties</a>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a>VariantProperty</a> to override with the values provided by
     * <code>EndpointConfig</code>. If you don't specify a value for
     * <code>ExcludeAllVariantProperties</code>, no variant properties are overridden.
     * </p>
     */
    inline UpdateEndpointRequest& AddExcludeRetainedVariantProperties(VariantProperty&& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet;

    bool m_retainAllVariantProperties;
    bool m_retainAllVariantPropertiesHasBeenSet;

    Aws::Vector<VariantProperty> m_excludeRetainedVariantProperties;
    bool m_excludeRetainedVariantPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
