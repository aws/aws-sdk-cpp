/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/Resource.h>
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
namespace FMS
{
namespace Model
{
  class ListResourceSetResourcesResult
  {
  public:
    AWS_FMS_API ListResourceSetResourcesResult();
    AWS_FMS_API ListResourceSetResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListResourceSetResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline const Aws::Vector<Resource>& GetItems() const{ return m_items; }

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline void SetItems(const Aws::Vector<Resource>& value) { m_items = value; }

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline void SetItems(Aws::Vector<Resource>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline ListResourceSetResourcesResult& WithItems(const Aws::Vector<Resource>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline ListResourceSetResourcesResult& WithItems(Aws::Vector<Resource>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline ListResourceSetResourcesResult& AddItems(const Resource& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of the associated resources' uniform resource identifiers (URI).</p>
     */
    inline ListResourceSetResourcesResult& AddItems(Resource&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListResourceSetResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListResourceSetResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListResourceSetResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Resource> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
