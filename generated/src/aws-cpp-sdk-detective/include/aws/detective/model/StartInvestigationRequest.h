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
    AWS_DETECTIVE_API StartInvestigationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInvestigation"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline StartInvestigationRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline StartInvestigationRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline StartInvestigationRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline StartInvestigationRequest& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline StartInvestigationRequest& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline StartInvestigationRequest& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeStartTime() const{ return m_scopeStartTime; }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline bool ScopeStartTimeHasBeenSet() const { return m_scopeStartTimeHasBeenSet; }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeStartTime(const Aws::Utils::DateTime& value) { m_scopeStartTimeHasBeenSet = true; m_scopeStartTime = value; }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeStartTime(Aws::Utils::DateTime&& value) { m_scopeStartTimeHasBeenSet = true; m_scopeStartTime = std::move(value); }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline StartInvestigationRequest& WithScopeStartTime(const Aws::Utils::DateTime& value) { SetScopeStartTime(value); return *this;}

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline StartInvestigationRequest& WithScopeStartTime(Aws::Utils::DateTime&& value) { SetScopeStartTime(std::move(value)); return *this;}


    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeEndTime() const{ return m_scopeEndTime; }

    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline bool ScopeEndTimeHasBeenSet() const { return m_scopeEndTimeHasBeenSet; }

    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeEndTime(const Aws::Utils::DateTime& value) { m_scopeEndTimeHasBeenSet = true; m_scopeEndTime = value; }

    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeEndTime(Aws::Utils::DateTime&& value) { m_scopeEndTimeHasBeenSet = true; m_scopeEndTime = std::move(value); }

    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline StartInvestigationRequest& WithScopeEndTime(const Aws::Utils::DateTime& value) { SetScopeEndTime(value); return *this;}

    /**
     * <p>The data and time when the investigation ended. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline StartInvestigationRequest& WithScopeEndTime(Aws::Utils::DateTime&& value) { SetScopeEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::Utils::DateTime m_scopeStartTime;
    bool m_scopeStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scopeEndTime;
    bool m_scopeEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
