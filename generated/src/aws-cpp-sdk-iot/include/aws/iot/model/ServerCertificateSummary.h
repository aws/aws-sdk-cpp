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
    AWS_IOT_API ServerCertificateSummary() = default;
    AWS_IOT_API ServerCertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ServerCertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const { return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    template<typename ServerCertificateArnT = Aws::String>
    void SetServerCertificateArn(ServerCertificateArnT&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::forward<ServerCertificateArnT>(value); }
    template<typename ServerCertificateArnT = Aws::String>
    ServerCertificateSummary& WithServerCertificateArn(ServerCertificateArnT&& value) { SetServerCertificateArn(std::forward<ServerCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the server certificate.</p>
     */
    inline ServerCertificateStatus GetServerCertificateStatus() const { return m_serverCertificateStatus; }
    inline bool ServerCertificateStatusHasBeenSet() const { return m_serverCertificateStatusHasBeenSet; }
    inline void SetServerCertificateStatus(ServerCertificateStatus value) { m_serverCertificateStatusHasBeenSet = true; m_serverCertificateStatus = value; }
    inline ServerCertificateSummary& WithServerCertificateStatus(ServerCertificateStatus value) { SetServerCertificateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that explain the status of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateStatusDetail() const { return m_serverCertificateStatusDetail; }
    inline bool ServerCertificateStatusDetailHasBeenSet() const { return m_serverCertificateStatusDetailHasBeenSet; }
    template<typename ServerCertificateStatusDetailT = Aws::String>
    void SetServerCertificateStatusDetail(ServerCertificateStatusDetailT&& value) { m_serverCertificateStatusDetailHasBeenSet = true; m_serverCertificateStatusDetail = std::forward<ServerCertificateStatusDetailT>(value); }
    template<typename ServerCertificateStatusDetailT = Aws::String>
    ServerCertificateSummary& WithServerCertificateStatusDetail(ServerCertificateStatusDetailT&& value) { SetServerCertificateStatusDetail(std::forward<ServerCertificateStatusDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    ServerCertificateStatus m_serverCertificateStatus{ServerCertificateStatus::NOT_SET};
    bool m_serverCertificateStatusHasBeenSet = false;

    Aws::String m_serverCertificateStatusDetail;
    bool m_serverCertificateStatusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
