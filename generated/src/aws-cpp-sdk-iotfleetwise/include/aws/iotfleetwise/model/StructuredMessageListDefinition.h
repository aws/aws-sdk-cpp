/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/StructuredMessageListType.h>
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
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition();
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline StructuredMessageListDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline StructuredMessageListDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the structured message list definition. </p>
     */
    inline StructuredMessageListDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API const StructuredMessage& GetMemberType() const;

    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API bool MemberTypeHasBeenSet() const;

    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API void SetMemberType(const StructuredMessage& value);

    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API void SetMemberType(StructuredMessage&& value);

    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition& WithMemberType(const StructuredMessage& value);

    /**
     * <p>The member type of the structured message list definition.</p>
     */
    AWS_IOTFLEETWISE_API StructuredMessageListDefinition& WithMemberType(StructuredMessage&& value);


    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline const StructuredMessageListType& GetListType() const{ return m_listType; }

    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline bool ListTypeHasBeenSet() const { return m_listTypeHasBeenSet; }

    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline void SetListType(const StructuredMessageListType& value) { m_listTypeHasBeenSet = true; m_listType = value; }

    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline void SetListType(StructuredMessageListType&& value) { m_listTypeHasBeenSet = true; m_listType = std::move(value); }

    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline StructuredMessageListDefinition& WithListType(const StructuredMessageListType& value) { SetListType(value); return *this;}

    /**
     * <p>The type of list of the structured message list definition.</p>
     */
    inline StructuredMessageListDefinition& WithListType(StructuredMessageListType&& value) { SetListType(std::move(value)); return *this;}


    /**
     * <p>The capacity of the structured message list definition when the list type is
     * <code>FIXED_CAPACITY</code> or <code>DYNAMIC_BOUNDED_CAPACITY</code>.</p>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The capacity of the structured message list definition when the list type is
     * <code>FIXED_CAPACITY</code> or <code>DYNAMIC_BOUNDED_CAPACITY</code>.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The capacity of the structured message list definition when the list type is
     * <code>FIXED_CAPACITY</code> or <code>DYNAMIC_BOUNDED_CAPACITY</code>.</p>
     */
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The capacity of the structured message list definition when the list type is
     * <code>FIXED_CAPACITY</code> or <code>DYNAMIC_BOUNDED_CAPACITY</code>.</p>
     */
    inline StructuredMessageListDefinition& WithCapacity(int value) { SetCapacity(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<StructuredMessage> m_memberType;
    bool m_memberTypeHasBeenSet = false;

    StructuredMessageListType m_listType;
    bool m_listTypeHasBeenSet = false;

    int m_capacity;
    bool m_capacityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
