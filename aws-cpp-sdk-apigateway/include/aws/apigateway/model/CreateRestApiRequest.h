/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST Request to add a new <a>RestApi</a> resource to your collection.</p>
   */
  class AWS_APIGATEWAY_API CreateRestApiRequest : public APIGatewayRequest
  {
  public:
    CreateRestApiRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline const Aws::String& GetCloneFrom() const{ return m_cloneFrom; }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(const Aws::String& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = value; }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(Aws::String&& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = value; }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(const char* value) { m_cloneFromHasBeenSet = true; m_cloneFrom.assign(value); }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const Aws::String& value) { SetCloneFrom(value); return *this;}

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(Aws::String&& value) { SetCloneFrom(value); return *this;}

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const char* value) { SetCloneFrom(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_cloneFrom;
    bool m_cloneFromHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
