/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controlcatalog/model/DomainResourceFilter.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>An optional filter that narrows the list of objectives to a specific
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ObjectiveFilter">AWS
   * API Reference</a></p>
   */
  class ObjectiveFilter
  {
  public:
    AWS_CONTROLCATALOG_API ObjectiveFilter() = default;
    AWS_CONTROLCATALOG_API ObjectiveFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ObjectiveFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain that's used as filter criteria.</p> <p>You can use this parameter
     * to specify one domain ARN at a time. Passing multiple ARNs in the
     * <code>ObjectiveFilter</code> isn’t supported.</p>
     */
    inline const Aws::Vector<DomainResourceFilter>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<DomainResourceFilter>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<DomainResourceFilter>>
    ObjectiveFilter& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = DomainResourceFilter>
    ObjectiveFilter& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DomainResourceFilter> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
