/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/DomainInfo.h>
#include <aws/swf/model/DomainConfiguration.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains details of a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainDetail">AWS
   * API Reference</a></p>
   */
  class DescribeDomainResult
  {
  public:
    AWS_SWF_API DescribeDomainResult();
    AWS_SWF_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline const DomainInfo& GetDomainInfo() const{ return m_domainInfo; }

    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline void SetDomainInfo(const DomainInfo& value) { m_domainInfo = value; }

    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline void SetDomainInfo(DomainInfo&& value) { m_domainInfo = std::move(value); }

    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline DescribeDomainResult& WithDomainInfo(const DomainInfo& value) { SetDomainInfo(value); return *this;}

    /**
     * <p>The basic information about a domain, such as its name, status, and
     * description.</p>
     */
    inline DescribeDomainResult& WithDomainInfo(DomainInfo&& value) { SetDomainInfo(std::move(value)); return *this;}


    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline const DomainConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline void SetConfiguration(const DomainConfiguration& value) { m_configuration = value; }

    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline void SetConfiguration(DomainConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline DescribeDomainResult& WithConfiguration(const DomainConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The domain configuration. Currently, this includes only the domain's
     * retention period.</p>
     */
    inline DescribeDomainResult& WithConfiguration(DomainConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    DomainInfo m_domainInfo;

    DomainConfiguration m_configuration;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
