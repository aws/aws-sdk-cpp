/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DeleteResourcePolicyRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that has the resource
     * policy attached.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision to edit. If this ID doesn't match the current
     * revision number, Amazon Lex returns an exception</p> <p>If you don't specify a
     * revision ID, Amazon Lex will delete the current policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
