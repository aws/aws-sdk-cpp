/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/SlaStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/SlaType.h>
#include <aws/connectcases/model/FieldValueUnion.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Represents an SLA configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SlaConfiguration">AWS
   * API Reference</a></p>
   */
  class SlaConfiguration
  {
  public:
    AWS_CONNECTCASES_API SlaConfiguration() = default;
    AWS_CONNECTCASES_API SlaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API SlaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time at which an SLA was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    SlaConfiguration& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    SlaConfiguration& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of an SLA.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SlaConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of an SLA.</p>
     */
    inline SlaStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SlaStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SlaConfiguration& WithStatus(SlaStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list of target field values for the fieldId specified in
     * SlaConfiguration.</p>
     */
    inline const Aws::Vector<FieldValueUnion>& GetTargetFieldValues() const { return m_targetFieldValues; }
    inline bool TargetFieldValuesHasBeenSet() const { return m_targetFieldValuesHasBeenSet; }
    template<typename TargetFieldValuesT = Aws::Vector<FieldValueUnion>>
    void SetTargetFieldValues(TargetFieldValuesT&& value) { m_targetFieldValuesHasBeenSet = true; m_targetFieldValues = std::forward<TargetFieldValuesT>(value); }
    template<typename TargetFieldValuesT = Aws::Vector<FieldValueUnion>>
    SlaConfiguration& WithTargetFieldValues(TargetFieldValuesT&& value) { SetTargetFieldValues(std::forward<TargetFieldValuesT>(value)); return *this;}
    template<typename TargetFieldValuesT = FieldValueUnion>
    SlaConfiguration& AddTargetFieldValues(TargetFieldValuesT&& value) { m_targetFieldValuesHasBeenSet = true; m_targetFieldValues.emplace_back(std::forward<TargetFieldValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Target time by which an SLA should be completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTargetTime() const { return m_targetTime; }
    inline bool TargetTimeHasBeenSet() const { return m_targetTimeHasBeenSet; }
    template<typename TargetTimeT = Aws::Utils::DateTime>
    void SetTargetTime(TargetTimeT&& value) { m_targetTimeHasBeenSet = true; m_targetTime = std::forward<TargetTimeT>(value); }
    template<typename TargetTimeT = Aws::Utils::DateTime>
    SlaConfiguration& WithTargetTime(TargetTimeT&& value) { SetTargetTime(std::forward<TargetTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of SLA.</p>
     */
    inline SlaType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SlaType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SlaConfiguration& WithType(SlaType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SlaStatus m_status{SlaStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<FieldValueUnion> m_targetFieldValues;
    bool m_targetFieldValuesHasBeenSet = false;

    Aws::Utils::DateTime m_targetTime{};
    bool m_targetTimeHasBeenSet = false;

    SlaType m_type{SlaType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
