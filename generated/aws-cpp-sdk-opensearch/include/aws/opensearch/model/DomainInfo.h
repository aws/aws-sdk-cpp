﻿/**
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

  class AWS_OPENSEARCHSERVICE_API DomainInfo
  {
  public:
    DomainInfo();
    DomainInfo(Aws::Utils::Json::JsonView jsonValue);
    DomainInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline DomainInfo& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline DomainInfo& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The <code>DomainName</code>. </p>
     */
    inline DomainInfo& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline DomainInfo& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p> Specifies the <code>EngineType</code> of the domain.</p>
     */
    inline DomainInfo& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
