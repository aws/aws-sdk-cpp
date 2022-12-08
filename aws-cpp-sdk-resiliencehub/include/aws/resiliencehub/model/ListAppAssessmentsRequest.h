/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/resiliencehub/model/AssessmentInvoker.h>
#include <aws/resiliencehub/model/AssessmentStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListAppAssessmentsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppAssessments"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;

    AWS_RESILIENCEHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListAppAssessmentsRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListAppAssessmentsRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListAppAssessmentsRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The name for the assessment.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>The name for the assessment.</p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p>The name for the assessment.</p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The name for the assessment.</p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p>The name for the assessment.</p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>The name for the assessment.</p>
     */
    inline ListAppAssessmentsRequest& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The name for the assessment.</p>
     */
    inline ListAppAssessmentsRequest& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p>The name for the assessment.</p>
     */
    inline ListAppAssessmentsRequest& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline const Aws::Vector<AssessmentStatus>& GetAssessmentStatus() const{ return m_assessmentStatus; }

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline void SetAssessmentStatus(const Aws::Vector<AssessmentStatus>& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline void SetAssessmentStatus(Aws::Vector<AssessmentStatus>&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::move(value); }

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& WithAssessmentStatus(const Aws::Vector<AssessmentStatus>& value) { SetAssessmentStatus(value); return *this;}

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& WithAssessmentStatus(Aws::Vector<AssessmentStatus>&& value) { SetAssessmentStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& AddAssessmentStatus(const AssessmentStatus& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus.push_back(value); return *this; }

    /**
     * <p>The current status of the assessment for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& AddAssessmentStatus(AssessmentStatus&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline const ComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(const ComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(ComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& WithComplianceStatus(const ComplianceStatus& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline ListAppAssessmentsRequest& WithComplianceStatus(ComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline const AssessmentInvoker& GetInvoker() const{ return m_invoker; }

    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline bool InvokerHasBeenSet() const { return m_invokerHasBeenSet; }

    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline void SetInvoker(const AssessmentInvoker& value) { m_invokerHasBeenSet = true; m_invoker = value; }

    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline void SetInvoker(AssessmentInvoker&& value) { m_invokerHasBeenSet = true; m_invoker = std::move(value); }

    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline ListAppAssessmentsRequest& WithInvoker(const AssessmentInvoker& value) { SetInvoker(value); return *this;}

    /**
     * <p>Specifies the entity that invoked a specific assessment, either a
     * <code>User</code> or the <code>System</code>.</p>
     */
    inline ListAppAssessmentsRequest& WithInvoker(AssessmentInvoker&& value) { SetInvoker(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline ListAppAssessmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppAssessmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline ListAppAssessmentsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::Vector<AssessmentStatus> m_assessmentStatus;
    bool m_assessmentStatusHasBeenSet = false;

    ComplianceStatus m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    AssessmentInvoker m_invoker;
    bool m_invokerHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
