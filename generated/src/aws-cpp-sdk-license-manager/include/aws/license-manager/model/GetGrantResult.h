/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/Grant.h>
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
namespace LicenseManager
{
namespace Model
{
  class GetGrantResult
  {
  public:
    AWS_LICENSEMANAGER_API GetGrantResult();
    AWS_LICENSEMANAGER_API GetGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Grant details.</p>
     */
    inline const Grant& GetGrant() const{ return m_grant; }

    /**
     * <p>Grant details.</p>
     */
    inline void SetGrant(const Grant& value) { m_grant = value; }

    /**
     * <p>Grant details.</p>
     */
    inline void SetGrant(Grant&& value) { m_grant = std::move(value); }

    /**
     * <p>Grant details.</p>
     */
    inline GetGrantResult& WithGrant(const Grant& value) { SetGrant(value); return *this;}

    /**
     * <p>Grant details.</p>
     */
    inline GetGrantResult& WithGrant(Grant&& value) { SetGrant(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Grant m_grant;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
