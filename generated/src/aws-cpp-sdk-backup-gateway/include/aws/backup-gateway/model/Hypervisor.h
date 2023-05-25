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


    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline Hypervisor& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline Hypervisor& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline Hypervisor& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const char* value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline Hypervisor& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline Hypervisor& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline Hypervisor& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline Hypervisor& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline Hypervisor& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service used to encrypt
     * the hypervisor.</p>
     */
    inline Hypervisor& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The name of the hypervisor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline Hypervisor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline Hypervisor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline Hypervisor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the hypervisor.</p>
     */
    inline const HypervisorState& GetState() const{ return m_state; }

    /**
     * <p>The state of the hypervisor.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the hypervisor.</p>
     */
    inline void SetState(const HypervisorState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the hypervisor.</p>
     */
    inline void SetState(HypervisorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the hypervisor.</p>
     */
    inline Hypervisor& WithState(const HypervisorState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the hypervisor.</p>
     */
    inline Hypervisor& WithState(HypervisorState&& value) { SetState(std::move(value)); return *this;}

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
