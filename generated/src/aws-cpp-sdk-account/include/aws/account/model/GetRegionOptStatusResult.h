/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/account/model/RegionOptStatus.h>
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
namespace Account
{
namespace Model
{
  class GetRegionOptStatusResult
  {
  public:
    AWS_ACCOUNT_API GetRegionOptStatusResult();
    AWS_ACCOUNT_API GetRegionOptStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetRegionOptStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Region code that was passed in.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionName = value; }

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionName = std::move(value); }

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline void SetRegionName(const char* value) { m_regionName.assign(value); }

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline GetRegionOptStatusResult& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline GetRegionOptStatusResult& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region code that was passed in.</p>
     */
    inline GetRegionOptStatusResult& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline const RegionOptStatus& GetRegionOptStatus() const{ return m_regionOptStatus; }

    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline void SetRegionOptStatus(const RegionOptStatus& value) { m_regionOptStatus = value; }

    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline void SetRegionOptStatus(RegionOptStatus&& value) { m_regionOptStatus = std::move(value); }

    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline GetRegionOptStatusResult& WithRegionOptStatus(const RegionOptStatus& value) { SetRegionOptStatus(value); return *this;}

    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline GetRegionOptStatusResult& WithRegionOptStatus(RegionOptStatus&& value) { SetRegionOptStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRegionOptStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRegionOptStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRegionOptStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_regionName;

    RegionOptStatus m_regionOptStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
