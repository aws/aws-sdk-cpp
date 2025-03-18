/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/StructuredMessageListType.h>
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
  class StructuredMessage;

  /**
   * <p>Represents a list type node of the complex data structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StructuredMessageListDefinition">AWS
   * API Reference</a></p>
   */
  class StructuredMessageListDefinition
  {
  public:
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition() = default;
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StructuredMessageListDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member type of the structured message list definition.</p>
     */
    inline const StructuredMessage& GetMemberType() const{
      return *m_memberType;
    }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    template<typename MemberTypeT = StructuredMessage>
    void SetMemberType(MemberTypeT&& value) {
      m_memberTypeHasBeenSet = true; 
      m_memberType = Aws::MakeShared<StructuredMessage>("StructuredMessageListDefinition", std::forward<MemberTypeT>(value));
    }
    template<typename MemberTypeT = StructuredMessage>
    StructuredMessageListDefinition& WithMemberType(MemberTypeT&& value) { SetMemberType(std::forward<MemberTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline StructuredMessageListType GetListType() const { return m_listType; }
    inline bool ListTypeHasBeenSet() const { return m_listTypeHasBeenSet; }
    inline void SetListType(StructuredMessageListType value) { m_listTypeHasBeenSet = true; m_listType = value; }
    inline StructuredMessageListDefinition& WithListType(StructuredMessageListType value) { SetListType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity of the structured message list definition when the list type is
     * <code>FIXED_CAPACITY</code> or <code>DYNAMIC_BOUNDED_CAPACITY</code>.</p>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline StructuredMessageListDefinition& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<StructuredMessage> m_memberType;
    bool m_memberTypeHasBeenSet = false;

    StructuredMessageListType m_listType{StructuredMessageListType::NOT_SET};
    bool m_listTypeHasBeenSet = false;

    int m_capacity{0};
    bool m_capacityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
