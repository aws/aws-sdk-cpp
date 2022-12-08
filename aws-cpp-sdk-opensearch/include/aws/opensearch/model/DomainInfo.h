/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/EngineType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about an OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainInfo">AWS
   * API Reference</a></p>
   */
  class DomainInfo
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainInfo();
    AWS_OPENSEARCHSERVICE_API DomainInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain.</p>
     */
    inline DomainInfo& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain.</p>
     */
    inline DomainInfo& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain.</p>
     */
    inline DomainInfo& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline DomainInfo& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline DomainInfo& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
