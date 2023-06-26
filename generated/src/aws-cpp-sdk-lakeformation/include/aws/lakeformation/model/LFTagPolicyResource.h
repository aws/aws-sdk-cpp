/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTag.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing a list of LF-tag conditions that apply to a resource's
   * LF-tag policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/LFTagPolicyResource">AWS
   * API Reference</a></p>
   */
  class LFTagPolicyResource
  {
  public:
    AWS_LAKEFORMATION_API LFTagPolicyResource();
    AWS_LAKEFORMATION_API LFTagPolicyResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API LFTagPolicyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline LFTagPolicyResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline LFTagPolicyResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline LFTagPolicyResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline LFTagPolicyResource& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline LFTagPolicyResource& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const{ return m_expression; }

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline void SetExpression(const Aws::Vector<LFTag>& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline void SetExpression(Aws::Vector<LFTag>&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline LFTagPolicyResource& WithExpression(const Aws::Vector<LFTag>& value) { SetExpression(value); return *this;}

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline LFTagPolicyResource& WithExpression(Aws::Vector<LFTag>&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline LFTagPolicyResource& AddExpression(const LFTag& value) { m_expressionHasBeenSet = true; m_expression.push_back(value); return *this; }

    /**
     * <p>A list of LF-tag conditions that apply to the resource's LF-tag policy.</p>
     */
    inline LFTagPolicyResource& AddExpression(LFTag&& value) { m_expressionHasBeenSet = true; m_expression.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
