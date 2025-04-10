﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EngineVersion.h>
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
namespace Athena
{
namespace Model
{
  class ListEngineVersionsResult
  {
  public:
    AWS_ATHENA_API ListEngineVersionsResult() = default;
    AWS_ATHENA_API ListEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ListEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of engine versions that are available to choose from.</p>
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const { return m_engineVersions; }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    void SetEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::forward<EngineVersionsT>(value); }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    ListEngineVersionsResult& WithEngineVersions(EngineVersionsT&& value) { SetEngineVersions(std::forward<EngineVersionsT>(value)); return *this;}
    template<typename EngineVersionsT = EngineVersion>
    ListEngineVersionsResult& AddEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.emplace_back(std::forward<EngineVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngineVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngineVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngineVersion> m_engineVersions;
    bool m_engineVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
