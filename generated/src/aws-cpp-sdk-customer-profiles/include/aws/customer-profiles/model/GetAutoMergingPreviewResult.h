/**
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
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult() = default;
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetAutoMergingPreviewResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of match groups in the domain that have been reviewed in this
     * preview dry run.</p>
     */
    inline long long GetNumberOfMatchesInSample() const { return m_numberOfMatchesInSample; }
    inline void SetNumberOfMatchesInSample(long long value) { m_numberOfMatchesInSampleHasBeenSet = true; m_numberOfMatchesInSample = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfMatchesInSample(long long value) { SetNumberOfMatchesInSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profiles found in this preview dry run.</p>
     */
    inline long long GetNumberOfProfilesInSample() const { return m_numberOfProfilesInSample; }
    inline void SetNumberOfProfilesInSample(long long value) { m_numberOfProfilesInSampleHasBeenSet = true; m_numberOfProfilesInSample = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfProfilesInSample(long long value) { SetNumberOfProfilesInSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profiles that would be merged if this wasn't a preview dry
     * run.</p>
     */
    inline long long GetNumberOfProfilesWillBeMerged() const { return m_numberOfProfilesWillBeMerged; }
    inline void SetNumberOfProfilesWillBeMerged(long long value) { m_numberOfProfilesWillBeMergedHasBeenSet = true; m_numberOfProfilesWillBeMerged = value; }
    inline GetAutoMergingPreviewResult& WithNumberOfProfilesWillBeMerged(long long value) { SetNumberOfProfilesWillBeMerged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutoMergingPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    long long m_numberOfMatchesInSample{0};
    bool m_numberOfMatchesInSampleHasBeenSet = false;

    long long m_numberOfProfilesInSample{0};
    bool m_numberOfProfilesInSampleHasBeenSet = false;

    long long m_numberOfProfilesWillBeMerged{0};
    bool m_numberOfProfilesWillBeMergedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
