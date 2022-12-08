/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Evaluation.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluationsResponse">AWS
   * API Reference</a></p>
   */
  class PutEvaluationsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutEvaluationsResult();
    AWS_CONFIGSERVICE_API PutEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline const Aws::Vector<Evaluation>& GetFailedEvaluations() const{ return m_failedEvaluations; }

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline void SetFailedEvaluations(const Aws::Vector<Evaluation>& value) { m_failedEvaluations = value; }

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline void SetFailedEvaluations(Aws::Vector<Evaluation>&& value) { m_failedEvaluations = std::move(value); }

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline PutEvaluationsResult& WithFailedEvaluations(const Aws::Vector<Evaluation>& value) { SetFailedEvaluations(value); return *this;}

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline PutEvaluationsResult& WithFailedEvaluations(Aws::Vector<Evaluation>&& value) { SetFailedEvaluations(std::move(value)); return *this;}

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline PutEvaluationsResult& AddFailedEvaluations(const Evaluation& value) { m_failedEvaluations.push_back(value); return *this; }

    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline PutEvaluationsResult& AddFailedEvaluations(Evaluation&& value) { m_failedEvaluations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Evaluation> m_failedEvaluations;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
