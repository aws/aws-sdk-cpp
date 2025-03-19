/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/AllowAWSToRetainLogs.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The entity that provides configuration control over managed
   * logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ManagedLogs">AWS
   * API Reference</a></p>
   */
  class ManagedLogs
  {
  public:
    AWS_EMRCONTAINERS_API ManagedLogs() = default;
    AWS_EMRCONTAINERS_API ManagedLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ManagedLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether Amazon Web Services can retain logs.</p>
     */
    inline AllowAWSToRetainLogs GetAllowAWSToRetainLogs() const { return m_allowAWSToRetainLogs; }
    inline bool AllowAWSToRetainLogsHasBeenSet() const { return m_allowAWSToRetainLogsHasBeenSet; }
    inline void SetAllowAWSToRetainLogs(AllowAWSToRetainLogs value) { m_allowAWSToRetainLogsHasBeenSet = true; m_allowAWSToRetainLogs = value; }
    inline ManagedLogs& WithAllowAWSToRetainLogs(AllowAWSToRetainLogs value) { SetAllowAWSToRetainLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the encryption key for logs.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    ManagedLogs& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}
  private:

    AllowAWSToRetainLogs m_allowAWSToRetainLogs{AllowAWSToRetainLogs::NOT_SET};
    bool m_allowAWSToRetainLogsHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
