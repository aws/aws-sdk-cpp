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
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets the <a>Tags</a> collection for a given resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetTagsRequest : public APIGatewayRequest
  {
  public:
    GetTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTags"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline GetTagsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline GetTagsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>[Required] The ARN of a resource that can be tagged. The resource ARN must be
     * URL-encoded.</p>
     */
    inline GetTagsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline GetTagsRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline GetTagsRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>(Not currently supported) The current pagination position in the paged result
     * set.</p>
     */
    inline GetTagsRequest& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>(Not currently supported) The maximum number of returned results per page.
     * The default value is 25 and the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>(Not currently supported) The maximum number of returned results per page.
     * The default value is 25 and the maximum value is 500.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>(Not currently supported) The maximum number of returned results per page.
     * The default value is 25 and the maximum value is 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>(Not currently supported) The maximum number of returned results per page.
     * The default value is 25 and the maximum value is 500.</p>
     */
    inline GetTagsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::String m_position;
    bool m_positionHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
