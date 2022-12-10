/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ServerCertificateStatus.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that contains information about a server certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ServerCertificateSummary">AWS
   * API Reference</a></p>
   */
  class ServerCertificateSummary
  {
  public:
    AWS_IOT_API ServerCertificateSummary();
    AWS_IOT_API ServerCertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ServerCertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}


    /**
     * <p>The status of the server certificate.</p>
     */
    inline const ServerCertificateStatus& GetServerCertificateStatus() const{ return m_serverCertificateStatus; }

    /**
     * <p>The status of the server certificate.</p>
     */
    inline bool ServerCertificateStatusHasBeenSet() const { return m_serverCertificateStatusHasBeenSet; }

    /**
     * <p>The status of the server certificate.</p>
     */
    inline void SetServerCertificateStatus(const ServerCertificateStatus& value) { m_serverCertificateStatusHasBeenSet = true; m_serverCertificateStatus = value; }

    /**
     * <p>The status of the server certificate.</p>
     */
    inline void SetServerCertificateStatus(ServerCertificateStatus&& value) { m_serverCertificateStatusHasBeenSet = true; m_serverCertificateStatus = std::move(value); }

    /**
     * <p>The status of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateStatus(const ServerCertificateStatus& value) { SetServerCertificateStatus(value); return *this;}

    /**
     * <p>The status of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateStatus(ServerCertificateStatus&& value) { SetServerCertificateStatus(std::move(value)); return *this;}


    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateStatusDetail() const{ return m_serverCertificateStatusDetail; }

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline bool ServerCertificateStatusDetailHasBeenSet() const { return m_serverCertificateStatusDetailHasBeenSet; }

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline void SetServerCertificateStatusDetail(const Aws::String& value) { m_serverCertificateStatusDetailHasBeenSet = true; m_serverCertificateStatusDetail = value; }

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline void SetServerCertificateStatusDetail(Aws::String&& value) { m_serverCertificateStatusDetailHasBeenSet = true; m_serverCertificateStatusDetail = std::move(value); }

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline void SetServerCertificateStatusDetail(const char* value) { m_serverCertificateStatusDetailHasBeenSet = true; m_serverCertificateStatusDetail.assign(value); }

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateStatusDetail(const Aws::String& value) { SetServerCertificateStatusDetail(value); return *this;}

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateStatusDetail(Aws::String&& value) { SetServerCertificateStatusDetail(std::move(value)); return *this;}

    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline ServerCertificateSummary& WithServerCertificateStatusDetail(const char* value) { SetServerCertificateStatusDetail(value); return *this;}

  private:

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    ServerCertificateStatus m_serverCertificateStatus;
    bool m_serverCertificateStatusHasBeenSet = false;

    Aws::String m_serverCertificateStatusDetail;
    bool m_serverCertificateStatusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
