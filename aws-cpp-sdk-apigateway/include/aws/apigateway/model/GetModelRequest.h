/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to list information about a model in an existing RestApi
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModelRequest">AWS
   * API Reference</a></p>
   */
  class GetModelRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetModel"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline GetModelRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline GetModelRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The RestApi identifier under which the Model exists.</p>
     */
    inline GetModelRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model as an identifier.</p>
     */
    inline GetModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline bool GetFlatten() const{ return m_flatten; }

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline bool FlattenHasBeenSet() const { return m_flattenHasBeenSet; }

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline void SetFlatten(bool value) { m_flattenHasBeenSet = true; m_flatten = value; }

    /**
     * <p>A query parameter of a Boolean value to resolve (<code>true</code>) all
     * external model references and returns a flattened model schema or not
     * (<code>false</code>) The default is <code>false</code>.</p>
     */
    inline GetModelRequest& WithFlatten(bool value) { SetFlatten(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    bool m_flatten;
    bool m_flattenHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
