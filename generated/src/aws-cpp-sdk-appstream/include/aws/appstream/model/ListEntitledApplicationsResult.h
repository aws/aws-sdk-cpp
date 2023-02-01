/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/EntitledApplication.h>
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
namespace AppStream
{
namespace Model
{
  class ListEntitledApplicationsResult
  {
  public:
    AWS_APPSTREAM_API ListEntitledApplicationsResult();
    AWS_APPSTREAM_API ListEntitledApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API ListEntitledApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entitled applications.</p>
     */
    inline const Aws::Vector<EntitledApplication>& GetEntitledApplications() const{ return m_entitledApplications; }

    /**
     * <p>The entitled applications.</p>
     */
    inline void SetEntitledApplications(const Aws::Vector<EntitledApplication>& value) { m_entitledApplications = value; }

    /**
     * <p>The entitled applications.</p>
     */
    inline void SetEntitledApplications(Aws::Vector<EntitledApplication>&& value) { m_entitledApplications = std::move(value); }

    /**
     * <p>The entitled applications.</p>
     */
    inline ListEntitledApplicationsResult& WithEntitledApplications(const Aws::Vector<EntitledApplication>& value) { SetEntitledApplications(value); return *this;}

    /**
     * <p>The entitled applications.</p>
     */
    inline ListEntitledApplicationsResult& WithEntitledApplications(Aws::Vector<EntitledApplication>&& value) { SetEntitledApplications(std::move(value)); return *this;}

    /**
     * <p>The entitled applications.</p>
     */
    inline ListEntitledApplicationsResult& AddEntitledApplications(const EntitledApplication& value) { m_entitledApplications.push_back(value); return *this; }

    /**
     * <p>The entitled applications.</p>
     */
    inline ListEntitledApplicationsResult& AddEntitledApplications(EntitledApplication&& value) { m_entitledApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntitledApplication> m_entitledApplications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
