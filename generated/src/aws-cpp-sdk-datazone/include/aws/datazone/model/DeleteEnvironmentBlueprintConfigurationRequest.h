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
  class DeleteEnvironmentBlueprintConfigurationRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DeleteEnvironmentBlueprintConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEnvironmentBlueprintConfiguration"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the blueprint configuration is
     * deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the blueprint the configuration of which is deleted.</p>
     */
    inline DeleteEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
