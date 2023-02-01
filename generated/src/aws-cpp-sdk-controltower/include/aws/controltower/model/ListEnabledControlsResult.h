/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledControlSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListEnabledControlsResult
  {
  public:
    AWS_CONTROLTOWER_API ListEnabledControlsResult();
    AWS_CONTROLTOWER_API ListEnabledControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListEnabledControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline const Aws::Vector<EnabledControlSummary>& GetEnabledControls() const{ return m_enabledControls; }

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline void SetEnabledControls(const Aws::Vector<EnabledControlSummary>& value) { m_enabledControls = value; }

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline void SetEnabledControls(Aws::Vector<EnabledControlSummary>&& value) { m_enabledControls = std::move(value); }

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline ListEnabledControlsResult& WithEnabledControls(const Aws::Vector<EnabledControlSummary>& value) { SetEnabledControls(value); return *this;}

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline ListEnabledControlsResult& WithEnabledControls(Aws::Vector<EnabledControlSummary>&& value) { SetEnabledControls(std::move(value)); return *this;}

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline ListEnabledControlsResult& AddEnabledControls(const EnabledControlSummary& value) { m_enabledControls.push_back(value); return *this; }

    /**
     * <p>Lists the controls enabled by AWS Control Tower on the specified
     * organizational unit and the accounts it contains.</p>
     */
    inline ListEnabledControlsResult& AddEnabledControls(EnabledControlSummary&& value) { m_enabledControls.push_back(std::move(value)); return *this; }


    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline ListEnabledControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline ListEnabledControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Retrieves the next page of results. If the string is empty, the current
     * response is the end of the results.</p>
     */
    inline ListEnabledControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnabledControlSummary> m_enabledControls;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
