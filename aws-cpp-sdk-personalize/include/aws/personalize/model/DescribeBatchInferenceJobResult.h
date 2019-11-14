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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/BatchInferenceJob.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeBatchInferenceJobResult
  {
  public:
    DescribeBatchInferenceJobResult();
    DescribeBatchInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBatchInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline const BatchInferenceJob& GetBatchInferenceJob() const{ return m_batchInferenceJob; }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline void SetBatchInferenceJob(const BatchInferenceJob& value) { m_batchInferenceJob = value; }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline void SetBatchInferenceJob(BatchInferenceJob&& value) { m_batchInferenceJob = std::move(value); }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline DescribeBatchInferenceJobResult& WithBatchInferenceJob(const BatchInferenceJob& value) { SetBatchInferenceJob(value); return *this;}

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline DescribeBatchInferenceJobResult& WithBatchInferenceJob(BatchInferenceJob&& value) { SetBatchInferenceJob(std::move(value)); return *this;}

  private:

    BatchInferenceJob m_batchInferenceJob;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
