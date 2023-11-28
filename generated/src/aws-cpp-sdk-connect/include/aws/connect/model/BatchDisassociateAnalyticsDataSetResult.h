/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ErrorResult.h>
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
namespace Connect
{
namespace Model
{
  class BatchDisassociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult();
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeleted() const{ return m_deleted; }

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline void SetDeleted(const Aws::Vector<Aws::String>& value) { m_deleted = value; }

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline void SetDeleted(Aws::Vector<Aws::String>&& value) { m_deleted = std::move(value); }

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& WithDeleted(const Aws::Vector<Aws::String>& value) { SetDeleted(value); return *this;}

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& WithDeleted(Aws::Vector<Aws::String>&& value) { SetDeleted(std::move(value)); return *this;}

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& AddDeleted(const Aws::String& value) { m_deleted.push_back(value); return *this; }

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& AddDeleted(Aws::String&& value) { m_deleted.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& AddDeleted(const char* value) { m_deleted.push_back(value); return *this; }


    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline const Aws::Vector<ErrorResult>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline void SetErrors(const Aws::Vector<ErrorResult>& value) { m_errors = value; }

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline void SetErrors(Aws::Vector<ErrorResult>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& WithErrors(const Aws::Vector<ErrorResult>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& WithErrors(Aws::Vector<ErrorResult>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& AddErrors(const ErrorResult& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline BatchDisassociateAnalyticsDataSetResult& AddErrors(ErrorResult&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDisassociateAnalyticsDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDisassociateAnalyticsDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDisassociateAnalyticsDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_deleted;

    Aws::Vector<ErrorResult> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
