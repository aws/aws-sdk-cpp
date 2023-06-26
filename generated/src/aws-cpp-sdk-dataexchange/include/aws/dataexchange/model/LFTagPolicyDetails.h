/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/LFResourceType.h>
#include <aws/dataexchange/model/LFResourceDetails.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details about the LF-tag policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/LFTagPolicyDetails">AWS
   * API Reference</a></p>
   */
  class LFTagPolicyDetails
  {
  public:
    AWS_DATAEXCHANGE_API LFTagPolicyDetails();
    AWS_DATAEXCHANGE_API LFTagPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LFTagPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline LFTagPolicyDetails& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline LFTagPolicyDetails& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline LFTagPolicyDetails& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline const LFResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline void SetResourceType(const LFResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline void SetResourceType(LFResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline LFTagPolicyDetails& WithResourceType(const LFResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline LFTagPolicyDetails& WithResourceType(LFResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline const LFResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }

    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline void SetResourceDetails(const LFResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }

    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline void SetResourceDetails(LFResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }

    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline LFTagPolicyDetails& WithResourceDetails(const LFResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline LFTagPolicyDetails& WithResourceDetails(LFResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    LFResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    LFResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
