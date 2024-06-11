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


    ///@{
    /**
     * <p>The invalid or out-of-range validation constraint in your JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetConstraint() const{ return m_constraint; }
    inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }
    inline void SetConstraint(const Aws::String& value) { m_constraintHasBeenSet = true; m_constraint = value; }
    inline void SetConstraint(Aws::String&& value) { m_constraintHasBeenSet = true; m_constraint = std::move(value); }
    inline void SetConstraint(const char* value) { m_constraintHasBeenSet = true; m_constraint.assign(value); }
    inline InvalidConfigurationDetail& WithConstraint(const Aws::String& value) { SetConstraint(value); return *this;}
    inline InvalidConfigurationDetail& WithConstraint(Aws::String&& value) { SetConstraint(std::move(value)); return *this;}
    inline InvalidConfigurationDetail& WithConstraint(const char* value) { SetConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the validation constraint in the configuration JSON schema that
     * failed validation.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline InvalidConfigurationDetail& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline InvalidConfigurationDetail& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline InvalidConfigurationDetail& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for an invalid configuration error.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline InvalidConfigurationDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline InvalidConfigurationDetail& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline InvalidConfigurationDetail& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error for an invalid configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline InvalidConfigurationDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline InvalidConfigurationDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline InvalidConfigurationDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an error with Lambda when a synchronous extension experiences
     * an error during an invocation.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline InvalidConfigurationDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline InvalidConfigurationDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline InvalidConfigurationDetail& WithValue(const char* value) { SetValue(value); return *this;}
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
