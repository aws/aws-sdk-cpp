/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/BatchDeleteFeaturedResultsSetError.h>
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
namespace kendra
{
namespace Model
{
  class BatchDeleteFeaturedResultsSetResult
  {
  public:
    AWS_KENDRA_API BatchDeleteFeaturedResultsSetResult();
    AWS_KENDRA_API BatchDeleteFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchDeleteFeaturedResultsSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline const Aws::Vector<BatchDeleteFeaturedResultsSetError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDeleteFeaturedResultsSetError>& value) { m_errors = value; }

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDeleteFeaturedResultsSetError>&& value) { m_errors = std::move(value); }

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline BatchDeleteFeaturedResultsSetResult& WithErrors(const Aws::Vector<BatchDeleteFeaturedResultsSetError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline BatchDeleteFeaturedResultsSetResult& WithErrors(Aws::Vector<BatchDeleteFeaturedResultsSetError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline BatchDeleteFeaturedResultsSetResult& AddErrors(const BatchDeleteFeaturedResultsSetError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The list of errors for the featured results set IDs, explaining why they
     * couldn't be removed from the index.</p>
     */
    inline BatchDeleteFeaturedResultsSetResult& AddErrors(BatchDeleteFeaturedResultsSetError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeleteFeaturedResultsSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeleteFeaturedResultsSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeleteFeaturedResultsSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchDeleteFeaturedResultsSetError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
