/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunTarget.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class StartMetadataGenerationRunRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API StartMetadataGenerationRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataGenerationRun"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline StartMetadataGenerationRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline StartMetadataGenerationRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline StartMetadataGenerationRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where you want to start a metadata
     * generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which you want to start a
     * metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}


    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline const MetadataGenerationRunTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline void SetTarget(const MetadataGenerationRunTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline void SetTarget(MetadataGenerationRunTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithTarget(const MetadataGenerationRunTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The asset for which you want to start a metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithTarget(MetadataGenerationRunTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline const MetadataGenerationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(const MetadataGenerationRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(MetadataGenerationRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithType(const MetadataGenerationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunRequest& WithType(MetadataGenerationRunType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    MetadataGenerationRunTarget m_target;
    bool m_targetHasBeenSet = false;

    MetadataGenerationRunType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
