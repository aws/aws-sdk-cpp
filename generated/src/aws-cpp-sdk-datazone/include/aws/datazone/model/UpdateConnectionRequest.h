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
    AWS_DATAZONE_API UpdateConnectionRequest();

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
    inline const AwsLocation& GetAwsLocation() const{ return m_awsLocation; }
    inline bool AwsLocationHasBeenSet() const { return m_awsLocationHasBeenSet; }
    inline void SetAwsLocation(const AwsLocation& value) { m_awsLocationHasBeenSet = true; m_awsLocation = value; }
    inline void SetAwsLocation(AwsLocation&& value) { m_awsLocationHasBeenSet = true; m_awsLocation = std::move(value); }
    inline UpdateConnectionRequest& WithAwsLocation(const AwsLocation& value) { SetAwsLocation(value); return *this;}
    inline UpdateConnectionRequest& WithAwsLocation(AwsLocation&& value) { SetAwsLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateConnectionRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateConnectionRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateConnectionRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateConnectionRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateConnectionRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateConnectionRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesPatch& GetProps() const{ return m_props; }
    inline bool PropsHasBeenSet() const { return m_propsHasBeenSet; }
    inline void SetProps(const ConnectionPropertiesPatch& value) { m_propsHasBeenSet = true; m_props = value; }
    inline void SetProps(ConnectionPropertiesPatch&& value) { m_propsHasBeenSet = true; m_props = std::move(value); }
    inline UpdateConnectionRequest& WithProps(const ConnectionPropertiesPatch& value) { SetProps(value); return *this;}
    inline UpdateConnectionRequest& WithProps(ConnectionPropertiesPatch&& value) { SetProps(std::move(value)); return *this;}
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
