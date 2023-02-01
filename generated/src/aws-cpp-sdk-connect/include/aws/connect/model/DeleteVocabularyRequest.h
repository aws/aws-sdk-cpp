/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DeleteVocabularyRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVocabulary"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteVocabularyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteVocabularyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteVocabularyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyId() const{ return m_vocabularyId; }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline bool VocabularyIdHasBeenSet() const { return m_vocabularyIdHasBeenSet; }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(const Aws::String& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = value; }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(Aws::String&& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = std::move(value); }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(const char* value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId.assign(value); }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline DeleteVocabularyRequest& WithVocabularyId(const Aws::String& value) { SetVocabularyId(value); return *this;}

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline DeleteVocabularyRequest& WithVocabularyId(Aws::String&& value) { SetVocabularyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline DeleteVocabularyRequest& WithVocabularyId(const char* value) { SetVocabularyId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_vocabularyId;
    bool m_vocabularyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
