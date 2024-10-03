/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that speciﬁes the client certificate conﬁguration for a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ClientCertificateConfig">AWS
   * API Reference</a></p>
   */
  class ClientCertificateConfig
  {
  public:
    AWS_IOT_API ClientCertificateConfig();
    AWS_IOT_API ClientCertificateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ClientCertificateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Lambda function that IoT invokes after mutual TLS
     * authentication during the connection.</p>
     */
    inline const Aws::String& GetClientCertificateCallbackArn() const{ return m_clientCertificateCallbackArn; }
    inline bool ClientCertificateCallbackArnHasBeenSet() const { return m_clientCertificateCallbackArnHasBeenSet; }
    inline void SetClientCertificateCallbackArn(const Aws::String& value) { m_clientCertificateCallbackArnHasBeenSet = true; m_clientCertificateCallbackArn = value; }
    inline void SetClientCertificateCallbackArn(Aws::String&& value) { m_clientCertificateCallbackArnHasBeenSet = true; m_clientCertificateCallbackArn = std::move(value); }
    inline void SetClientCertificateCallbackArn(const char* value) { m_clientCertificateCallbackArnHasBeenSet = true; m_clientCertificateCallbackArn.assign(value); }
    inline ClientCertificateConfig& WithClientCertificateCallbackArn(const Aws::String& value) { SetClientCertificateCallbackArn(value); return *this;}
    inline ClientCertificateConfig& WithClientCertificateCallbackArn(Aws::String&& value) { SetClientCertificateCallbackArn(std::move(value)); return *this;}
    inline ClientCertificateConfig& WithClientCertificateCallbackArn(const char* value) { SetClientCertificateCallbackArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clientCertificateCallbackArn;
    bool m_clientCertificateCallbackArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
