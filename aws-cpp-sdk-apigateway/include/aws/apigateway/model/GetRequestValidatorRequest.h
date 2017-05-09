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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets a <a>RequestValidator</a> of a given <a>RestApi</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidatorRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetRequestValidatorRequest : public APIGatewayRequest
  {
  public:
    GetRequestValidatorRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline GetRequestValidatorRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline GetRequestValidatorRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>RestApi</a> to which the specified
     * <a>RequestValidator</a> belongs.</p>
     */
    inline GetRequestValidatorRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = value; }

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline GetRequestValidatorRequest& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline GetRequestValidatorRequest& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>RequestValidator</a> to be retrieved.</p>
     */
    inline GetRequestValidatorRequest& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
