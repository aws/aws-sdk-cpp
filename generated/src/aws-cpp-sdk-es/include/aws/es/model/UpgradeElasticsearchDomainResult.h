/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ChangeProgressDetails.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>UpgradeElasticsearchDomain</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomainResponse">AWS
   * API Reference</a></p>
   */
  class UpgradeElasticsearchDomainResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult() = default;
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpgradeElasticsearchDomainResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
    template<typename TargetVersionT = Aws::String>
    void SetTargetVersion(TargetVersionT&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::forward<TargetVersionT>(value); }
    template<typename TargetVersionT = Aws::String>
    UpgradeElasticsearchDomainResult& WithTargetVersion(TargetVersionT&& value) { SetTargetVersion(std::forward<TargetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline bool GetPerformCheckOnly() const { return m_performCheckOnly; }
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnlyHasBeenSet = true; m_performCheckOnly = value; }
    inline UpgradeElasticsearchDomainResult& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}
    ///@}

    ///@{
    
    inline const ChangeProgressDetails& GetChangeProgressDetails() const { return m_changeProgressDetails; }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    void SetChangeProgressDetails(ChangeProgressDetailsT&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::forward<ChangeProgressDetailsT>(value); }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    UpgradeElasticsearchDomainResult& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpgradeElasticsearchDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    bool m_performCheckOnly{false};
    bool m_performCheckOnlyHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
