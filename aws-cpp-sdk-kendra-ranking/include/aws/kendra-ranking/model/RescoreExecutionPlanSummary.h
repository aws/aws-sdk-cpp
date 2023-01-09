/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanStatus.h>
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
namespace KendraRanking
{
namespace Model
{

  /**
   * <p>Summary information for a rescore execution plan. A rescore execution plan is
   * an Amazon Kendra Intelligent Ranking resource used for provisioning the
   * <code>Rescore</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/RescoreExecutionPlanSummary">AWS
   * API Reference</a></p>
   */
  class RescoreExecutionPlanSummary
  {
  public:
    AWS_KENDRARANKING_API RescoreExecutionPlanSummary();
    AWS_KENDRARANKING_API RescoreExecutionPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API RescoreExecutionPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline RescoreExecutionPlanSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline RescoreExecutionPlanSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the rescore execution plan was created.</p>
     */
    inline RescoreExecutionPlanSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline RescoreExecutionPlanSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the rescore execution plan was last updated.</p>
     */
    inline RescoreExecutionPlanSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline const RescoreExecutionPlanStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline void SetStatus(const RescoreExecutionPlanStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline void SetStatus(RescoreExecutionPlanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline RescoreExecutionPlanSummary& WithStatus(const RescoreExecutionPlanStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use.</p>
     */
    inline RescoreExecutionPlanSummary& WithStatus(RescoreExecutionPlanStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    RescoreExecutionPlanStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
