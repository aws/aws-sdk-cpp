/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/TlsSessionResumptionMode.h>
#include <aws/awstransfer/model/SetStatOption.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p> The protocol settings that are configured for your server. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ProtocolDetails">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API ProtocolDetails
  {
  public:
    ProtocolDetails();
    ProtocolDetails(Aws::Utils::Json::JsonView jsonValue);
    ProtocolDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline const Aws::String& GetPassiveIp() const{ return m_passiveIp; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline bool PassiveIpHasBeenSet() const { return m_passiveIpHasBeenSet; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline void SetPassiveIp(const Aws::String& value) { m_passiveIpHasBeenSet = true; m_passiveIp = value; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline void SetPassiveIp(Aws::String&& value) { m_passiveIpHasBeenSet = true; m_passiveIp = std::move(value); }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline void SetPassiveIp(const char* value) { m_passiveIpHasBeenSet = true; m_passiveIp.assign(value); }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline ProtocolDetails& WithPassiveIp(const Aws::String& value) { SetPassiveIp(value); return *this;}

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline ProtocolDetails& WithPassiveIp(Aws::String&& value) { SetPassiveIp(std::move(value)); return *this;}

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>  <p> If you change the <code>PassiveIp</code> value, you must
     * stop and then restart your Transfer server for the change to take effect. For
     * details on using Passive IP (PASV) in a NAT environment, see <a
     * href="http://aws.amazon.com/blogs/storage/configuring-your-ftps-server-behind-a-firewall-or-nat-with-aws-transfer-family/">Configuring
     * your FTPS server behind a firewall or NAT with Amazon Web Services Transfer
     * Family</a>. </p> 
     */
    inline ProtocolDetails& WithPassiveIp(const char* value) { SetPassiveIp(value); return *this;}


    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline const TlsSessionResumptionMode& GetTlsSessionResumptionMode() const{ return m_tlsSessionResumptionMode; }

    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline bool TlsSessionResumptionModeHasBeenSet() const { return m_tlsSessionResumptionModeHasBeenSet; }

    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline void SetTlsSessionResumptionMode(const TlsSessionResumptionMode& value) { m_tlsSessionResumptionModeHasBeenSet = true; m_tlsSessionResumptionMode = value; }

    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline void SetTlsSessionResumptionMode(TlsSessionResumptionMode&& value) { m_tlsSessionResumptionModeHasBeenSet = true; m_tlsSessionResumptionMode = std::move(value); }

    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline ProtocolDetails& WithTlsSessionResumptionMode(const TlsSessionResumptionMode& value) { SetTlsSessionResumptionMode(value); return *this;}

    /**
     * <p>A property used with Transfer servers that use the FTPS protocol. TLS Session
     * Resumption provides a mechanism to resume or share a negotiated secret key
     * between the control and data connection for an FTPS session.
     * <code>TlsSessionResumptionMode</code> determines whether or not the server
     * resumes recent, negotiated sessions through a unique session ID. This property
     * is available during <code>CreateServer</code> and <code>UpdateServer</code>
     * calls. If a <code>TlsSessionResumptionMode</code> value is not specified during
     * CreateServer, it is set to <code>ENFORCED</code> by default.</p> <ul> <li> <p>
     * <code>DISABLED</code>: the server does not process TLS session resumption client
     * requests and creates a new TLS session for each request. </p> </li> <li> <p>
     * <code>ENABLED</code>: the server processes and accepts clients that are
     * performing TLS session resumption. The server doesn't reject client data
     * connections that do not perform the TLS session resumption client
     * processing.</p> </li> <li> <p> <code>ENFORCED</code>: the server processes and
     * accepts clients that are performing TLS session resumption. The server rejects
     * client data connections that do not perform the TLS session resumption client
     * processing. Before you set the value to <code>ENFORCED</code>, test your
     * clients.</p>  <p>Not all FTPS clients perform TLS session resumption. So,
     * if you choose to enforce TLS session resumption, you prevent any connections
     * from FTPS clients that don't perform the protocol negotiation. To determine
     * whether or not you can use the <code>ENFORCED</code> value, you need to test
     * your clients.</p>  </li> </ul>
     */
    inline ProtocolDetails& WithTlsSessionResumptionMode(TlsSessionResumptionMode&& value) { SetTlsSessionResumptionMode(std::move(value)); return *this;}


    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline const SetStatOption& GetSetStatOption() const{ return m_setStatOption; }

    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline bool SetStatOptionHasBeenSet() const { return m_setStatOptionHasBeenSet; }

    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline void SetSetStatOption(const SetStatOption& value) { m_setStatOptionHasBeenSet = true; m_setStatOption = value; }

    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline void SetSetStatOption(SetStatOption&& value) { m_setStatOptionHasBeenSet = true; m_setStatOption = std::move(value); }

    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline ProtocolDetails& WithSetStatOption(const SetStatOption& value) { SetSetStatOption(value); return *this;}

    /**
     * <p>Use the <code>SetStatOption</code> to ignore the error that is generated when
     * the client attempts to use SETSTAT on a file you are uploading to an S3
     * bucket.</p> <p>Some SFTP file transfer clients can attempt to change the
     * attributes of remote files, including timestamp and permissions, using commands,
     * such as SETSTAT when uploading the file. However, these commands are not
     * compatible with object storage systems, such as Amazon S3. Due to this
     * incompatibility, file uploads from these clients can result in errors even when
     * the file is otherwise successfully uploaded.</p> <p>Set the value to
     * <code>ENABLE_NO_OP</code> to have the Transfer Family server ignore the SETSTAT
     * command, and upload files without needing to make any changes to your SFTP
     * client. While the <code>SetStatOption</code> <code>ENABLE_NO_OP</code> setting
     * ignores the error, it does generate a log entry in CloudWatch Logs, so you can
     * determine when the client is making a SETSTAT call.</p>  <p>If you want to
     * preserve the original timestamp for your file, and modify other file attributes
     * using SETSTAT, you can use Amazon EFS as backend storage with Transfer
     * Family.</p> 
     */
    inline ProtocolDetails& WithSetStatOption(SetStatOption&& value) { SetSetStatOption(std::move(value)); return *this;}

  private:

    Aws::String m_passiveIp;
    bool m_passiveIpHasBeenSet;

    TlsSessionResumptionMode m_tlsSessionResumptionMode;
    bool m_tlsSessionResumptionModeHasBeenSet;

    SetStatOption m_setStatOption;
    bool m_setStatOptionHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
