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
   * want to create a new version for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyVersionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CreateTrafficPolicyVersionRequest : public Route53Request
  {
  public:
    CreateTrafficPolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficPolicyVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline CreateTrafficPolicyVersionRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
