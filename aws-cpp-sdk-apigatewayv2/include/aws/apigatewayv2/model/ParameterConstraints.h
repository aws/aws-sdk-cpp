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
   * string,
 headers).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ParameterConstraints">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API ParameterConstraints
  {
  public:
    ParameterConstraints();
    ParameterConstraints(Aws::Utils::Json::JsonView jsonValue);
    ParameterConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_requiredHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
