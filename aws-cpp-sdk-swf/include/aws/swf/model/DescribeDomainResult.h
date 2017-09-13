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
  class AWS_SWF_API DescribeDomainResult
  {
  public:
    DescribeDomainResult();
    DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
