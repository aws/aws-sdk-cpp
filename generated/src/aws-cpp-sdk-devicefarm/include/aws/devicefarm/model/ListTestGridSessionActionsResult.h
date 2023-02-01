/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionAction.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListTestGridSessionActionsResult
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionActionsResult();
    AWS_DEVICEFARM_API ListTestGridSessionActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListTestGridSessionActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The action taken by the session.</p>
     */
    inline const Aws::Vector<TestGridSessionAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The action taken by the session.</p>
     */
    inline void SetActions(const Aws::Vector<TestGridSessionAction>& value) { m_actions = value; }

    /**
     * <p>The action taken by the session.</p>
     */
    inline void SetActions(Aws::Vector<TestGridSessionAction>&& value) { m_actions = std::move(value); }

    /**
     * <p>The action taken by the session.</p>
     */
    inline ListTestGridSessionActionsResult& WithActions(const Aws::Vector<TestGridSessionAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The action taken by the session.</p>
     */
    inline ListTestGridSessionActionsResult& WithActions(Aws::Vector<TestGridSessionAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The action taken by the session.</p>
     */
    inline ListTestGridSessionActionsResult& AddActions(const TestGridSessionAction& value) { m_actions.push_back(value); return *this; }

    /**
     * <p>The action taken by the session.</p>
     */
    inline ListTestGridSessionActionsResult& AddActions(TestGridSessionAction&& value) { m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TestGridSessionAction> m_actions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
