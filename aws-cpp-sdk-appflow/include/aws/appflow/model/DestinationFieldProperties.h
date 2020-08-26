/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

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
  class AWS_APPFLOW_API DestinationFieldProperties
  {
  public:
    DestinationFieldProperties();
    DestinationFieldProperties(Aws::Utils::Json::JsonView jsonValue);
    DestinationFieldProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    bool m_isCreatable;
    bool m_isCreatableHasBeenSet;

    bool m_isNullable;
    bool m_isNullableHasBeenSet;

    bool m_isUpsertable;
    bool m_isUpsertableHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
