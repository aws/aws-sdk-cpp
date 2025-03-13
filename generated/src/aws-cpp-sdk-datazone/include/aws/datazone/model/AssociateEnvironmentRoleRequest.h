/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class AssociateEnvironmentRoleRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AssociateEnvironmentRoleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEnvironmentRole"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the environment role is
     * associated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    AssociateEnvironmentRoleRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    AssociateEnvironmentRoleRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the environment role.</p>
     */
    inline const Aws::String& GetEnvironmentRoleArn() const { return m_environmentRoleArn; }
    inline bool EnvironmentRoleArnHasBeenSet() const { return m_environmentRoleArnHasBeenSet; }
    template<typename EnvironmentRoleArnT = Aws::String>
    void SetEnvironmentRoleArn(EnvironmentRoleArnT&& value) { m_environmentRoleArnHasBeenSet = true; m_environmentRoleArn = std::forward<EnvironmentRoleArnT>(value); }
    template<typename EnvironmentRoleArnT = Aws::String>
    AssociateEnvironmentRoleRequest& WithEnvironmentRoleArn(EnvironmentRoleArnT&& value) { SetEnvironmentRoleArn(std::forward<EnvironmentRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_environmentRoleArn;
    bool m_environmentRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
