/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SlaType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/FieldValueUnion.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The SLA configuration for Case SlaAssignmentType.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CaseSlaConfiguration">AWS
   * API Reference</a></p>
   */
  class CaseSlaConfiguration
  {
  public:
    AWS_CONNECT_API CaseSlaConfiguration() = default;
    AWS_CONNECT_API CaseSlaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CaseSlaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of an SLA.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CaseSlaConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of SLA for Case SlaAssignmentType.</p>
     */
    inline SlaType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SlaType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CaseSlaConfiguration& WithType(SlaType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a Case field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    CaseSlaConfiguration& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list of target field values for the fieldId specified in
     * CaseSlaConfiguration. The SLA is considered met if any one of these target field
     * values matches the actual field value.</p>
     */
    inline const Aws::Vector<FieldValueUnion>& GetTargetFieldValues() const { return m_targetFieldValues; }
    inline bool TargetFieldValuesHasBeenSet() const { return m_targetFieldValuesHasBeenSet; }
    template<typename TargetFieldValuesT = Aws::Vector<FieldValueUnion>>
    void SetTargetFieldValues(TargetFieldValuesT&& value) { m_targetFieldValuesHasBeenSet = true; m_targetFieldValues = std::forward<TargetFieldValuesT>(value); }
    template<typename TargetFieldValuesT = Aws::Vector<FieldValueUnion>>
    CaseSlaConfiguration& WithTargetFieldValues(TargetFieldValuesT&& value) { SetTargetFieldValues(std::forward<TargetFieldValuesT>(value)); return *this;}
    template<typename TargetFieldValuesT = FieldValueUnion>
    CaseSlaConfiguration& AddTargetFieldValues(TargetFieldValuesT&& value) { m_targetFieldValuesHasBeenSet = true; m_targetFieldValues.emplace_back(std::forward<TargetFieldValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Target duration in minutes within which an SLA should be completed.</p>
     */
    inline long long GetTargetSlaMinutes() const { return m_targetSlaMinutes; }
    inline bool TargetSlaMinutesHasBeenSet() const { return m_targetSlaMinutesHasBeenSet; }
    inline void SetTargetSlaMinutes(long long value) { m_targetSlaMinutesHasBeenSet = true; m_targetSlaMinutes = value; }
    inline CaseSlaConfiguration& WithTargetSlaMinutes(long long value) { SetTargetSlaMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SlaType m_type{SlaType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::Vector<FieldValueUnion> m_targetFieldValues;
    bool m_targetFieldValuesHasBeenSet = false;

    long long m_targetSlaMinutes{0};
    bool m_targetSlaMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
