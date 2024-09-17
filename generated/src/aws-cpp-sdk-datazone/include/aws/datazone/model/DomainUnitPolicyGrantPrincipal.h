/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainUnitDesignation.h>
#include <aws/datazone/model/DomainUnitGrantFilter.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The domain unit principal to whom the policy is granted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainUnitPolicyGrantPrincipal">AWS
   * API Reference</a></p>
   */
  class DomainUnitPolicyGrantPrincipal
  {
  public:
    AWS_DATAZONE_API DomainUnitPolicyGrantPrincipal();
    AWS_DATAZONE_API DomainUnitPolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitPolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifes the designation of the domain unit users.</p>
     */
    inline const DomainUnitDesignation& GetDomainUnitDesignation() const{ return m_domainUnitDesignation; }
    inline bool DomainUnitDesignationHasBeenSet() const { return m_domainUnitDesignationHasBeenSet; }
    inline void SetDomainUnitDesignation(const DomainUnitDesignation& value) { m_domainUnitDesignationHasBeenSet = true; m_domainUnitDesignation = value; }
    inline void SetDomainUnitDesignation(DomainUnitDesignation&& value) { m_domainUnitDesignationHasBeenSet = true; m_domainUnitDesignation = std::move(value); }
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitDesignation(const DomainUnitDesignation& value) { SetDomainUnitDesignation(value); return *this;}
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitDesignation(DomainUnitDesignation&& value) { SetDomainUnitDesignation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grant filter for the domain unit.</p>
     */
    inline const DomainUnitGrantFilter& GetDomainUnitGrantFilter() const{ return m_domainUnitGrantFilter; }
    inline bool DomainUnitGrantFilterHasBeenSet() const { return m_domainUnitGrantFilterHasBeenSet; }
    inline void SetDomainUnitGrantFilter(const DomainUnitGrantFilter& value) { m_domainUnitGrantFilterHasBeenSet = true; m_domainUnitGrantFilter = value; }
    inline void SetDomainUnitGrantFilter(DomainUnitGrantFilter&& value) { m_domainUnitGrantFilterHasBeenSet = true; m_domainUnitGrantFilter = std::move(value); }
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitGrantFilter(const DomainUnitGrantFilter& value) { SetDomainUnitGrantFilter(value); return *this;}
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitGrantFilter(DomainUnitGrantFilter&& value) { SetDomainUnitGrantFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitIdentifier() const{ return m_domainUnitIdentifier; }
    inline bool DomainUnitIdentifierHasBeenSet() const { return m_domainUnitIdentifierHasBeenSet; }
    inline void SetDomainUnitIdentifier(const Aws::String& value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier = value; }
    inline void SetDomainUnitIdentifier(Aws::String&& value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier = std::move(value); }
    inline void SetDomainUnitIdentifier(const char* value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier.assign(value); }
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitIdentifier(const Aws::String& value) { SetDomainUnitIdentifier(value); return *this;}
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitIdentifier(Aws::String&& value) { SetDomainUnitIdentifier(std::move(value)); return *this;}
    inline DomainUnitPolicyGrantPrincipal& WithDomainUnitIdentifier(const char* value) { SetDomainUnitIdentifier(value); return *this;}
    ///@}
  private:

    DomainUnitDesignation m_domainUnitDesignation;
    bool m_domainUnitDesignationHasBeenSet = false;

    DomainUnitGrantFilter m_domainUnitGrantFilter;
    bool m_domainUnitGrantFilterHasBeenSet = false;

    Aws::String m_domainUnitIdentifier;
    bool m_domainUnitIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
