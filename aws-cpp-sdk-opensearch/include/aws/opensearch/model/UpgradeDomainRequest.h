/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> Container for the request parameters to <code> <a>UpgradeDomain</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API UpgradeDomainRequest : public OpenSearchServiceRequest
  {
  public:
    UpgradeDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeDomain"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpgradeDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpgradeDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpgradeDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline UpgradeDomainRequest& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline UpgradeDomainRequest& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of OpenSearch you intend to upgrade the domain to.</p>
     */
    inline UpgradeDomainRequest& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p> When true, indicates that an upgrade eligibility check needs to be
     * performed. Does not actually perform the upgrade. </p>
     */
    inline bool GetPerformCheckOnly() const{ return m_performCheckOnly; }

    /**
     * <p> When true, indicates that an upgrade eligibility check needs to be
     * performed. Does not actually perform the upgrade. </p>
     */
    inline bool PerformCheckOnlyHasBeenSet() const { return m_performCheckOnlyHasBeenSet; }

    /**
     * <p> When true, indicates that an upgrade eligibility check needs to be
     * performed. Does not actually perform the upgrade. </p>
     */
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnlyHasBeenSet = true; m_performCheckOnly = value; }

    /**
     * <p> When true, indicates that an upgrade eligibility check needs to be
     * performed. Does not actually perform the upgrade. </p>
     */
    inline UpgradeDomainRequest& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    
    inline UpgradeDomainRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    
    inline UpgradeDomainRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    
    inline UpgradeDomainRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    
    inline UpgradeDomainRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    bool m_performCheckOnly;
    bool m_performCheckOnlyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
