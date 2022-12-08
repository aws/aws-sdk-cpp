/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>

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
   * <p>Validation constraints imposed on parameters of a request (path, query
   * string, headers).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ParameterConstraints">AWS
   * API Reference</a></p>
   */
  class ParameterConstraints
  {
  public:
    AWS_APIGATEWAYV2_API ParameterConstraints();
    AWS_APIGATEWAYV2_API ParameterConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API ParameterConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether or not the parameter is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Whether or not the parameter is required.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Whether or not the parameter is required.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Whether or not the parameter is required.</p>
     */
    inline ParameterConstraints& WithRequired(bool value) { SetRequired(value); return *this;}

  private:

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
