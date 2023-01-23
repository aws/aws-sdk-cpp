/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/EntityPropertyReference.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
   * <p>The latest value of the property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyLatestValue">AWS
   * API Reference</a></p>
   */
  class PropertyLatestValue
  {
  public:
    AWS_IOTTWINMAKER_API PropertyLatestValue();
    AWS_IOTTWINMAKER_API PropertyLatestValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyLatestValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline const EntityPropertyReference& GetPropertyReference() const{ return m_propertyReference; }

    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline bool PropertyReferenceHasBeenSet() const { return m_propertyReferenceHasBeenSet; }

    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline void SetPropertyReference(const EntityPropertyReference& value) { m_propertyReferenceHasBeenSet = true; m_propertyReference = value; }

    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline void SetPropertyReference(EntityPropertyReference&& value) { m_propertyReferenceHasBeenSet = true; m_propertyReference = std::move(value); }

    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline PropertyLatestValue& WithPropertyReference(const EntityPropertyReference& value) { SetPropertyReference(value); return *this;}

    /**
     * <p>An object that specifies information about a property.&gt;</p>
     */
    inline PropertyLatestValue& WithPropertyReference(EntityPropertyReference&& value) { SetPropertyReference(std::move(value)); return *this;}


    /**
     * <p>The value of the property.</p>
     */
    inline const DataValue& GetPropertyValue() const{ return m_propertyValue; }

    /**
     * <p>The value of the property.</p>
     */
    inline bool PropertyValueHasBeenSet() const { return m_propertyValueHasBeenSet; }

    /**
     * <p>The value of the property.</p>
     */
    inline void SetPropertyValue(const DataValue& value) { m_propertyValueHasBeenSet = true; m_propertyValue = value; }

    /**
     * <p>The value of the property.</p>
     */
    inline void SetPropertyValue(DataValue&& value) { m_propertyValueHasBeenSet = true; m_propertyValue = std::move(value); }

    /**
     * <p>The value of the property.</p>
     */
    inline PropertyLatestValue& WithPropertyValue(const DataValue& value) { SetPropertyValue(value); return *this;}

    /**
     * <p>The value of the property.</p>
     */
    inline PropertyLatestValue& WithPropertyValue(DataValue&& value) { SetPropertyValue(std::move(value)); return *this;}

  private:

    EntityPropertyReference m_propertyReference;
    bool m_propertyReferenceHasBeenSet = false;

    DataValue m_propertyValue;
    bool m_propertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
