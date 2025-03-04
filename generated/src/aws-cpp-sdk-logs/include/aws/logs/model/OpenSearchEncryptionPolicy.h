/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the OpenSearch Service encryption
   * policy used for this integration. The encryption policy was created
   * automatically when you created the integration. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html#serverless-encryption-policies">Encryption
   * policies</a> in the OpenSearch Service Developer Guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchEncryptionPolicy">AWS
   * API Reference</a></p>
   */
  class OpenSearchEncryptionPolicy
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchEncryptionPolicy() = default;
    AWS_CLOUDWATCHLOGS_API OpenSearchEncryptionPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchEncryptionPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the encryption policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    OpenSearchEncryptionPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = OpenSearchResourceStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = OpenSearchResourceStatus>
    OpenSearchEncryptionPolicy& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
