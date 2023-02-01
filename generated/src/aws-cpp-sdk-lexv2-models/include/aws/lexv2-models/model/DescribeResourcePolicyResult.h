/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DescribeResourcePolicyResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeResourcePolicyResult();
    AWS_LEXMODELSV2_API DescribeResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline DescribeResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline DescribeResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline DescribeResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON structure that contains the resource policy. For more information
     * about the contents of a JSON policy document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline DescribeResourcePolicyResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline DescribeResourcePolicyResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline DescribeResourcePolicyResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_policy;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
