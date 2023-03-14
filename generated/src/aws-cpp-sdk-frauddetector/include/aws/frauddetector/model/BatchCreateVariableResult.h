/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/BatchCreateVariableError.h>
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
namespace FraudDetector
{
namespace Model
{
  class BatchCreateVariableResult
  {
  public:
    AWS_FRAUDDETECTOR_API BatchCreateVariableResult();
    AWS_FRAUDDETECTOR_API BatchCreateVariableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API BatchCreateVariableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline const Aws::Vector<BatchCreateVariableError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchCreateVariableError>& value) { m_errors = value; }

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline void SetErrors(Aws::Vector<BatchCreateVariableError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline BatchCreateVariableResult& WithErrors(const Aws::Vector<BatchCreateVariableError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline BatchCreateVariableResult& WithErrors(Aws::Vector<BatchCreateVariableError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline BatchCreateVariableResult& AddErrors(const BatchCreateVariableError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Provides the errors for the <code>BatchCreateVariable</code> request.</p>
     */
    inline BatchCreateVariableResult& AddErrors(BatchCreateVariableError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchCreateVariableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchCreateVariableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchCreateVariableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchCreateVariableError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
