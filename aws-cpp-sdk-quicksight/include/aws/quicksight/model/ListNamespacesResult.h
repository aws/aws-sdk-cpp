/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceInfoV2.h>
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
namespace QuickSight
{
namespace Model
{
  class ListNamespacesResult
  {
  public:
    AWS_QUICKSIGHT_API ListNamespacesResult();
    AWS_QUICKSIGHT_API ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline const Aws::Vector<NamespaceInfoV2>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline void SetNamespaces(const Aws::Vector<NamespaceInfoV2>& value) { m_namespaces = value; }

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline void SetNamespaces(Aws::Vector<NamespaceInfoV2>&& value) { m_namespaces = std::move(value); }

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline ListNamespacesResult& WithNamespaces(const Aws::Vector<NamespaceInfoV2>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline ListNamespacesResult& WithNamespaces(Aws::Vector<NamespaceInfoV2>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline ListNamespacesResult& AddNamespaces(const NamespaceInfoV2& value) { m_namespaces.push_back(value); return *this; }

    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline ListNamespacesResult& AddNamespaces(NamespaceInfoV2&& value) { m_namespaces.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline ListNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline ListNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline ListNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListNamespacesResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<NamespaceInfoV2> m_namespaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
