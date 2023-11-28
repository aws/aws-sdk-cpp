/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AnalyticsDataAssociationResult.h>
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
  class BatchAssociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult();
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline const Aws::Vector<AnalyticsDataAssociationResult>& GetCreated() const{ return m_created; }

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline void SetCreated(const Aws::Vector<AnalyticsDataAssociationResult>& value) { m_created = value; }

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline void SetCreated(Aws::Vector<AnalyticsDataAssociationResult>&& value) { m_created = std::move(value); }

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline BatchAssociateAnalyticsDataSetResult& WithCreated(const Aws::Vector<AnalyticsDataAssociationResult>& value) { SetCreated(value); return *this;}

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline BatchAssociateAnalyticsDataSetResult& WithCreated(Aws::Vector<AnalyticsDataAssociationResult>&& value) { SetCreated(std::move(value)); return *this;}

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline BatchAssociateAnalyticsDataSetResult& AddCreated(const AnalyticsDataAssociationResult& value) { m_created.push_back(value); return *this; }

    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline BatchAssociateAnalyticsDataSetResult& AddCreated(AnalyticsDataAssociationResult&& value) { m_created.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline const Aws::Vector<ErrorResult>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline void SetErrors(const Aws::Vector<ErrorResult>& value) { m_errors = value; }

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline void SetErrors(Aws::Vector<ErrorResult>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline BatchAssociateAnalyticsDataSetResult& WithErrors(const Aws::Vector<ErrorResult>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline BatchAssociateAnalyticsDataSetResult& WithErrors(Aws::Vector<ErrorResult>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline BatchAssociateAnalyticsDataSetResult& AddErrors(const ErrorResult& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline BatchAssociateAnalyticsDataSetResult& AddErrors(ErrorResult&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchAssociateAnalyticsDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchAssociateAnalyticsDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchAssociateAnalyticsDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalyticsDataAssociationResult> m_created;

    Aws::Vector<ErrorResult> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
