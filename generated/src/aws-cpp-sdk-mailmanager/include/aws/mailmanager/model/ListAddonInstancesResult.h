/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AddonInstance.h>
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
namespace MailManager
{
namespace Model
{
  class ListAddonInstancesResult
  {
  public:
    AWS_MAILMANAGER_API ListAddonInstancesResult();
    AWS_MAILMANAGER_API ListAddonInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListAddonInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline const Aws::Vector<AddonInstance>& GetAddonInstances() const{ return m_addonInstances; }
    inline void SetAddonInstances(const Aws::Vector<AddonInstance>& value) { m_addonInstances = value; }
    inline void SetAddonInstances(Aws::Vector<AddonInstance>&& value) { m_addonInstances = std::move(value); }
    inline ListAddonInstancesResult& WithAddonInstances(const Aws::Vector<AddonInstance>& value) { SetAddonInstances(value); return *this;}
    inline ListAddonInstancesResult& WithAddonInstances(Aws::Vector<AddonInstance>&& value) { SetAddonInstances(std::move(value)); return *this;}
    inline ListAddonInstancesResult& AddAddonInstances(const AddonInstance& value) { m_addonInstances.push_back(value); return *this; }
    inline ListAddonInstancesResult& AddAddonInstances(AddonInstance&& value) { m_addonInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAddonInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAddonInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAddonInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAddonInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAddonInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAddonInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AddonInstance> m_addonInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
