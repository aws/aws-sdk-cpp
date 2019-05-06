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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the traffic policy that you
   * want to create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CreateTrafficPolicyRequest : public Route53Request
  {
  public:
    CreateTrafficPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficPolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the traffic policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the traffic policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline CreateTrafficPolicyRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline CreateTrafficPolicyRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The definition of this traffic policy in JSON format. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline CreateTrafficPolicyRequest& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>(Optional) Any comments that you want to include about the traffic
     * policy.</p>
     */
    inline CreateTrafficPolicyRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
