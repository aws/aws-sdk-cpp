/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/SSEStatus.h>
#include <aws/dynamodb/model/SSEType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the server-side encryption status on the specified
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SSEDescription">AWS
   * API Reference</a></p>
   */
  class SSEDescription
  {
  public:
    AWS_DYNAMODB_API SSEDescription();
    AWS_DYNAMODB_API SSEDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SSEDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline const SSEStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline void SetStatus(const SSEStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline void SetStatus(SSEStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline SSEDescription& WithStatus(const SSEStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline SSEDescription& WithStatus(SSEStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline const SSEType& GetSSEType() const{ return m_sSEType; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline bool SSETypeHasBeenSet() const { return m_sSETypeHasBeenSet; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(const SSEType& value) { m_sSETypeHasBeenSet = true; m_sSEType = value; }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline void SetSSEType(SSEType&& value) { m_sSETypeHasBeenSet = true; m_sSEType = std::move(value); }

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSEDescription& WithSSEType(const SSEType& value) { SetSSEType(value); return *this;}

    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSEDescription& WithSSEType(SSEType&& value) { SetSSEType(std::move(value)); return *this;}


    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyArn() const{ return m_kMSMasterKeyArn; }

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline bool KMSMasterKeyArnHasBeenSet() const { return m_kMSMasterKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(const Aws::String& value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn = value; }

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(Aws::String&& value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline void SetKMSMasterKeyArn(const char* value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(const Aws::String& value) { SetKMSMasterKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(Aws::String&& value) { SetKMSMasterKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline SSEDescription& WithKMSMasterKeyArn(const char* value) { SetKMSMasterKeyArn(value); return *this;}


    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline const Aws::Utils::DateTime& GetInaccessibleEncryptionDateTime() const{ return m_inaccessibleEncryptionDateTime; }

    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline bool InaccessibleEncryptionDateTimeHasBeenSet() const { return m_inaccessibleEncryptionDateTimeHasBeenSet; }

    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline void SetInaccessibleEncryptionDateTime(const Aws::Utils::DateTime& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = value; }

    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline void SetInaccessibleEncryptionDateTime(Aws::Utils::DateTime&& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = std::move(value); }

    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline SSEDescription& WithInaccessibleEncryptionDateTime(const Aws::Utils::DateTime& value) { SetInaccessibleEncryptionDateTime(value); return *this;}

    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline SSEDescription& WithInaccessibleEncryptionDateTime(Aws::Utils::DateTime&& value) { SetInaccessibleEncryptionDateTime(std::move(value)); return *this;}

  private:

    SSEStatus m_status;
    bool m_statusHasBeenSet = false;

    SSEType m_sSEType;
    bool m_sSETypeHasBeenSet = false;

    Aws::String m_kMSMasterKeyArn;
    bool m_kMSMasterKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_inaccessibleEncryptionDateTime;
    bool m_inaccessibleEncryptionDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
