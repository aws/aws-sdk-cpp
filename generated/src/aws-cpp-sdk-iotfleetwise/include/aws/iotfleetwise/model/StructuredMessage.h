/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/PrimitiveMessageDefinition.h>
#include <aws/iotfleetwise/model/StructuredMessageFieldNameAndDataTypePair.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
    AWS_IOTFLEETWISE_API StructuredMessage() = default;
    AWS_IOTFLEETWISE_API StructuredMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a primitive type node of the complex data structure.</p>
     */
    inline const PrimitiveMessageDefinition& GetPrimitiveMessageDefinition() const { return m_primitiveMessageDefinition; }
    inline bool PrimitiveMessageDefinitionHasBeenSet() const { return m_primitiveMessageDefinitionHasBeenSet; }
    template<typename PrimitiveMessageDefinitionT = PrimitiveMessageDefinition>
    void SetPrimitiveMessageDefinition(PrimitiveMessageDefinitionT&& value) { m_primitiveMessageDefinitionHasBeenSet = true; m_primitiveMessageDefinition = std::forward<PrimitiveMessageDefinitionT>(value); }
    template<typename PrimitiveMessageDefinitionT = PrimitiveMessageDefinition>
    StructuredMessage& WithPrimitiveMessageDefinition(PrimitiveMessageDefinitionT&& value) { SetPrimitiveMessageDefinition(std::forward<PrimitiveMessageDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list type node of the complex data structure.</p>
     */
    inline const StructuredMessageListDefinition& GetStructuredMessageListDefinition() const{
      return *m_structuredMessageListDefinition;
    }
    inline bool StructuredMessageListDefinitionHasBeenSet() const { return m_structuredMessageListDefinitionHasBeenSet; }
    template<typename StructuredMessageListDefinitionT = StructuredMessageListDefinition>
    void SetStructuredMessageListDefinition(StructuredMessageListDefinitionT&& value) {
      m_structuredMessageListDefinitionHasBeenSet = true; 
      m_structuredMessageListDefinition = Aws::MakeShared<StructuredMessageListDefinition>("StructuredMessage", std::forward<StructuredMessageListDefinitionT>(value));
    }
    template<typename StructuredMessageListDefinitionT = StructuredMessageListDefinition>
    StructuredMessage& WithStructuredMessageListDefinition(StructuredMessageListDefinitionT&& value) { SetStructuredMessageListDefinition(std::forward<StructuredMessageListDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a struct type node of the complex data structure.</p>
     */
    inline const Aws::Vector<StructuredMessageFieldNameAndDataTypePair>& GetStructuredMessageDefinition() const { return m_structuredMessageDefinition; }
    inline bool StructuredMessageDefinitionHasBeenSet() const { return m_structuredMessageDefinitionHasBeenSet; }
    template<typename StructuredMessageDefinitionT = Aws::Vector<StructuredMessageFieldNameAndDataTypePair>>
    void SetStructuredMessageDefinition(StructuredMessageDefinitionT&& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition = std::forward<StructuredMessageDefinitionT>(value); }
    template<typename StructuredMessageDefinitionT = Aws::Vector<StructuredMessageFieldNameAndDataTypePair>>
    StructuredMessage& WithStructuredMessageDefinition(StructuredMessageDefinitionT&& value) { SetStructuredMessageDefinition(std::forward<StructuredMessageDefinitionT>(value)); return *this;}
    template<typename StructuredMessageDefinitionT = StructuredMessageFieldNameAndDataTypePair>
    StructuredMessage& AddStructuredMessageDefinition(StructuredMessageDefinitionT&& value) { m_structuredMessageDefinitionHasBeenSet = true; m_structuredMessageDefinition.emplace_back(std::forward<StructuredMessageDefinitionT>(value)); return *this; }
    ///@}
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
