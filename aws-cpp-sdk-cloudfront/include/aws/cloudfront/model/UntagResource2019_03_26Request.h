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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/TagKeys.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   * <p> The request to remove tags from a CloudFront resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UntagResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API UntagResource2019_03_26Request : public CloudFrontRequest
  {
  public:
    UntagResource2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline UntagResource2019_03_26Request& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline UntagResource2019_03_26Request& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p> An ARN of a CloudFront resource.</p>
     */
    inline UntagResource2019_03_26Request& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline const TagKeys& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline void SetTagKeys(const TagKeys& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline void SetTagKeys(TagKeys&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline UntagResource2019_03_26Request& WithTagKeys(const TagKeys& value) { SetTagKeys(value); return *this;}

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> key elements.</p>
     */
    inline UntagResource2019_03_26Request& WithTagKeys(TagKeys&& value) { SetTagKeys(std::move(value)); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    TagKeys m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
