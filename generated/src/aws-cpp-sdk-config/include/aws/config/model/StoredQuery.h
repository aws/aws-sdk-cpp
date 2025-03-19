/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the details of a stored query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StoredQuery">AWS
   * API Reference</a></p>
   */
  class StoredQuery
  {
  public:
    AWS_CONFIGSERVICE_API StoredQuery() = default;
    AWS_CONFIGSERVICE_API StoredQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API StoredQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    StoredQuery& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline const Aws::String& GetQueryArn() const { return m_queryArn; }
    inline bool QueryArnHasBeenSet() const { return m_queryArnHasBeenSet; }
    template<typename QueryArnT = Aws::String>
    void SetQueryArn(QueryArnT&& value) { m_queryArnHasBeenSet = true; m_queryArn = std::forward<QueryArnT>(value); }
    template<typename QueryArnT = Aws::String>
    StoredQuery& WithQueryArn(QueryArnT&& value) { SetQueryArn(std::forward<QueryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the query.</p>
     */
    inline const Aws::String& GetQueryName() const { return m_queryName; }
    inline bool QueryNameHasBeenSet() const { return m_queryNameHasBeenSet; }
    template<typename QueryNameT = Aws::String>
    void SetQueryName(QueryNameT&& value) { m_queryNameHasBeenSet = true; m_queryName = std::forward<QueryNameT>(value); }
    template<typename QueryNameT = Aws::String>
    StoredQuery& WithQueryName(QueryNameT&& value) { SetQueryName(std::forward<QueryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique description for the query.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StoredQuery& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression of the query. For example, <code>SELECT resourceId,
     * resourceType, supplementaryConfiguration.BucketVersioningConfiguration.status
     * WHERE resourceType = 'AWS::S3::Bucket' AND
     * supplementaryConfiguration.BucketVersioningConfiguration.status = 'Off'.</code>
     * </p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    StoredQuery& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryArn;
    bool m_queryArnHasBeenSet = false;

    Aws::String m_queryName;
    bool m_queryNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
