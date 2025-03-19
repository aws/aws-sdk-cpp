/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Detailed information about the bad request exception error when creating a
   * hosted configuration version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/InvalidConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class InvalidConfigurationDetail
  {
  public:
    AWS_APPCONFIG_API InvalidConfigurationDetail() = default;
    AWS_APPCONFIG_API InvalidConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API InvalidConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetConstraint() const { return m_constraint; }
    inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }
    template<typename ConstraintT = Aws::String>
    void SetConstraint(ConstraintT&& value) { m_constraintHasBeenSet = true; m_constraint = std::forward<ConstraintT>(value); }
    template<typename ConstraintT = Aws::String>
    InvalidConfigurationDetail& WithConstraint(ConstraintT&& value) { SetConstraint(std::forward<ConstraintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    InvalidConfigurationDetail& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    InvalidConfigurationDetail& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    InvalidConfigurationDetail& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    InvalidConfigurationDetail& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_constraint;
    bool m_constraintHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
