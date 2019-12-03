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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_FRAUDDETECTOR_API BatchCreateVariableResult
  {
  public:
    BatchCreateVariableResult();
    BatchCreateVariableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchCreateVariableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<BatchCreateVariableError> m_errors;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
