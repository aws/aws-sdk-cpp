/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListRetrainingSchedulersRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRetrainingSchedulers"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline const Aws::String& GetModelNameBeginsWith() const{ return m_modelNameBeginsWith; }

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline bool ModelNameBeginsWithHasBeenSet() const { return m_modelNameBeginsWithHasBeenSet; }

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline void SetModelNameBeginsWith(const Aws::String& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = value; }

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline void SetModelNameBeginsWith(Aws::String&& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = std::move(value); }

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline void SetModelNameBeginsWith(const char* value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith.assign(value); }

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline ListRetrainingSchedulersRequest& WithModelNameBeginsWith(const Aws::String& value) { SetModelNameBeginsWith(value); return *this;}

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline ListRetrainingSchedulersRequest& WithModelNameBeginsWith(Aws::String&& value) { SetModelNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline ListRetrainingSchedulersRequest& WithModelNameBeginsWith(const char* value) { SetModelNameBeginsWith(value); return *this;}


    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline const RetrainingSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline void SetStatus(const RetrainingSchedulerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline void SetStatus(RetrainingSchedulerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline ListRetrainingSchedulersRequest& WithStatus(const RetrainingSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline ListRetrainingSchedulersRequest& WithStatus(RetrainingSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline ListRetrainingSchedulersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline ListRetrainingSchedulersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline ListRetrainingSchedulersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the maximum number of retraining schedulers to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of retraining schedulers to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of retraining schedulers to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of retraining schedulers to list. </p>
     */
    inline ListRetrainingSchedulersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_modelNameBeginsWith;
    bool m_modelNameBeginsWithHasBeenSet = false;

    RetrainingSchedulerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
