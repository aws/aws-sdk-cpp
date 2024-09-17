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
    AWS_DATAZONE_API AssociateEnvironmentRoleRequest();

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
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline AssociateEnvironmentRoleRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline AssociateEnvironmentRoleRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline AssociateEnvironmentRoleRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }
    inline AssociateEnvironmentRoleRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}
    inline AssociateEnvironmentRoleRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}
    inline AssociateEnvironmentRoleRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the environment role.</p>
     */
    inline const Aws::String& GetEnvironmentRoleArn() const{ return m_environmentRoleArn; }
    inline bool EnvironmentRoleArnHasBeenSet() const { return m_environmentRoleArnHasBeenSet; }
    inline void SetEnvironmentRoleArn(const Aws::String& value) { m_environmentRoleArnHasBeenSet = true; m_environmentRoleArn = value; }
    inline void SetEnvironmentRoleArn(Aws::String&& value) { m_environmentRoleArnHasBeenSet = true; m_environmentRoleArn = std::move(value); }
    inline void SetEnvironmentRoleArn(const char* value) { m_environmentRoleArnHasBeenSet = true; m_environmentRoleArn.assign(value); }
    inline AssociateEnvironmentRoleRequest& WithEnvironmentRoleArn(const Aws::String& value) { SetEnvironmentRoleArn(value); return *this;}
    inline AssociateEnvironmentRoleRequest& WithEnvironmentRoleArn(Aws::String&& value) { SetEnvironmentRoleArn(std::move(value)); return *this;}
    inline AssociateEnvironmentRoleRequest& WithEnvironmentRoleArn(const char* value) { SetEnvironmentRoleArn(value); return *this;}
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
