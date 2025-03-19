/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseLogStreamsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database log streams
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreams() const { return m_logStreams; }
    template<typename LogStreamsT = Aws::Vector<Aws::String>>
    void SetLogStreams(LogStreamsT&& value) { m_logStreamsHasBeenSet = true; m_logStreams = std::forward<LogStreamsT>(value); }
    template<typename LogStreamsT = Aws::Vector<Aws::String>>
    GetRelationalDatabaseLogStreamsResult& WithLogStreams(LogStreamsT&& value) { SetLogStreams(std::forward<LogStreamsT>(value)); return *this;}
    template<typename LogStreamsT = Aws::String>
    GetRelationalDatabaseLogStreamsResult& AddLogStreams(LogStreamsT&& value) { m_logStreamsHasBeenSet = true; m_logStreams.emplace_back(std::forward<LogStreamsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseLogStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logStreams;
    bool m_logStreamsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
