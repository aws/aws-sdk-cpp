/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListInferenceSchedulersRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceSchedulers"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline ListInferenceSchedulersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies the maximum number of inference schedulers to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of inference schedulers to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of inference schedulers to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of inference schedulers to list. </p>
     */
    inline ListInferenceSchedulersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerNameBeginsWith() const{ return m_inferenceSchedulerNameBeginsWith; }

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline bool InferenceSchedulerNameBeginsWithHasBeenSet() const { return m_inferenceSchedulerNameBeginsWithHasBeenSet; }

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline void SetInferenceSchedulerNameBeginsWith(const Aws::String& value) { m_inferenceSchedulerNameBeginsWithHasBeenSet = true; m_inferenceSchedulerNameBeginsWith = value; }

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline void SetInferenceSchedulerNameBeginsWith(Aws::String&& value) { m_inferenceSchedulerNameBeginsWithHasBeenSet = true; m_inferenceSchedulerNameBeginsWith = std::move(value); }

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline void SetInferenceSchedulerNameBeginsWith(const char* value) { m_inferenceSchedulerNameBeginsWithHasBeenSet = true; m_inferenceSchedulerNameBeginsWith.assign(value); }

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithInferenceSchedulerNameBeginsWith(const Aws::String& value) { SetInferenceSchedulerNameBeginsWith(value); return *this;}

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithInferenceSchedulerNameBeginsWith(Aws::String&& value) { SetInferenceSchedulerNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithInferenceSchedulerNameBeginsWith(const char* value) { SetInferenceSchedulerNameBeginsWith(value); return *this;}


    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model used by the inference scheduler to be listed. </p>
     */
    inline ListInferenceSchedulersRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline ListInferenceSchedulersRequest& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the current status of the inference schedulers to list.</p>
     */
    inline ListInferenceSchedulersRequest& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerNameBeginsWith;
    bool m_inferenceSchedulerNameBeginsWithHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceSchedulerStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
