/**
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
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeAnalysisPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAnalysisPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis whose
     * permissions you're describing. You must be using the Amazon Web Services account
     * that the analysis is in.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis whose permissions you're describing. The ID is part of
     * the analysis URL.</p>
     */
    inline DescribeAnalysisPermissionsRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
