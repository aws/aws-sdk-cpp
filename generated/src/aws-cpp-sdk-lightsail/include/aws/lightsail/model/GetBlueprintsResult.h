﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Blueprint.h>
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
  class GetBlueprintsResult
  {
  public:
    AWS_LIGHTSAIL_API GetBlueprintsResult();
    AWS_LIGHTSAIL_API GetBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const{ return m_blueprints; }
    inline void SetBlueprints(const Aws::Vector<Blueprint>& value) { m_blueprints = value; }
    inline void SetBlueprints(Aws::Vector<Blueprint>&& value) { m_blueprints = std::move(value); }
    inline GetBlueprintsResult& WithBlueprints(const Aws::Vector<Blueprint>& value) { SetBlueprints(value); return *this;}
    inline GetBlueprintsResult& WithBlueprints(Aws::Vector<Blueprint>&& value) { SetBlueprints(std::move(value)); return *this;}
    inline GetBlueprintsResult& AddBlueprints(const Blueprint& value) { m_blueprints.push_back(value); return *this; }
    inline GetBlueprintsResult& AddBlueprints(Blueprint&& value) { m_blueprints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetBlueprints</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetBlueprintsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetBlueprintsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetBlueprintsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBlueprintsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBlueprintsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBlueprintsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Blueprint> m_blueprints;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
