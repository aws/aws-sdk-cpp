/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ControlSummary.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListControlsResult
  {
  public:
    AWS_CONTROLCATALOG_API ListControlsResult();
    AWS_CONTROLCATALOG_API ListControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of controls, given as structures of type
     * <i>controlSummary</i>.</p>
     */
    inline const Aws::Vector<ControlSummary>& GetControls() const{ return m_controls; }
    inline void SetControls(const Aws::Vector<ControlSummary>& value) { m_controls = value; }
    inline void SetControls(Aws::Vector<ControlSummary>&& value) { m_controls = std::move(value); }
    inline ListControlsResult& WithControls(const Aws::Vector<ControlSummary>& value) { SetControls(value); return *this;}
    inline ListControlsResult& WithControls(Aws::Vector<ControlSummary>&& value) { SetControls(std::move(value)); return *this;}
    inline ListControlsResult& AddControls(const ControlSummary& value) { m_controls.push_back(value); return *this; }
    inline ListControlsResult& AddControls(ControlSummary&& value) { m_controls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ControlSummary> m_controls;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
