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
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult();
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    
    inline UpgradeElasticsearchDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpgradeElasticsearchDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpgradeElasticsearchDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersion = value; }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersion = std::move(value); }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersion.assign(value); }

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainResult& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainResult& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
     */
    inline UpgradeElasticsearchDomainResult& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline bool GetPerformCheckOnly() const{ return m_performCheckOnly; }

    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnly = value; }

    /**
     * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
     * needs to be performed. This will not actually perform the Upgrade. </p>
     */
    inline UpgradeElasticsearchDomainResult& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}


    
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }

    
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetails = value; }

    
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetails = std::move(value); }

    
    inline UpgradeElasticsearchDomainResult& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    
    inline UpgradeElasticsearchDomainResult& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;

    Aws::String m_targetVersion;

    bool m_performCheckOnly;

    ChangeProgressDetails m_changeProgressDetails;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
