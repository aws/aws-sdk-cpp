/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DomainName">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API DomainName
  {
  public:
    DomainName();
    DomainName(Aws::Utils::Json::JsonView jsonValue);
    DomainName& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const{ return m_apiMappingSelectionExpression; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline bool ApiMappingSelectionExpressionHasBeenSet() const { return m_apiMappingSelectionExpressionHasBeenSet; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const Aws::String& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = value; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(Aws::String&& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = std::move(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const char* value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression.assign(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(const Aws::String& value) { SetApiMappingSelectionExpression(value); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(Aws::String&& value) { SetApiMappingSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(const char* value) { SetApiMappingSelectionExpression(value); return *this;}


    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const{ return m_domainNameConfigurations; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline bool DomainNameConfigurationsHasBeenSet() const { return m_domainNameConfigurationsHasBeenSet; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = value; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = std::move(value); }

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& WithDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { SetDomainNameConfigurations(value); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& WithDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { SetDomainNameConfigurations(std::move(value)); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& AddDomainNameConfigurations(const DomainNameConfiguration& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(value); return *this; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& AddDomainNameConfigurations(DomainNameConfiguration&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_apiMappingSelectionExpression;
    bool m_apiMappingSelectionExpressionHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;
    bool m_domainNameConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
