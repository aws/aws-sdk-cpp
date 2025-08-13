/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/AccountSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ResolutionStrategy.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateAccountPoolRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateAccountPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountPool"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The source of accounts for the account pool. In the current release, it's
     * either a static list of accounts provided by the customer or a custom Amazon Web
     * Services Lambda handler. </p>
     */
    inline const AccountSource& GetAccountSource() const { return m_accountSource; }
    inline bool AccountSourceHasBeenSet() const { return m_accountSourceHasBeenSet; }
    template<typename AccountSourceT = AccountSource>
    void SetAccountSource(AccountSourceT&& value) { m_accountSourceHasBeenSet = true; m_accountSource = std::forward<AccountSourceT>(value); }
    template<typename AccountSourceT = AccountSource>
    CreateAccountPoolRequest& WithAccountSource(AccountSourceT&& value) { SetAccountSource(std::forward<AccountSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the account pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAccountPoolRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the account pool is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateAccountPoolRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the account pool.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAccountPoolRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mechanism used to resolve the account selection from the account
     * pool.</p>
     */
    inline ResolutionStrategy GetResolutionStrategy() const { return m_resolutionStrategy; }
    inline bool ResolutionStrategyHasBeenSet() const { return m_resolutionStrategyHasBeenSet; }
    inline void SetResolutionStrategy(ResolutionStrategy value) { m_resolutionStrategyHasBeenSet = true; m_resolutionStrategy = value; }
    inline CreateAccountPoolRequest& WithResolutionStrategy(ResolutionStrategy value) { SetResolutionStrategy(value); return *this;}
    ///@}
  private:

    AccountSource m_accountSource;
    bool m_accountSourceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResolutionStrategy m_resolutionStrategy{ResolutionStrategy::NOT_SET};
    bool m_resolutionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
