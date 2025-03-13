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
   * <p>Returns details of a specific query. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StoredQueryMetadata">AWS
   * API Reference</a></p>
   */
  class StoredQueryMetadata
  {
  public:
    AWS_CONFIGSERVICE_API StoredQueryMetadata() = default;
    AWS_CONFIGSERVICE_API StoredQueryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API StoredQueryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the query. </p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    StoredQueryMetadata& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
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
    StoredQueryMetadata& WithQueryArn(QueryArnT&& value) { SetQueryArn(std::forward<QueryArnT>(value)); return *this;}
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
    StoredQueryMetadata& WithQueryName(QueryNameT&& value) { SetQueryName(std::forward<QueryNameT>(value)); return *this;}
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
    StoredQueryMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
