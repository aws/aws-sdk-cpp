/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API GetModelsRequest : public FraudDetectorRequest
  {
  public:
    GetModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetModels"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type.</p>
     */
    inline GetModelsRequest& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline GetModelsRequest& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The model ID.</p>
     */
    inline GetModelsRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline GetModelsRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline GetModelsRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The next token for the request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token for the request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next token for the request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next token for the request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next token for the request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next token for the request.</p>
     */
    inline GetModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token for the request.</p>
     */
    inline GetModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token for the request.</p>
     */
    inline GetModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum results to return for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum results to return for the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum results to return for the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum results to return for the request.</p>
     */
    inline GetModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
