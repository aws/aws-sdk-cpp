/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{

  class AWS_ELASTICSEARCHSERVICE_API DomainInfo
  {
  public:
    DomainInfo();
    DomainInfo(Aws::Utils::Json::JsonView jsonValue);
    DomainInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline DomainInfo& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline DomainInfo& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Specifies the <code>DomainName</code>.</p>
     */
    inline DomainInfo& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
