/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class StartInvestigationRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API StartInvestigationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInvestigation"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    StartInvestigationRequest& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    StartInvestigationRequest& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeStartTime() const { return m_scopeStartTime; }
    inline bool ScopeStartTimeHasBeenSet() const { return m_scopeStartTimeHasBeenSet; }
    template<typename ScopeStartTimeT = Aws::Utils::DateTime>
    void SetScopeStartTime(ScopeStartTimeT&& value) { m_scopeStartTimeHasBeenSet = true; m_scopeStartTime = std::forward<ScopeStartTimeT>(value); }
    template<typename ScopeStartTimeT = Aws::Utils::DateTime>
    StartInvestigationRequest& WithScopeStartTime(ScopeStartTimeT&& value) { SetScopeStartTime(std::forward<ScopeStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeEndTime() const { return m_scopeEndTime; }
    inline bool ScopeEndTimeHasBeenSet() const { return m_scopeEndTimeHasBeenSet; }
    template<typename ScopeEndTimeT = Aws::Utils::DateTime>
    void SetScopeEndTime(ScopeEndTimeT&& value) { m_scopeEndTimeHasBeenSet = true; m_scopeEndTime = std::forward<ScopeEndTimeT>(value); }
    template<typename ScopeEndTimeT = Aws::Utils::DateTime>
    StartInvestigationRequest& WithScopeEndTime(ScopeEndTimeT&& value) { SetScopeEndTime(std::forward<ScopeEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::Utils::DateTime m_scopeStartTime{};
    bool m_scopeStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scopeEndTime{};
    bool m_scopeEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
