﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/BatchWriteOperationResponse.h>
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
  class AWS_CLOUDDIRECTORY_API BatchWriteResult
  {
  public:
    BatchWriteResult();
    BatchWriteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchWriteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline const Aws::Vector<BatchWriteOperationResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline void SetResponses(const Aws::Vector<BatchWriteOperationResponse>& value) { m_responses = value; }

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline void SetResponses(Aws::Vector<BatchWriteOperationResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline BatchWriteResult& WithResponses(const Aws::Vector<BatchWriteOperationResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline BatchWriteResult& WithResponses(Aws::Vector<BatchWriteOperationResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline BatchWriteResult& AddResponses(const BatchWriteOperationResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline BatchWriteResult& AddResponses(BatchWriteOperationResponse&& value) { m_responses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchWriteOperationResponse> m_responses;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
