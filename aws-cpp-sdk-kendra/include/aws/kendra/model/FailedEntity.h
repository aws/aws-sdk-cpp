/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Information on the users or groups in your IAM Identity Center identity
   * source that failed to properly configure with your Amazon Kendra
   * experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FailedEntity">AWS
   * API Reference</a></p>
   */
  class FailedEntity
  {
  public:
    AWS_KENDRA_API FailedEntity();
    AWS_KENDRA_API FailedEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FailedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline FailedEntity& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline FailedEntity& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline FailedEntity& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline FailedEntity& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline FailedEntity& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The reason the user or group in your IAM Identity Center identity source
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline FailedEntity& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
