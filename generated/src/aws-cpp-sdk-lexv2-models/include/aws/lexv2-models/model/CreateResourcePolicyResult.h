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
  class CreateResourcePolicyResult
  {
  public:
    AWS_LEXMODELSV2_API CreateResourcePolicyResult();
    AWS_LEXMODELSV2_API CreateResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline CreateResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline CreateResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy was attached to.</p>
     */
    inline CreateResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


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
    inline CreateResourcePolicyResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline CreateResourcePolicyResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The current revision of the resource policy. Use the revision ID to make sure
     * that you are updating the most current version of a resource policy when you add
     * a policy statement to a resource, delete a resource, or update a resource.</p>
     */
    inline CreateResourcePolicyResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
