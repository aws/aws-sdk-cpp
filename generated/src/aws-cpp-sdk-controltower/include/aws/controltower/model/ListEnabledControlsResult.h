﻿/**
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


    ///@{
    /**
     * <p>Lists the controls enabled by Amazon Web Services Control Tower on the
     * specified organizational unit and the accounts it contains.</p>
     */
    inline const Aws::Vector<EnabledControlSummary>& GetEnabledControls() const{ return m_enabledControls; }
    inline void SetEnabledControls(const Aws::Vector<EnabledControlSummary>& value) { m_enabledControls = value; }
    inline void SetEnabledControls(Aws::Vector<EnabledControlSummary>&& value) { m_enabledControls = std::move(value); }
    inline ListEnabledControlsResult& WithEnabledControls(const Aws::Vector<EnabledControlSummary>& value) { SetEnabledControls(value); return *this;}
    inline ListEnabledControlsResult& WithEnabledControls(Aws::Vector<EnabledControlSummary>&& value) { SetEnabledControls(std::move(value)); return *this;}
    inline ListEnabledControlsResult& AddEnabledControls(const EnabledControlSummary& value) { m_enabledControls.push_back(value); return *this; }
    inline ListEnabledControlsResult& AddEnabledControls(EnabledControlSummary&& value) { m_enabledControls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEnabledControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnabledControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnabledControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEnabledControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEnabledControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEnabledControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledControlSummary> m_enabledControls;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
