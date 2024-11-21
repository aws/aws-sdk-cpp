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
   * <p> Contains information about a widget on a CloudTrail Lake dashboard.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RequestWidget">AWS
   * API Reference</a></p>
   */
  class RequestWidget
  {
  public:
    AWS_CLOUDTRAIL_API RequestWidget();
    AWS_CLOUDTRAIL_API RequestWidget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API RequestWidget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The query statement for the widget. For custom dashboard widgets, you can
     * query across multiple event data stores as long as all event data stores exist
     * in your account. </p>  <p>When a query uses <code>?</code> with
     * <code>eventTime</code>, <code>?</code> must be surrounded by single quotes as
     * follows: <code>'?'</code>.</p> 
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }
    inline RequestWidget& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline RequestWidget& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline RequestWidget& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The optional query parameters. The following query parameters are valid:
     * <code>$StartTime$</code>, <code>$EndTime$</code>, and <code>$Period$</code>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryParameters() const{ return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    inline void SetQueryParameters(const Aws::Vector<Aws::String>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }
    inline void SetQueryParameters(Aws::Vector<Aws::String>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }
    inline RequestWidget& WithQueryParameters(const Aws::Vector<Aws::String>& value) { SetQueryParameters(value); return *this;}
    inline RequestWidget& WithQueryParameters(Aws::Vector<Aws::String>&& value) { SetQueryParameters(std::move(value)); return *this;}
    inline RequestWidget& AddQueryParameters(const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }
    inline RequestWidget& AddQueryParameters(Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(std::move(value)); return *this; }
    inline RequestWidget& AddQueryParameters(const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The view properties for the widget. For more information about view
     * properties, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-widget-properties.html">
     * View properties for widgets </a> in the <i>CloudTrail User Guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetViewProperties() const{ return m_viewProperties; }
    inline bool ViewPropertiesHasBeenSet() const { return m_viewPropertiesHasBeenSet; }
    inline void SetViewProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties = value; }
    inline void SetViewProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties = std::move(value); }
    inline RequestWidget& WithViewProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetViewProperties(value); return *this;}
    inline RequestWidget& WithViewProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetViewProperties(std::move(value)); return *this;}
    inline RequestWidget& AddViewProperties(const Aws::String& key, const Aws::String& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(key, value); return *this; }
    inline RequestWidget& AddViewProperties(Aws::String&& key, const Aws::String& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(std::move(key), value); return *this; }
    inline RequestWidget& AddViewProperties(const Aws::String& key, Aws::String&& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(key, std::move(value)); return *this; }
    inline RequestWidget& AddViewProperties(Aws::String&& key, Aws::String&& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestWidget& AddViewProperties(const char* key, Aws::String&& value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(key, std::move(value)); return *this; }
    inline RequestWidget& AddViewProperties(Aws::String&& key, const char* value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(std::move(key), value); return *this; }
    inline RequestWidget& AddViewProperties(const char* key, const char* value) { m_viewPropertiesHasBeenSet = true; m_viewProperties.emplace(key, value); return *this; }
    ///@}
  private:

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
