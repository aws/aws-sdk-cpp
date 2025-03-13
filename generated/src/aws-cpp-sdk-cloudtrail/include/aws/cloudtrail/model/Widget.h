/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> A widget on a CloudTrail Lake dashboard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Widget">AWS
   * API Reference</a></p>
   */
  class Widget
  {
  public:
    AWS_CLOUDTRAIL_API Widget() = default;
    AWS_CLOUDTRAIL_API Widget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Widget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query alias used to identify the query for the widget. </p>
     */
    inline const Aws::String& GetQueryAlias() const { return m_queryAlias; }
    inline bool QueryAliasHasBeenSet() const { return m_queryAliasHasBeenSet; }
    template<typename QueryAliasT = Aws::String>
    void SetQueryAlias(QueryAliasT&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::forward<QueryAliasT>(value); }
    template<typename QueryAliasT = Aws::String>
    Widget& WithQueryAlias(QueryAliasT&& value) { SetQueryAlias(std::forward<QueryAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SQL query statement for the widget. </p>
     */
    inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    template<typename QueryStatementT = Aws::String>
    void SetQueryStatement(QueryStatementT&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::forward<QueryStatementT>(value); }
    template<typename QueryStatementT = Aws::String>
    Widget& WithQueryStatement(QueryStatementT&& value) { SetQueryStatement(std::forward<QueryStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The query parameters for the widget. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Vector<Aws::String>>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Vector<Aws::String>>
    Widget& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    template<typename QueryParametersT = Aws::String>
    Widget& AddQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace_back(std::forward<QueryParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The view properties for the widget. For more information about view
     * properties, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-widget-properties.html">
     * View properties for widgets </a> in the <i>CloudTrail User Guide</i>.. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetViewProperties() const { return m_viewProperties; }
    inline bool ViewPropertiesHasBeenSet() const { return m_viewPropertiesHasBeenSet; }
    template<typename ViewPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetViewProperties(ViewPropertiesT&& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties = std::forward<ViewPropertiesT>(value); }
    template<typename ViewPropertiesT = Aws::Map<Aws::String, Aws::String>>
    Widget& WithViewProperties(ViewPropertiesT&& value) { SetViewProperties(std::forward<ViewPropertiesT>(value)); return *this;}
    template<typename ViewPropertiesKeyT = Aws::String, typename ViewPropertiesValueT = Aws::String>
    Widget& AddViewProperties(ViewPropertiesKeyT&& key, ViewPropertiesValueT&& value) {
      m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(std::forward<ViewPropertiesKeyT>(key), std::forward<ViewPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_queryAlias;
    bool m_queryAliasHasBeenSet = false;

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_viewProperties;
    bool m_viewPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
