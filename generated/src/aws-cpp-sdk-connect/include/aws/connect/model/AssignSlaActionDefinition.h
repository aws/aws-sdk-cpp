/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SlaAssignmentType.h>
#include <aws/connect/model/CaseSlaConfiguration.h>
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
   * <p>The AssignSla action definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssignSlaActionDefinition">AWS
   * API Reference</a></p>
   */
  class AssignSlaActionDefinition
  {
  public:
    AWS_CONNECT_API AssignSlaActionDefinition() = default;
    AWS_CONNECT_API AssignSlaActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AssignSlaActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of SLA assignment.</p>
     */
    inline SlaAssignmentType GetSlaAssignmentType() const { return m_slaAssignmentType; }
    inline bool SlaAssignmentTypeHasBeenSet() const { return m_slaAssignmentTypeHasBeenSet; }
    inline void SetSlaAssignmentType(SlaAssignmentType value) { m_slaAssignmentTypeHasBeenSet = true; m_slaAssignmentType = value; }
    inline AssignSlaActionDefinition& WithSlaAssignmentType(SlaAssignmentType value) { SetSlaAssignmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SLA configuration for Case SLA Assignment.</p>
     */
    inline const CaseSlaConfiguration& GetCaseSlaConfiguration() const { return m_caseSlaConfiguration; }
    inline bool CaseSlaConfigurationHasBeenSet() const { return m_caseSlaConfigurationHasBeenSet; }
    template<typename CaseSlaConfigurationT = CaseSlaConfiguration>
    void SetCaseSlaConfiguration(CaseSlaConfigurationT&& value) { m_caseSlaConfigurationHasBeenSet = true; m_caseSlaConfiguration = std::forward<CaseSlaConfigurationT>(value); }
    template<typename CaseSlaConfigurationT = CaseSlaConfiguration>
    AssignSlaActionDefinition& WithCaseSlaConfiguration(CaseSlaConfigurationT&& value) { SetCaseSlaConfiguration(std::forward<CaseSlaConfigurationT>(value)); return *this;}
    ///@}
  private:

    SlaAssignmentType m_slaAssignmentType{SlaAssignmentType::NOT_SET};
    bool m_slaAssignmentTypeHasBeenSet = false;

    CaseSlaConfiguration m_caseSlaConfiguration;
    bool m_caseSlaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
