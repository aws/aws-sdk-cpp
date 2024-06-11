﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetAutoMergingPreviewResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult();
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetAutoMergingPreviewResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetAutoMergingPreviewResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetAutoMergingPreviewResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of match groups in the domain that have been reviewed in this
     * preview dry run.</p>
     */
    inline long long GetNumberOfMatchesInSample() const{ return m_numberOfMatchesInSample; }
    inline void SetNumberOfMatchesInSample(long long value) { m_numberOfMatchesInSample = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfMatchesInSample(long long value) { SetNumberOfMatchesInSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profiles found in this preview dry run.</p>
     */
    inline long long GetNumberOfProfilesInSample() const{ return m_numberOfProfilesInSample; }
    inline void SetNumberOfProfilesInSample(long long value) { m_numberOfProfilesInSample = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfProfilesInSample(long long value) { SetNumberOfProfilesInSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profiles that would be merged if this wasn't a preview dry
     * run.</p>
     */
    inline long long GetNumberOfProfilesWillBeMerged() const{ return m_numberOfProfilesWillBeMerged; }
    inline void SetNumberOfProfilesWillBeMerged(long long value) { m_numberOfProfilesWillBeMerged = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfProfilesWillBeMerged(long long value) { SetNumberOfProfilesWillBeMerged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAutoMergingPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAutoMergingPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAutoMergingPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    long long m_numberOfMatchesInSample;

    long long m_numberOfProfilesInSample;

    long long m_numberOfProfilesWillBeMerged;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
