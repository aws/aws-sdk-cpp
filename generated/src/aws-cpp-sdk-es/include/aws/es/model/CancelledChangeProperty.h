/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>A property change that was cancelled for an Amazon OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelledChangeProperty">AWS
   * API Reference</a></p>
   */
  class CancelledChangeProperty
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty() = default;
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline const Aws::String& GetPropertyName() const { return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    template<typename PropertyNameT = Aws::String>
    void SetPropertyName(PropertyNameT&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::forward<PropertyNameT>(value); }
    template<typename PropertyNameT = Aws::String>
    CancelledChangeProperty& WithPropertyName(PropertyNameT&& value) { SetPropertyName(std::forward<PropertyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline const Aws::String& GetCancelledValue() const { return m_cancelledValue; }
    inline bool CancelledValueHasBeenSet() const { return m_cancelledValueHasBeenSet; }
    template<typename CancelledValueT = Aws::String>
    void SetCancelledValue(CancelledValueT&& value) { m_cancelledValueHasBeenSet = true; m_cancelledValue = std::forward<CancelledValueT>(value); }
    template<typename CancelledValueT = Aws::String>
    CancelledChangeProperty& WithCancelledValue(CancelledValueT&& value) { SetCancelledValue(std::forward<CancelledValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline const Aws::String& GetActiveValue() const { return m_activeValue; }
    inline bool ActiveValueHasBeenSet() const { return m_activeValueHasBeenSet; }
    template<typename ActiveValueT = Aws::String>
    void SetActiveValue(ActiveValueT&& value) { m_activeValueHasBeenSet = true; m_activeValue = std::forward<ActiveValueT>(value); }
    template<typename ActiveValueT = Aws::String>
    CancelledChangeProperty& WithActiveValue(ActiveValueT&& value) { SetActiveValue(std::forward<ActiveValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    Aws::String m_cancelledValue;
    bool m_cancelledValueHasBeenSet = false;

    Aws::String m_activeValue;
    bool m_activeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
