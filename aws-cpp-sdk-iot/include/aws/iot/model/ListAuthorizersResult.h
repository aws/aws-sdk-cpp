/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuthorizerSummary.h>
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
  class ListAuthorizersResult
  {
  public:
    AWS_IOT_API ListAuthorizersResult();
    AWS_IOT_API ListAuthorizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuthorizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authorizers.</p>
     */
    inline const Aws::Vector<AuthorizerSummary>& GetAuthorizers() const{ return m_authorizers; }

    /**
     * <p>The authorizers.</p>
     */
    inline void SetAuthorizers(const Aws::Vector<AuthorizerSummary>& value) { m_authorizers = value; }

    /**
     * <p>The authorizers.</p>
     */
    inline void SetAuthorizers(Aws::Vector<AuthorizerSummary>&& value) { m_authorizers = std::move(value); }

    /**
     * <p>The authorizers.</p>
     */
    inline ListAuthorizersResult& WithAuthorizers(const Aws::Vector<AuthorizerSummary>& value) { SetAuthorizers(value); return *this;}

    /**
     * <p>The authorizers.</p>
     */
    inline ListAuthorizersResult& WithAuthorizers(Aws::Vector<AuthorizerSummary>&& value) { SetAuthorizers(std::move(value)); return *this;}

    /**
     * <p>The authorizers.</p>
     */
    inline ListAuthorizersResult& AddAuthorizers(const AuthorizerSummary& value) { m_authorizers.push_back(value); return *this; }

    /**
     * <p>The authorizers.</p>
     */
    inline ListAuthorizersResult& AddAuthorizers(AuthorizerSummary&& value) { m_authorizers.push_back(std::move(value)); return *this; }


    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<AuthorizerSummary> m_authorizers;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
