/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2InstanceConnect
{
namespace Model
{

  /**
   */
  class SendSerialConsoleSSHPublicKeyRequest : public EC2InstanceConnectRequest
  {
  public:
    AWS_EC2INSTANCECONNECT_API SendSerialConsoleSSHPublicKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendSerialConsoleSSHPublicKey"; }

    AWS_EC2INSTANCECONNECT_API Aws::String SerializePayload() const override;

    AWS_EC2INSTANCECONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The serial port of the EC2 instance. Currently only port 0 is supported.</p>
     * <p>Default: 0</p>
     */
    inline int GetSerialPort() const{ return m_serialPort; }

    /**
     * <p>The serial port of the EC2 instance. Currently only port 0 is supported.</p>
     * <p>Default: 0</p>
     */
    inline bool SerialPortHasBeenSet() const { return m_serialPortHasBeenSet; }

    /**
     * <p>The serial port of the EC2 instance. Currently only port 0 is supported.</p>
     * <p>Default: 0</p>
     */
    inline void SetSerialPort(int value) { m_serialPortHasBeenSet = true; m_serialPort = value; }

    /**
     * <p>The serial port of the EC2 instance. Currently only port 0 is supported.</p>
     * <p>Default: 0</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithSerialPort(int value) { SetSerialPort(value); return *this;}


    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetSSHPublicKey() const{ return m_sSHPublicKey; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool SSHPublicKeyHasBeenSet() const { return m_sSHPublicKeyHasBeenSet; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetSSHPublicKey(const Aws::String& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = value; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetSSHPublicKey(Aws::String&& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = std::move(value); }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetSSHPublicKey(const char* value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey.assign(value); }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithSSHPublicKey(const Aws::String& value) { SetSSHPublicKey(value); return *this;}

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithSSHPublicKey(Aws::String&& value) { SetSSHPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key. For information about the supported key formats and lengths, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html#how-to-generate-your-own-key-and-import-it-to-aws">Requirements
     * for key pairs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline SendSerialConsoleSSHPublicKeyRequest& WithSSHPublicKey(const char* value) { SetSSHPublicKey(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_serialPort;
    bool m_serialPortHasBeenSet = false;

    Aws::String m_sSHPublicKey;
    bool m_sSHPublicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2InstanceConnect
} // namespace Aws
