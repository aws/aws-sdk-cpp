/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/HypervisorState.h>
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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>Represents the hypervisor's permissions to which the gateway will
   * connect.</p> <p>A hypervisor is hardware, software, or firmware that creates and
   * manages virtual machines, and allocates resources to them.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/Hypervisor">AWS
   * API Reference</a></p>
   */
  class Hypervisor
  {
  public:
    AWS_BACKUPGATEWAY_API Hypervisor();
    AWS_BACKUPGATEWAY_API Hypervisor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Hypervisor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline Hypervisor& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline Hypervisor& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline Hypervisor& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = value; }
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::move(value); }
    inline void SetHypervisorArn(const char* value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn.assign(value); }
    inline Hypervisor& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}
    inline Hypervisor& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}
    inline Hypervisor& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline Hypervisor& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline Hypervisor& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline Hypervisor& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hypervisor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Hypervisor& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Hypervisor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Hypervisor& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the hypervisor.</p>
     */
    inline const HypervisorState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const HypervisorState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(HypervisorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Hypervisor& WithState(const HypervisorState& value) { SetState(value); return *this;}
    inline Hypervisor& WithState(HypervisorState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HypervisorState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
