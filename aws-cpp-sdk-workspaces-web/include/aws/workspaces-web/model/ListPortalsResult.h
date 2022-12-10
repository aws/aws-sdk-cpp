/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/PortalSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListPortalsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListPortalsResult();
    AWS_WORKSPACESWEB_API ListPortalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListPortalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListPortalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListPortalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline ListPortalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The portals in the list.</p>
     */
    inline const Aws::Vector<PortalSummary>& GetPortals() const{ return m_portals; }

    /**
     * <p>The portals in the list.</p>
     */
    inline void SetPortals(const Aws::Vector<PortalSummary>& value) { m_portals = value; }

    /**
     * <p>The portals in the list.</p>
     */
    inline void SetPortals(Aws::Vector<PortalSummary>&& value) { m_portals = std::move(value); }

    /**
     * <p>The portals in the list.</p>
     */
    inline ListPortalsResult& WithPortals(const Aws::Vector<PortalSummary>& value) { SetPortals(value); return *this;}

    /**
     * <p>The portals in the list.</p>
     */
    inline ListPortalsResult& WithPortals(Aws::Vector<PortalSummary>&& value) { SetPortals(std::move(value)); return *this;}

    /**
     * <p>The portals in the list.</p>
     */
    inline ListPortalsResult& AddPortals(const PortalSummary& value) { m_portals.push_back(value); return *this; }

    /**
     * <p>The portals in the list.</p>
     */
    inline ListPortalsResult& AddPortals(PortalSummary&& value) { m_portals.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<PortalSummary> m_portals;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
