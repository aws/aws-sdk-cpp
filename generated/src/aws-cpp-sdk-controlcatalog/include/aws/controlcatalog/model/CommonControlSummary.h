/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/AssociatedDomainSummary.h>
#include <aws/controlcatalog/model/AssociatedObjectiveSummary.h>
#include <aws/core/utils/DateTime.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A summary of metadata for a common control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/CommonControlSummary">AWS
   * API Reference</a></p>
   */
  class CommonControlSummary
  {
  public:
    AWS_CONTROLCATALOG_API CommonControlSummary();
    AWS_CONTROLCATALOG_API CommonControlSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API CommonControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the common control.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CommonControlSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CommonControlSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CommonControlSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the common control.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CommonControlSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CommonControlSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CommonControlSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the common control.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CommonControlSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CommonControlSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CommonControlSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain that the common control belongs to.</p>
     */
    inline const AssociatedDomainSummary& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const AssociatedDomainSummary& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(AssociatedDomainSummary&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline CommonControlSummary& WithDomain(const AssociatedDomainSummary& value) { SetDomain(value); return *this;}
    inline CommonControlSummary& WithDomain(AssociatedDomainSummary&& value) { SetDomain(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The objective that the common control belongs to.</p>
     */
    inline const AssociatedObjectiveSummary& GetObjective() const{ return m_objective; }
    inline bool ObjectiveHasBeenSet() const { return m_objectiveHasBeenSet; }
    inline void SetObjective(const AssociatedObjectiveSummary& value) { m_objectiveHasBeenSet = true; m_objective = value; }
    inline void SetObjective(AssociatedObjectiveSummary&& value) { m_objectiveHasBeenSet = true; m_objective = std::move(value); }
    inline CommonControlSummary& WithObjective(const AssociatedObjectiveSummary& value) { SetObjective(value); return *this;}
    inline CommonControlSummary& WithObjective(AssociatedObjectiveSummary&& value) { SetObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the common control was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CommonControlSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CommonControlSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the common control was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline CommonControlSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline CommonControlSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AssociatedDomainSummary m_domain;
    bool m_domainHasBeenSet = false;

    AssociatedObjectiveSummary m_objective;
    bool m_objectiveHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
