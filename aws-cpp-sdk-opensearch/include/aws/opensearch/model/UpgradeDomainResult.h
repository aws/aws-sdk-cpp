/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by <code>UpgradeDomain</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomainResponse">AWS
   * API Reference</a></p>
   */
  class UpgradeDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult();
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline const Aws::String& GetUpgradeId() const{ return m_upgradeId; }

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline void SetUpgradeId(const Aws::String& value) { m_upgradeId = value; }

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline void SetUpgradeId(Aws::String&& value) { m_upgradeId = std::move(value); }

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline void SetUpgradeId(const char* value) { m_upgradeId.assign(value); }

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline UpgradeDomainResult& WithUpgradeId(const Aws::String& value) { SetUpgradeId(value); return *this;}

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline UpgradeDomainResult& WithUpgradeId(Aws::String&& value) { SetUpgradeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline UpgradeDomainResult& WithUpgradeId(const char* value) { SetUpgradeId(value); return *this;}


    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline UpgradeDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline UpgradeDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline UpgradeDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersion = value; }

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersion = std::move(value); }

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersion.assign(value); }

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline UpgradeDomainResult& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline UpgradeDomainResult& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline UpgradeDomainResult& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p>When true, indicates that an upgrade eligibility check was performed.</p>
     */
    inline bool GetPerformCheckOnly() const{ return m_performCheckOnly; }

    /**
     * <p>When true, indicates that an upgrade eligibility check was performed.</p>
     */
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnly = value; }

    /**
     * <p>When true, indicates that an upgrade eligibility check was performed.</p>
     */
    inline UpgradeDomainResult& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}


    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptions = value; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptions = std::move(value); }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline UpgradeDomainResult& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }

    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetails = value; }

    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetails = std::move(value); }

    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline UpgradeDomainResult& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline UpgradeDomainResult& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}

  private:

    Aws::String m_upgradeId;

    Aws::String m_domainName;

    Aws::String m_targetVersion;

    bool m_performCheckOnly;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;

    ChangeProgressDetails m_changeProgressDetails;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
