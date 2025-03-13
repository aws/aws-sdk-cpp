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
    AWS_DATAEXCHANGE_API LFTagPolicyDetails() = default;
    AWS_DATAEXCHANGE_API LFTagPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LFTagPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    LFTagPolicyDetails& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline LFResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(LFResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LFTagPolicyDetails& WithResourceType(LFResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the Lake Formation Resources included in the LF-tag policy.</p>
     */
    inline const LFResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = LFResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = LFResourceDetails>
    LFTagPolicyDetails& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    LFResourceType m_resourceType{LFResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    LFResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
