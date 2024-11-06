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
   * <p>A structure containing a list of LF-tag conditions or saved LF-Tag
   * expressions that apply to a resource's LF-tag policy.</p><p><h3>See Also:</h3>  
   * <a
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


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline LFTagPolicyResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline LFTagPolicyResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline LFTagPolicyResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline LFTagPolicyResource& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline LFTagPolicyResource& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tag conditions or a saved expression that apply to the
     * resource's LF-tag policy.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::Vector<LFTag>& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::Vector<LFTag>&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline LFTagPolicyResource& WithExpression(const Aws::Vector<LFTag>& value) { SetExpression(value); return *this;}
    inline LFTagPolicyResource& WithExpression(Aws::Vector<LFTag>&& value) { SetExpression(std::move(value)); return *this;}
    inline LFTagPolicyResource& AddExpression(const LFTag& value) { m_expressionHasBeenSet = true; m_expression.push_back(value); return *this; }
    inline LFTagPolicyResource& AddExpression(LFTag&& value) { m_expressionHasBeenSet = true; m_expression.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If provided, permissions are granted to the Data Catalog resources whose
     * assigned LF-Tags match the expression body of the saved expression under the
     * provided <code>ExpressionName</code>.</p>
     */
    inline const Aws::String& GetExpressionName() const{ return m_expressionName; }
    inline bool ExpressionNameHasBeenSet() const { return m_expressionNameHasBeenSet; }
    inline void SetExpressionName(const Aws::String& value) { m_expressionNameHasBeenSet = true; m_expressionName = value; }
    inline void SetExpressionName(Aws::String&& value) { m_expressionNameHasBeenSet = true; m_expressionName = std::move(value); }
    inline void SetExpressionName(const char* value) { m_expressionNameHasBeenSet = true; m_expressionName.assign(value); }
    inline LFTagPolicyResource& WithExpressionName(const Aws::String& value) { SetExpressionName(value); return *this;}
    inline LFTagPolicyResource& WithExpressionName(Aws::String&& value) { SetExpressionName(std::move(value)); return *this;}
    inline LFTagPolicyResource& WithExpressionName(const char* value) { SetExpressionName(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
