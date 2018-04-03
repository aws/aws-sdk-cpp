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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API UntagResourceRequest : public LambdaRequest
  {
  public:
    UntagResourceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tag keys to be deleted from the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
