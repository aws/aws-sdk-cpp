/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/AppInstanceSummary.h>
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
namespace Chime
{
namespace Model
{
  class ListAppInstancesResult
  {
  public:
    AWS_CHIME_API ListAppInstancesResult();
    AWS_CHIME_API ListAppInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListAppInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<AppInstanceSummary>& GetAppInstances() const{ return m_appInstances; }

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline void SetAppInstances(const Aws::Vector<AppInstanceSummary>& value) { m_appInstances = value; }

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline void SetAppInstances(Aws::Vector<AppInstanceSummary>&& value) { m_appInstances = std::move(value); }

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline ListAppInstancesResult& WithAppInstances(const Aws::Vector<AppInstanceSummary>& value) { SetAppInstances(value); return *this;}

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline ListAppInstancesResult& WithAppInstances(Aws::Vector<AppInstanceSummary>&& value) { SetAppInstances(std::move(value)); return *this;}

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline ListAppInstancesResult& AddAppInstances(const AppInstanceSummary& value) { m_appInstances.push_back(value); return *this; }

    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline ListAppInstancesResult& AddAppInstances(AppInstanceSummary&& value) { m_appInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline ListAppInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline ListAppInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline ListAppInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppInstanceSummary> m_appInstances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
