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
   * <p>Get an <a>SdkType</a> instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkTypeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetSdkTypeRequest : public APIGatewayRequest
  {
  public:
    GetSdkTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSdkType"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline GetSdkTypeRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline GetSdkTypeRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the queried <a>SdkType</a> instance.</p>
     */
    inline GetSdkTypeRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
