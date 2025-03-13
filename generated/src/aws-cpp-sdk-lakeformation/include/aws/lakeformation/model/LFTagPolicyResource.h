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
    AWS_LAKEFORMATION_API LFTagPolicyResource() = default;
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
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    LFTagPolicyResource& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for which the LF-tag policy applies.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LFTagPolicyResource& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tag conditions or a saved expression that apply to the
     * resource's LF-tag policy.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::Vector<LFTag>>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::Vector<LFTag>>
    LFTagPolicyResource& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    template<typename ExpressionT = LFTag>
    LFTagPolicyResource& AddExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression.emplace_back(std::forward<ExpressionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If provided, permissions are granted to the Data Catalog resources whose
     * assigned LF-Tags match the expression body of the saved expression under the
     * provided <code>ExpressionName</code>.</p>
     */
    inline const Aws::String& GetExpressionName() const { return m_expressionName; }
    inline bool ExpressionNameHasBeenSet() const { return m_expressionNameHasBeenSet; }
    template<typename ExpressionNameT = Aws::String>
    void SetExpressionName(ExpressionNameT&& value) { m_expressionNameHasBeenSet = true; m_expressionName = std::forward<ExpressionNameT>(value); }
    template<typename ExpressionNameT = Aws::String>
    LFTagPolicyResource& WithExpressionName(ExpressionNameT&& value) { SetExpressionName(std::forward<ExpressionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
