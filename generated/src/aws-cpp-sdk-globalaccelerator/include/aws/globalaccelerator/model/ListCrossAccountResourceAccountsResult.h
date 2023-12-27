/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCrossAccountResourceAccountsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult();
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceOwnerAwsAccountIds() const{ return m_resourceOwnerAwsAccountIds; }

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline void SetResourceOwnerAwsAccountIds(const Aws::Vector<Aws::String>& value) { m_resourceOwnerAwsAccountIds = value; }

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline void SetResourceOwnerAwsAccountIds(Aws::Vector<Aws::String>&& value) { m_resourceOwnerAwsAccountIds = std::move(value); }

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline ListCrossAccountResourceAccountsResult& WithResourceOwnerAwsAccountIds(const Aws::Vector<Aws::String>& value) { SetResourceOwnerAwsAccountIds(value); return *this;}

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline ListCrossAccountResourceAccountsResult& WithResourceOwnerAwsAccountIds(Aws::Vector<Aws::String>&& value) { SetResourceOwnerAwsAccountIds(std::move(value)); return *this;}

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline ListCrossAccountResourceAccountsResult& AddResourceOwnerAwsAccountIds(const Aws::String& value) { m_resourceOwnerAwsAccountIds.push_back(value); return *this; }

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline ListCrossAccountResourceAccountsResult& AddResourceOwnerAwsAccountIds(Aws::String&& value) { m_resourceOwnerAwsAccountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can add endpoints (resources) listed in the same attachment.</p>
     */
    inline ListCrossAccountResourceAccountsResult& AddResourceOwnerAwsAccountIds(const char* value) { m_resourceOwnerAwsAccountIds.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCrossAccountResourceAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCrossAccountResourceAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCrossAccountResourceAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceOwnerAwsAccountIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
