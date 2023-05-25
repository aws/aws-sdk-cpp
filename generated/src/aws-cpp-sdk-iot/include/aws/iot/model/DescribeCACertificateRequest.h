/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DescribeCACertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificateRequest">AWS
   * API Reference</a></p>
   */
  class DescribeCACertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeCACertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCACertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The CA certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline DescribeCACertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline DescribeCACertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline DescribeCACertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
