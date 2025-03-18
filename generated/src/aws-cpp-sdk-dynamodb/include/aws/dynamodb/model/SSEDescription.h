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
    AWS_DYNAMODB_API SSEDescription() = default;
    AWS_DYNAMODB_API SSEDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SSEDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the current state of server-side encryption. The only supported
     * values are:</p> <ul> <li> <p> <code>ENABLED</code> - Server-side encryption is
     * enabled.</p> </li> <li> <p> <code>UPDATING</code> - Server-side encryption is
     * being updated.</p> </li> </ul>
     */
    inline SSEStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SSEStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SSEDescription& WithStatus(SSEStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Server-side encryption type. The only supported value is:</p> <ul> <li> <p>
     * <code>KMS</code> - Server-side encryption that uses Key Management Service. The
     * key is stored in your account and is managed by KMS (KMS charges apply).</p>
     * </li> </ul>
     */
    inline SSEType GetSSEType() const { return m_sSEType; }
    inline bool SSETypeHasBeenSet() const { return m_sSETypeHasBeenSet; }
    inline void SetSSEType(SSEType value) { m_sSETypeHasBeenSet = true; m_sSEType = value; }
    inline SSEDescription& WithSSEType(SSEType value) { SetSSEType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN used for the KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyArn() const { return m_kMSMasterKeyArn; }
    inline bool KMSMasterKeyArnHasBeenSet() const { return m_kMSMasterKeyArnHasBeenSet; }
    template<typename KMSMasterKeyArnT = Aws::String>
    void SetKMSMasterKeyArn(KMSMasterKeyArnT&& value) { m_kMSMasterKeyArnHasBeenSet = true; m_kMSMasterKeyArn = std::forward<KMSMasterKeyArnT>(value); }
    template<typename KMSMasterKeyArnT = Aws::String>
    SSEDescription& WithKMSMasterKeyArn(KMSMasterKeyArnT&& value) { SetKMSMasterKeyArn(std::forward<KMSMasterKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time, in UNIX epoch date format, when DynamoDB detected that
     * the table's KMS key was inaccessible. This attribute will automatically be
     * cleared when DynamoDB detects that the table's KMS key is accessible again.
     * DynamoDB will initiate the table archival process when table's KMS key remains
     * inaccessible for more than seven days from this date.</p>
     */
    inline const Aws::Utils::DateTime& GetInaccessibleEncryptionDateTime() const { return m_inaccessibleEncryptionDateTime; }
    inline bool InaccessibleEncryptionDateTimeHasBeenSet() const { return m_inaccessibleEncryptionDateTimeHasBeenSet; }
    template<typename InaccessibleEncryptionDateTimeT = Aws::Utils::DateTime>
    void SetInaccessibleEncryptionDateTime(InaccessibleEncryptionDateTimeT&& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = std::forward<InaccessibleEncryptionDateTimeT>(value); }
    template<typename InaccessibleEncryptionDateTimeT = Aws::Utils::DateTime>
    SSEDescription& WithInaccessibleEncryptionDateTime(InaccessibleEncryptionDateTimeT&& value) { SetInaccessibleEncryptionDateTime(std::forward<InaccessibleEncryptionDateTimeT>(value)); return *this;}
    ///@}
  private:

    SSEStatus m_status{SSEStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SSEType m_sSEType{SSEType::NOT_SET};
    bool m_sSETypeHasBeenSet = false;

    Aws::String m_kMSMasterKeyArn;
    bool m_kMSMasterKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_inaccessibleEncryptionDateTime{};
    bool m_inaccessibleEncryptionDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
