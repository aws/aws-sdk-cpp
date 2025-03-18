/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/AwsLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ConnectionPropertiesPatch.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateConnectionRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The location where a connection is to be updated.</p>
     */
    inline const AwsLocation& GetAwsLocation() const { return m_awsLocation; }
    inline bool AwsLocationHasBeenSet() const { return m_awsLocationHasBeenSet; }
    template<typename AwsLocationT = AwsLocation>
    void SetAwsLocation(AwsLocationT&& value) { m_awsLocationHasBeenSet = true; m_awsLocation = std::forward<AwsLocationT>(value); }
    template<typename AwsLocationT = AwsLocation>
    UpdateConnectionRequest& WithAwsLocation(AwsLocationT&& value) { SetAwsLocation(std::forward<AwsLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a connection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConnectionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    UpdateConnectionRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateConnectionRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesPatch& GetProps() const { return m_props; }
    inline bool PropsHasBeenSet() const { return m_propsHasBeenSet; }
    template<typename PropsT = ConnectionPropertiesPatch>
    void SetProps(PropsT&& value) { m_propsHasBeenSet = true; m_props = std::forward<PropsT>(value); }
    template<typename PropsT = ConnectionPropertiesPatch>
    UpdateConnectionRequest& WithProps(PropsT&& value) { SetProps(std::forward<PropsT>(value)); return *this;}
    ///@}
  private:

    AwsLocation m_awsLocation;
    bool m_awsLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    ConnectionPropertiesPatch m_props;
    bool m_propsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
