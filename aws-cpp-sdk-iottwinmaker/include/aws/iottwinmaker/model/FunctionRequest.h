/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/Scope.h>
#include <aws/iottwinmaker/model/DataConnector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The function request body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/FunctionRequest">AWS
   * API Reference</a></p>
   */
  class FunctionRequest
  {
  public:
    AWS_IOTTWINMAKER_API FunctionRequest();
    AWS_IOTTWINMAKER_API FunctionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FunctionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The required properties of the function.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredProperties() const{ return m_requiredProperties; }

    /**
     * <p>The required properties of the function.</p>
     */
    inline bool RequiredPropertiesHasBeenSet() const { return m_requiredPropertiesHasBeenSet; }

    /**
     * <p>The required properties of the function.</p>
     */
    inline void SetRequiredProperties(const Aws::Vector<Aws::String>& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties = value; }

    /**
     * <p>The required properties of the function.</p>
     */
    inline void SetRequiredProperties(Aws::Vector<Aws::String>&& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties = std::move(value); }

    /**
     * <p>The required properties of the function.</p>
     */
    inline FunctionRequest& WithRequiredProperties(const Aws::Vector<Aws::String>& value) { SetRequiredProperties(value); return *this;}

    /**
     * <p>The required properties of the function.</p>
     */
    inline FunctionRequest& WithRequiredProperties(Aws::Vector<Aws::String>&& value) { SetRequiredProperties(std::move(value)); return *this;}

    /**
     * <p>The required properties of the function.</p>
     */
    inline FunctionRequest& AddRequiredProperties(const Aws::String& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties.push_back(value); return *this; }

    /**
     * <p>The required properties of the function.</p>
     */
    inline FunctionRequest& AddRequiredProperties(Aws::String&& value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>The required properties of the function.</p>
     */
    inline FunctionRequest& AddRequiredProperties(const char* value) { m_requiredPropertiesHasBeenSet = true; m_requiredProperties.push_back(value); return *this; }


    /**
     * <p>The scope of the function.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>The scope of the function.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The scope of the function.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope of the function.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The scope of the function.</p>
     */
    inline FunctionRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>The scope of the function.</p>
     */
    inline FunctionRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The data connector.</p>
     */
    inline const DataConnector& GetImplementedBy() const{ return m_implementedBy; }

    /**
     * <p>The data connector.</p>
     */
    inline bool ImplementedByHasBeenSet() const { return m_implementedByHasBeenSet; }

    /**
     * <p>The data connector.</p>
     */
    inline void SetImplementedBy(const DataConnector& value) { m_implementedByHasBeenSet = true; m_implementedBy = value; }

    /**
     * <p>The data connector.</p>
     */
    inline void SetImplementedBy(DataConnector&& value) { m_implementedByHasBeenSet = true; m_implementedBy = std::move(value); }

    /**
     * <p>The data connector.</p>
     */
    inline FunctionRequest& WithImplementedBy(const DataConnector& value) { SetImplementedBy(value); return *this;}

    /**
     * <p>The data connector.</p>
     */
    inline FunctionRequest& WithImplementedBy(DataConnector&& value) { SetImplementedBy(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_requiredProperties;
    bool m_requiredPropertiesHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    DataConnector m_implementedBy;
    bool m_implementedByHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
