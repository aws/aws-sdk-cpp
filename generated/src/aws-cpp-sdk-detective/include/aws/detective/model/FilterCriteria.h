﻿/**
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
    AWS_DETECTIVE_API FilterCriteria();
    AWS_DETECTIVE_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter the investigation results based on the severity.</p>
     */
    inline const StringFilter& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const StringFilter& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(StringFilter&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline FilterCriteria& WithSeverity(const StringFilter& value) { SetSeverity(value); return *this;}
    inline FilterCriteria& WithSeverity(StringFilter&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the status.</p>
     */
    inline const StringFilter& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StringFilter& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StringFilter&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FilterCriteria& WithStatus(const StringFilter& value) { SetStatus(value); return *this;}
    inline FilterCriteria& WithStatus(StringFilter&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the state.</p>
     */
    inline const StringFilter& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StringFilter& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StringFilter&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline FilterCriteria& WithState(const StringFilter& value) { SetState(value); return *this;}
    inline FilterCriteria& WithState(StringFilter&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on the Amazon Resource Name (ARN) of
     * the entity.</p>
     */
    inline const StringFilter& GetEntityArn() const{ return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    inline void SetEntityArn(const StringFilter& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }
    inline void SetEntityArn(StringFilter&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }
    inline FilterCriteria& WithEntityArn(const StringFilter& value) { SetEntityArn(value); return *this;}
    inline FilterCriteria& WithEntityArn(StringFilter&& value) { SetEntityArn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the investigation results based on when the investigation was
     * created.</p>
     */
    inline const DateFilter& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const DateFilter& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(DateFilter&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline FilterCriteria& WithCreatedTime(const DateFilter& value) { SetCreatedTime(value); return *this;}
    inline FilterCriteria& WithCreatedTime(DateFilter&& value) { SetCreatedTime(std::move(value)); return *this;}
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
