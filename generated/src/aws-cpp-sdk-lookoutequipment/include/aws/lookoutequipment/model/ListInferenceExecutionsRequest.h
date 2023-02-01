/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/InferenceExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListInferenceExecutionsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceExecutions"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline ListInferenceExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline ListInferenceExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline ListInferenceExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the maximum number of inference executions to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of inference executions to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of inference executions to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of inference executions to list. </p>
     */
    inline ListInferenceExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline ListInferenceExecutionsRequest& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline ListInferenceExecutionsRequest& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline ListInferenceExecutionsRequest& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTimeAfter() const{ return m_dataStartTimeAfter; }

    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline bool DataStartTimeAfterHasBeenSet() const { return m_dataStartTimeAfterHasBeenSet; }

    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline void SetDataStartTimeAfter(const Aws::Utils::DateTime& value) { m_dataStartTimeAfterHasBeenSet = true; m_dataStartTimeAfter = value; }

    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline void SetDataStartTimeAfter(Aws::Utils::DateTime&& value) { m_dataStartTimeAfterHasBeenSet = true; m_dataStartTimeAfter = std::move(value); }

    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithDataStartTimeAfter(const Aws::Utils::DateTime& value) { SetDataStartTimeAfter(value); return *this;}

    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithDataStartTimeAfter(Aws::Utils::DateTime&& value) { SetDataStartTimeAfter(std::move(value)); return *this;}


    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTimeBefore() const{ return m_dataEndTimeBefore; }

    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline bool DataEndTimeBeforeHasBeenSet() const { return m_dataEndTimeBeforeHasBeenSet; }

    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline void SetDataEndTimeBefore(const Aws::Utils::DateTime& value) { m_dataEndTimeBeforeHasBeenSet = true; m_dataEndTimeBefore = value; }

    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline void SetDataEndTimeBefore(Aws::Utils::DateTime&& value) { m_dataEndTimeBeforeHasBeenSet = true; m_dataEndTimeBefore = std::move(value); }

    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithDataEndTimeBefore(const Aws::Utils::DateTime& value) { SetDataEndTimeBefore(value); return *this;}

    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithDataEndTimeBefore(Aws::Utils::DateTime&& value) { SetDataEndTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The status of the inference execution. </p>
     */
    inline const InferenceExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the inference execution. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the inference execution. </p>
     */
    inline void SetStatus(const InferenceExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the inference execution. </p>
     */
    inline void SetStatus(InferenceExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithStatus(const InferenceExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the inference execution. </p>
     */
    inline ListInferenceExecutionsRequest& WithStatus(InferenceExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTimeAfter;
    bool m_dataStartTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTimeBefore;
    bool m_dataEndTimeBeforeHasBeenSet = false;

    InferenceExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
