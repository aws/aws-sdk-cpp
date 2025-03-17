/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsError.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class BatchUpdateExclusionWindowsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult();
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of SLO IDs that were successfully processed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSloIds() const{ return m_sloIds; }
    inline void SetSloIds(const Aws::Vector<Aws::String>& value) { m_sloIds = value; }
    inline void SetSloIds(Aws::Vector<Aws::String>&& value) { m_sloIds = std::move(value); }
    inline BatchUpdateExclusionWindowsResult& WithSloIds(const Aws::Vector<Aws::String>& value) { SetSloIds(value); return *this;}
    inline BatchUpdateExclusionWindowsResult& WithSloIds(Aws::Vector<Aws::String>&& value) { SetSloIds(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsResult& AddSloIds(const Aws::String& value) { m_sloIds.push_back(value); return *this; }
    inline BatchUpdateExclusionWindowsResult& AddSloIds(Aws::String&& value) { m_sloIds.push_back(std::move(value)); return *this; }
    inline BatchUpdateExclusionWindowsResult& AddSloIds(const char* value) { m_sloIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline const Aws::Vector<BatchUpdateExclusionWindowsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchUpdateExclusionWindowsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchUpdateExclusionWindowsError>&& value) { m_errors = std::move(value); }
    inline BatchUpdateExclusionWindowsResult& WithErrors(const Aws::Vector<BatchUpdateExclusionWindowsError>& value) { SetErrors(value); return *this;}
    inline BatchUpdateExclusionWindowsResult& WithErrors(Aws::Vector<BatchUpdateExclusionWindowsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsResult& AddErrors(const BatchUpdateExclusionWindowsError& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateExclusionWindowsResult& AddErrors(BatchUpdateExclusionWindowsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateExclusionWindowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateExclusionWindowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sloIds;

    Aws::Vector<BatchUpdateExclusionWindowsError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
