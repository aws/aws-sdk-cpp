/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>UpgradeElasticsearchDomain</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainRequest : public ElasticsearchServiceRequest
  {
  public:
    UpgradeElasticsearchDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeElasticsearchDomain"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpgradeElasticsearchDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpgradeElasticsearchDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpgradeElasticsearchDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainRequest& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainRequest& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainRequest& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline bool GetPerformCheckOnly() const{ return m_performCheckOnly; }

    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline bool PerformCheckOnlyHasBeenSet() const { return m_performCheckOnlyHasBeenSet; }

    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnlyHasBeenSet = true; m_performCheckOnly = value; }

    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline UpgradeElasticsearchDomainRequest& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet;

    bool m_performCheckOnly;
    bool m_performCheckOnlyHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
