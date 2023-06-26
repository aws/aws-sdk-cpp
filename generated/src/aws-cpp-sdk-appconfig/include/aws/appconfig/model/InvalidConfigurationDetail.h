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
    AWS_APPCONFIG_API InvalidConfigurationDetail();
    AWS_APPCONFIG_API InvalidConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API InvalidConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetConstraint() const{ return m_constraint; }

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline void SetConstraint(const Aws::String& value) { m_constraintHasBeenSet = true; m_constraint = value; }

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline void SetConstraint(Aws::String&& value) { m_constraintHasBeenSet = true; m_constraint = std::move(value); }

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline void SetConstraint(const char* value) { m_constraintHasBeenSet = true; m_constraint.assign(value); }

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithConstraint(const Aws::String& value) { SetConstraint(value); return *this;}

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithConstraint(Aws::String&& value) { SetConstraint(std::move(value)); return *this;}

    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithConstraint(const char* value) { SetConstraint(value); return *this;}


    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline InvalidConfigurationDetail& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline InvalidConfigurationDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline InvalidConfigurationDetail& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline InvalidConfigurationDetail& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline InvalidConfigurationDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline InvalidConfigurationDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline InvalidConfigurationDetail& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline InvalidConfigurationDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline InvalidConfigurationDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline InvalidConfigurationDetail& WithValue(const char* value) { SetValue(value); return *this;}

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
