/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/PrimitiveMessageDefinition.h>
#include <aws/iotfleetwise/model/StructuredMessageFieldNameAndDataTypePair.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <memory>

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
namespace IoTFleetWise
{
namespace Model
{
  class StructuredMessageListDefinition;
  class StructuredMessageFieldNameAndDataTypePair;

  /**
   * <p>The structured message for the message signal. It can be defined with either
   * a <code>primitiveMessageDefinition</code>,
   * <code>structuredMessageListDefinition</code>, or
   * <code>structuredMessageDefinition</code> recursively.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StructuredMessage">AWS
   * API Reference</a></p>
   */
  class StructuredMessage
  {
  public:
    AWS_IOTFLEETWISE_API StructuredMessage();
    AWS_IOTFLEETWISE_API StructuredMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline const PrimitiveMessageDefinition& GetPrimitiveMessageDefinition() const{ return m_primitiveMessageDefinition; }

    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline bool PrimitiveMessageDefinitionHasBeenSet() const { return m_primitiveMessageDefinitionHasBeenSet; }

    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline void SetPrimitiveMessageDefinition(const PrimitiveMessageDefinition& value) { m_primitiveMessageDefinitionHasBeenSet = true; m_primitiveMessageDefinition = value; }

    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline void SetPrimitiveMessageDefinition(PrimitiveMessageDefinition&& value) { m_primitiveMessageDefinitionHasBeenSet = true; m_primitiveMessageDefinition = std::move(value); }

    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline StructuredMessage& WithPrimitiveMessageDefinition(const PrimitiveMessageDefinition& value) { SetPrimitiveMessageDefinition(value); return *this;}

    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline StructuredMessage& WithPrimitiveMessageDefinition(PrimitiveMessageDefinition&& value) { SetPrimitiveMessageDefinition(std::move(value)); return *this;}


    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API const StructuredMessageListDefinition& GetStructuredMessageListDefinition() const;

    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API bool StructuredMessageListDefinitionHasBeenSet() const;

    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API void SetStructuredMessageListDefinition(const StructuredMessageListDefinition& value);

    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API void SetStructuredMessageListDefinition(StructuredMessageListDefinition&& value);

    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API StructuredMessage& WithStructuredMessageListDefinition(const StructuredMessageListDefinition& value);

    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    AWS_IOTFLEETWISE_API StructuredMessage& WithStructuredMessageListDefinition(StructuredMessageListDefinition&& value);


    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline const Aws::Vector<StructuredMessageFieldNameAndDataTypePair>& GetStructuredMessageDefinition() const{ return m_structuredMessageDefinition; }

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline bool StructuredMessageDefinitionHasBeenSet() const { return m_structuredMessageDefinitionHasBeenSet; }

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline void SetStructuredMessageDefinition(const Aws::Vector<StructuredMessageFieldNameAndDataTypePair>& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition = value; }

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline void SetStructuredMessageDefinition(Aws::Vector<StructuredMessageFieldNameAndDataTypePair>&& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition = std::move(value); }

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline StructuredMessage& WithStructuredMessageDefinition(const Aws::Vector<StructuredMessageFieldNameAndDataTypePair>& value) { SetStructuredMessageDefinition(value); return *this;}

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline StructuredMessage& WithStructuredMessageDefinition(Aws::Vector<StructuredMessageFieldNameAndDataTypePair>&& value) { SetStructuredMessageDefinition(std::move(value)); return *this;}

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline StructuredMessage& AddStructuredMessageDefinition(const StructuredMessageFieldNameAndDataTypePair& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition.push_back(value); return *this; }

    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline StructuredMessage& AddStructuredMessageDefinition(StructuredMessageFieldNameAndDataTypePair&& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition.push_back(std::move(value)); return *this; }

  private:

    PrimitiveMessageDefinition m_primitiveMessageDefinition;
    bool m_primitiveMessageDefinitionHasBeenSet = false;

    std::shared_ptr<StructuredMessageListDefinition> m_structuredMessageListDefinition;
    bool m_structuredMessageListDefinitionHasBeenSet = false;

    Aws::Vector<StructuredMessageFieldNameAndDataTypePair> m_structuredMessageDefinition;
    bool m_structuredMessageDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
