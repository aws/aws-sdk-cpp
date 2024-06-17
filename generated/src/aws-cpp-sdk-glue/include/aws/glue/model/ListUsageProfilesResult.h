/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/UsageProfileDefinition.h>
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
namespace Glue
{
namespace Model
{
  class ListUsageProfilesResult
  {
  public:
    AWS_GLUE_API ListUsageProfilesResult();
    AWS_GLUE_API ListUsageProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListUsageProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of usage profile (<code>UsageProfileDefinition</code>) objects.</p>
     */
    inline const Aws::Vector<UsageProfileDefinition>& GetProfiles() const{ return m_profiles; }
    inline void SetProfiles(const Aws::Vector<UsageProfileDefinition>& value) { m_profiles = value; }
    inline void SetProfiles(Aws::Vector<UsageProfileDefinition>&& value) { m_profiles = std::move(value); }
    inline ListUsageProfilesResult& WithProfiles(const Aws::Vector<UsageProfileDefinition>& value) { SetProfiles(value); return *this;}
    inline ListUsageProfilesResult& WithProfiles(Aws::Vector<UsageProfileDefinition>&& value) { SetProfiles(std::move(value)); return *this;}
    inline ListUsageProfilesResult& AddProfiles(const UsageProfileDefinition& value) { m_profiles.push_back(value); return *this; }
    inline ListUsageProfilesResult& AddProfiles(UsageProfileDefinition&& value) { m_profiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsageProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsageProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsageProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsageProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsageProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsageProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UsageProfileDefinition> m_profiles;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
