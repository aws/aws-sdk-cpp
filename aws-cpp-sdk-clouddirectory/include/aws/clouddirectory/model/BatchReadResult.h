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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/BatchReadOperationResponse.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API BatchReadResult
  {
  public:
    BatchReadResult();
    BatchReadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchReadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline const Aws::Vector<BatchReadOperationResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline void SetResponses(const Aws::Vector<BatchReadOperationResponse>& value) { m_responses = value; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline void SetResponses(Aws::Vector<BatchReadOperationResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& WithResponses(const Aws::Vector<BatchReadOperationResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& WithResponses(Aws::Vector<BatchReadOperationResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& AddResponses(const BatchReadOperationResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& AddResponses(BatchReadOperationResponse&& value) { m_responses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchReadOperationResponse> m_responses;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
