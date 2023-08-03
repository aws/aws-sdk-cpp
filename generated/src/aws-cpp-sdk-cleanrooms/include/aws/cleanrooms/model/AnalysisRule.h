/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/AnalysisRulePolicy.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>A specification about how data from the configured table can be used in a
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRule">AWS
   * API Reference</a></p>
   */
  class AnalysisRule
  {
  public:
    AWS_CLEANROOMS_API AnalysisRule();
    AWS_CLEANROOMS_API AnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline AnalysisRule& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline AnalysisRule& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline AnalysisRule& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The type of analysis rule.</p>
     */
    inline const AnalysisRuleType& GetType() const{ return m_type; }

    /**
     * <p>The type of analysis rule.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of analysis rule.</p>
     */
    inline void SetType(const AnalysisRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of analysis rule.</p>
     */
    inline void SetType(AnalysisRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of analysis rule.</p>
     */
    inline AnalysisRule& WithType(const AnalysisRuleType& value) { SetType(value); return *this;}

    /**
     * <p>The type of analysis rule.</p>
     */
    inline AnalysisRule& WithType(AnalysisRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name for the analysis rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline AnalysisRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline AnalysisRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the analysis rule.</p>
     */
    inline AnalysisRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline AnalysisRule& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the analysis rule was created.</p>
     */
    inline AnalysisRule& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline AnalysisRule& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the analysis rule was last updated.</p>
     */
    inline AnalysisRule& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline const AnalysisRulePolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline void SetPolicy(const AnalysisRulePolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline void SetPolicy(AnalysisRulePolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline AnalysisRule& WithPolicy(const AnalysisRulePolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>A policy that describes the associated data usage limitations.</p>
     */
    inline AnalysisRule& WithPolicy(AnalysisRulePolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    AnalysisRuleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    AnalysisRulePolicy m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
