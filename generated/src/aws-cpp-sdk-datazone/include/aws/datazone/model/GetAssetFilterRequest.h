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
  class GetAssetFilterRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetAssetFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssetFilter"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetIdentifier() const{ return m_assetIdentifier; }
    inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
    inline void SetAssetIdentifier(const Aws::String& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = value; }
    inline void SetAssetIdentifier(Aws::String&& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = std::move(value); }
    inline void SetAssetIdentifier(const char* value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier.assign(value); }
    inline GetAssetFilterRequest& WithAssetIdentifier(const Aws::String& value) { SetAssetIdentifier(value); return *this;}
    inline GetAssetFilterRequest& WithAssetIdentifier(Aws::String&& value) { SetAssetIdentifier(std::move(value)); return *this;}
    inline GetAssetFilterRequest& WithAssetIdentifier(const char* value) { SetAssetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to get an asset filter.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline GetAssetFilterRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline GetAssetFilterRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline GetAssetFilterRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset filter.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline GetAssetFilterRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetAssetFilterRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetAssetFilterRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_assetIdentifier;
    bool m_assetIdentifierHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
