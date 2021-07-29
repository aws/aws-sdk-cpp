﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API DeleteAnalysisRequest : public QuickSightRequest
  {
  public:
    DeleteAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnalysis"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline DeleteAnalysisRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline DeleteAnalysisRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account; where you want to delete an
     * analysis.</p>
     */
    inline DeleteAnalysisRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline DeleteAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline DeleteAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis that you're deleting.</p>
     */
    inline DeleteAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>A value that specifies the number of days that QuickSight waits before it
     * deletes the analysis. You can't use this parameter with the
     * <code>ForceDeleteWithoutRecovery</code> option in the same API call. The default
     * value is 30.</p>
     */
    inline long long GetRecoveryWindowInDays() const{ return m_recoveryWindowInDays; }

    /**
     * <p>A value that specifies the number of days that QuickSight waits before it
     * deletes the analysis. You can't use this parameter with the
     * <code>ForceDeleteWithoutRecovery</code> option in the same API call. The default
     * value is 30.</p>
     */
    inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }

    /**
     * <p>A value that specifies the number of days that QuickSight waits before it
     * deletes the analysis. You can't use this parameter with the
     * <code>ForceDeleteWithoutRecovery</code> option in the same API call. The default
     * value is 30.</p>
     */
    inline void SetRecoveryWindowInDays(long long value) { m_recoveryWindowInDaysHasBeenSet = true; m_recoveryWindowInDays = value; }

    /**
     * <p>A value that specifies the number of days that QuickSight waits before it
     * deletes the analysis. You can't use this parameter with the
     * <code>ForceDeleteWithoutRecovery</code> option in the same API call. The default
     * value is 30.</p>
     */
    inline DeleteAnalysisRequest& WithRecoveryWindowInDays(long long value) { SetRecoveryWindowInDays(value); return *this;}


    /**
     * <p>This option defaults to the value <code>NoForceDeleteWithoutRecovery</code>.
     * To immediately delete the analysis, add the
     * <code>ForceDeleteWithoutRecovery</code> option. You can't restore an analysis
     * after it's deleted. </p>
     */
    inline bool GetForceDeleteWithoutRecovery() const{ return m_forceDeleteWithoutRecovery; }

    /**
     * <p>This option defaults to the value <code>NoForceDeleteWithoutRecovery</code>.
     * To immediately delete the analysis, add the
     * <code>ForceDeleteWithoutRecovery</code> option. You can't restore an analysis
     * after it's deleted. </p>
     */
    inline bool ForceDeleteWithoutRecoveryHasBeenSet() const { return m_forceDeleteWithoutRecoveryHasBeenSet; }

    /**
     * <p>This option defaults to the value <code>NoForceDeleteWithoutRecovery</code>.
     * To immediately delete the analysis, add the
     * <code>ForceDeleteWithoutRecovery</code> option. You can't restore an analysis
     * after it's deleted. </p>
     */
    inline void SetForceDeleteWithoutRecovery(bool value) { m_forceDeleteWithoutRecoveryHasBeenSet = true; m_forceDeleteWithoutRecovery = value; }

    /**
     * <p>This option defaults to the value <code>NoForceDeleteWithoutRecovery</code>.
     * To immediately delete the analysis, add the
     * <code>ForceDeleteWithoutRecovery</code> option. You can't restore an analysis
     * after it's deleted. </p>
     */
    inline DeleteAnalysisRequest& WithForceDeleteWithoutRecovery(bool value) { SetForceDeleteWithoutRecovery(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet;

    long long m_recoveryWindowInDays;
    bool m_recoveryWindowInDaysHasBeenSet;

    bool m_forceDeleteWithoutRecovery;
    bool m_forceDeleteWithoutRecoveryHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
