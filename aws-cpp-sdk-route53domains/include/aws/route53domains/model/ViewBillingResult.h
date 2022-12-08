/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/BillingRecord.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ViewBilling response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBillingResponse">AWS
   * API Reference</a></p>
   */
  class ViewBillingResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ViewBillingResult();
    AWS_ROUTE53DOMAINS_API ViewBillingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ViewBillingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = std::move(value); }

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ViewBillingResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ViewBillingResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ViewBillingResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}


    /**
     * <p>A summary of billing records.</p>
     */
    inline const Aws::Vector<BillingRecord>& GetBillingRecords() const{ return m_billingRecords; }

    /**
     * <p>A summary of billing records.</p>
     */
    inline void SetBillingRecords(const Aws::Vector<BillingRecord>& value) { m_billingRecords = value; }

    /**
     * <p>A summary of billing records.</p>
     */
    inline void SetBillingRecords(Aws::Vector<BillingRecord>&& value) { m_billingRecords = std::move(value); }

    /**
     * <p>A summary of billing records.</p>
     */
    inline ViewBillingResult& WithBillingRecords(const Aws::Vector<BillingRecord>& value) { SetBillingRecords(value); return *this;}

    /**
     * <p>A summary of billing records.</p>
     */
    inline ViewBillingResult& WithBillingRecords(Aws::Vector<BillingRecord>&& value) { SetBillingRecords(std::move(value)); return *this;}

    /**
     * <p>A summary of billing records.</p>
     */
    inline ViewBillingResult& AddBillingRecords(const BillingRecord& value) { m_billingRecords.push_back(value); return *this; }

    /**
     * <p>A summary of billing records.</p>
     */
    inline ViewBillingResult& AddBillingRecords(BillingRecord&& value) { m_billingRecords.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextPageMarker;

    Aws::Vector<BillingRecord> m_billingRecords;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
