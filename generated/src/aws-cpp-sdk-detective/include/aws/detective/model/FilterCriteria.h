/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/StringFilter.h>
#include <aws/detective/model/DateFilter.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details on the criteria used to define the filter for investigation
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/FilterCriteria">AWS
   * API Reference</a></p>
   */
  class FilterCriteria
  {
  public:
    AWS_DETECTIVE_API FilterCriteria() = default;
    AWS_DETECTIVE_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter the investigation results based on the severity.</p>
     */
    inline const StringFilter& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = StringFilter>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = StringFilter>
    FilterCriteria& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the status.</p>
     */
    inline const StringFilter& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = StringFilter>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = StringFilter>
    FilterCriteria& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the state.</p>
     */
    inline const StringFilter& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = StringFilter>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = StringFilter>
    FilterCriteria& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the Amazon Resource Name (ARN) of
     * the entity.</p>
     */
    inline const StringFilter& GetEntityArn() const { return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    template<typename EntityArnT = StringFilter>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = StringFilter>
    FilterCriteria& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on when the investigation was
     * created.</p>
     */
    inline const DateFilter& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = DateFilter>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = DateFilter>
    FilterCriteria& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}
  private:

    StringFilter m_severity;
    bool m_severityHasBeenSet = false;

    StringFilter m_status;
    bool m_statusHasBeenSet = false;

    StringFilter m_state;
    bool m_stateHasBeenSet = false;

    StringFilter m_entityArn;
    bool m_entityArnHasBeenSet = false;

    DateFilter m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
