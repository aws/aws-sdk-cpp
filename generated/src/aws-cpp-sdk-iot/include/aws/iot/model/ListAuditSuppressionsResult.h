/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditSuppression.h>
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
namespace IoT
{
namespace Model
{
  class ListAuditSuppressionsResult
  {
  public:
    AWS_IOT_API ListAuditSuppressionsResult();
    AWS_IOT_API ListAuditSuppressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditSuppressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of audit suppressions. </p>
     */
    inline const Aws::Vector<AuditSuppression>& GetSuppressions() const{ return m_suppressions; }

    /**
     * <p> List of audit suppressions. </p>
     */
    inline void SetSuppressions(const Aws::Vector<AuditSuppression>& value) { m_suppressions = value; }

    /**
     * <p> List of audit suppressions. </p>
     */
    inline void SetSuppressions(Aws::Vector<AuditSuppression>&& value) { m_suppressions = std::move(value); }

    /**
     * <p> List of audit suppressions. </p>
     */
    inline ListAuditSuppressionsResult& WithSuppressions(const Aws::Vector<AuditSuppression>& value) { SetSuppressions(value); return *this;}

    /**
     * <p> List of audit suppressions. </p>
     */
    inline ListAuditSuppressionsResult& WithSuppressions(Aws::Vector<AuditSuppression>&& value) { SetSuppressions(std::move(value)); return *this;}

    /**
     * <p> List of audit suppressions. </p>
     */
    inline ListAuditSuppressionsResult& AddSuppressions(const AuditSuppression& value) { m_suppressions.push_back(value); return *this; }

    /**
     * <p> List of audit suppressions. </p>
     */
    inline ListAuditSuppressionsResult& AddSuppressions(AuditSuppression&& value) { m_suppressions.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListAuditSuppressionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListAuditSuppressionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListAuditSuppressionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditSuppression> m_suppressions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
