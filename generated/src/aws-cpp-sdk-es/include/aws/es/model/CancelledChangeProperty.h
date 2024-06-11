﻿/**
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
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty();
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API CancelledChangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }
    inline CancelledChangeProperty& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}
    inline CancelledChangeProperty& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}
    inline CancelledChangeProperty& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline const Aws::String& GetCancelledValue() const{ return m_cancelledValue; }
    inline bool CancelledValueHasBeenSet() const { return m_cancelledValueHasBeenSet; }
    inline void SetCancelledValue(const Aws::String& value) { m_cancelledValueHasBeenSet = true; m_cancelledValue = value; }
    inline void SetCancelledValue(Aws::String&& value) { m_cancelledValueHasBeenSet = true; m_cancelledValue = std::move(value); }
    inline void SetCancelledValue(const char* value) { m_cancelledValueHasBeenSet = true; m_cancelledValue.assign(value); }
    inline CancelledChangeProperty& WithCancelledValue(const Aws::String& value) { SetCancelledValue(value); return *this;}
    inline CancelledChangeProperty& WithCancelledValue(Aws::String&& value) { SetCancelledValue(std::move(value)); return *this;}
    inline CancelledChangeProperty& WithCancelledValue(const char* value) { SetCancelledValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline const Aws::String& GetActiveValue() const{ return m_activeValue; }
    inline bool ActiveValueHasBeenSet() const { return m_activeValueHasBeenSet; }
    inline void SetActiveValue(const Aws::String& value) { m_activeValueHasBeenSet = true; m_activeValue = value; }
    inline void SetActiveValue(Aws::String&& value) { m_activeValueHasBeenSet = true; m_activeValue = std::move(value); }
    inline void SetActiveValue(const char* value) { m_activeValueHasBeenSet = true; m_activeValue.assign(value); }
    inline CancelledChangeProperty& WithActiveValue(const Aws::String& value) { SetActiveValue(value); return *this;}
    inline CancelledChangeProperty& WithActiveValue(Aws::String&& value) { SetActiveValue(std::move(value)); return *this;}
    inline CancelledChangeProperty& WithActiveValue(const char* value) { SetActiveValue(value); return *this;}
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
