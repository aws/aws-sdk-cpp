/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/WriteOperationType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that can be applied to a field when connector is being used
   * as a destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DestinationFieldProperties">AWS
   * API Reference</a></p>
   */
  class DestinationFieldProperties
  {
  public:
    AWS_APPFLOW_API DestinationFieldProperties();
    AWS_APPFLOW_API DestinationFieldProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DestinationFieldProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies if the destination field can be created by the current user. </p>
     */
    inline bool GetIsCreatable() const{ return m_isCreatable; }

    /**
     * <p> Specifies if the destination field can be created by the current user. </p>
     */
    inline bool IsCreatableHasBeenSet() const { return m_isCreatableHasBeenSet; }

    /**
     * <p> Specifies if the destination field can be created by the current user. </p>
     */
    inline void SetIsCreatable(bool value) { m_isCreatableHasBeenSet = true; m_isCreatable = value; }

    /**
     * <p> Specifies if the destination field can be created by the current user. </p>
     */
    inline DestinationFieldProperties& WithIsCreatable(bool value) { SetIsCreatable(value); return *this;}


    /**
     * <p> Specifies if the destination field can have a null value. </p>
     */
    inline bool GetIsNullable() const{ return m_isNullable; }

    /**
     * <p> Specifies if the destination field can have a null value. </p>
     */
    inline bool IsNullableHasBeenSet() const { return m_isNullableHasBeenSet; }

    /**
     * <p> Specifies if the destination field can have a null value. </p>
     */
    inline void SetIsNullable(bool value) { m_isNullableHasBeenSet = true; m_isNullable = value; }

    /**
     * <p> Specifies if the destination field can have a null value. </p>
     */
    inline DestinationFieldProperties& WithIsNullable(bool value) { SetIsNullable(value); return *this;}


    /**
     * <p> Specifies if the flow run can either insert new rows in the destination
     * field if they do not already exist, or update them if they do. </p>
     */
    inline bool GetIsUpsertable() const{ return m_isUpsertable; }

    /**
     * <p> Specifies if the flow run can either insert new rows in the destination
     * field if they do not already exist, or update them if they do. </p>
     */
    inline bool IsUpsertableHasBeenSet() const { return m_isUpsertableHasBeenSet; }

    /**
     * <p> Specifies if the flow run can either insert new rows in the destination
     * field if they do not already exist, or update them if they do. </p>
     */
    inline void SetIsUpsertable(bool value) { m_isUpsertableHasBeenSet = true; m_isUpsertable = value; }

    /**
     * <p> Specifies if the flow run can either insert new rows in the destination
     * field if they do not already exist, or update them if they do. </p>
     */
    inline DestinationFieldProperties& WithIsUpsertable(bool value) { SetIsUpsertable(value); return *this;}


    /**
     * <p> Specifies whether the field can be updated during an <code>UPDATE</code> or
     * <code>UPSERT</code> write operation. </p>
     */
    inline bool GetIsUpdatable() const{ return m_isUpdatable; }

    /**
     * <p> Specifies whether the field can be updated during an <code>UPDATE</code> or
     * <code>UPSERT</code> write operation. </p>
     */
    inline bool IsUpdatableHasBeenSet() const { return m_isUpdatableHasBeenSet; }

    /**
     * <p> Specifies whether the field can be updated during an <code>UPDATE</code> or
     * <code>UPSERT</code> write operation. </p>
     */
    inline void SetIsUpdatable(bool value) { m_isUpdatableHasBeenSet = true; m_isUpdatable = value; }

    /**
     * <p> Specifies whether the field can be updated during an <code>UPDATE</code> or
     * <code>UPSERT</code> write operation. </p>
     */
    inline DestinationFieldProperties& WithIsUpdatable(bool value) { SetIsUpdatable(value); return *this;}


    /**
     * <p>Specifies whether the field can use the default value during a Create
     * operation.</p>
     */
    inline bool GetIsDefaultedOnCreate() const{ return m_isDefaultedOnCreate; }

    /**
     * <p>Specifies whether the field can use the default value during a Create
     * operation.</p>
     */
    inline bool IsDefaultedOnCreateHasBeenSet() const { return m_isDefaultedOnCreateHasBeenSet; }

    /**
     * <p>Specifies whether the field can use the default value during a Create
     * operation.</p>
     */
    inline void SetIsDefaultedOnCreate(bool value) { m_isDefaultedOnCreateHasBeenSet = true; m_isDefaultedOnCreate = value; }

    /**
     * <p>Specifies whether the field can use the default value during a Create
     * operation.</p>
     */
    inline DestinationFieldProperties& WithIsDefaultedOnCreate(bool value) { SetIsDefaultedOnCreate(value); return *this;}


    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline const Aws::Vector<WriteOperationType>& GetSupportedWriteOperations() const{ return m_supportedWriteOperations; }

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline bool SupportedWriteOperationsHasBeenSet() const { return m_supportedWriteOperationsHasBeenSet; }

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline void SetSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = value; }

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline void SetSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = std::move(value); }

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline DestinationFieldProperties& WithSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { SetSupportedWriteOperations(value); return *this;}

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline DestinationFieldProperties& WithSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { SetSupportedWriteOperations(std::move(value)); return *this;}

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline DestinationFieldProperties& AddSupportedWriteOperations(const WriteOperationType& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(value); return *this; }

    /**
     * <p> A list of supported write operations. For each write operation listed, this
     * field can be used in <code>idFieldNames</code> when that write operation is
     * present as a destination option. </p>
     */
    inline DestinationFieldProperties& AddSupportedWriteOperations(WriteOperationType&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(std::move(value)); return *this; }

  private:

    bool m_isCreatable;
    bool m_isCreatableHasBeenSet = false;

    bool m_isNullable;
    bool m_isNullableHasBeenSet = false;

    bool m_isUpsertable;
    bool m_isUpsertableHasBeenSet = false;

    bool m_isUpdatable;
    bool m_isUpdatableHasBeenSet = false;

    bool m_isDefaultedOnCreate;
    bool m_isDefaultedOnCreateHasBeenSet = false;

    Aws::Vector<WriteOperationType> m_supportedWriteOperations;
    bool m_supportedWriteOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
