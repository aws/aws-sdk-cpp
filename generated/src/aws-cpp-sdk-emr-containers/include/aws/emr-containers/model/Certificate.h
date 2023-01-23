/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
   * <p>The entity representing certificate data generated for managed
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_EMRCONTAINERS_API Certificate();
    AWS_EMRCONTAINERS_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline const Aws::String& GetCertificateData() const{ return m_certificateData; }

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline bool CertificateDataHasBeenSet() const { return m_certificateDataHasBeenSet; }

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline void SetCertificateData(const Aws::String& value) { m_certificateDataHasBeenSet = true; m_certificateData = value; }

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline void SetCertificateData(Aws::String&& value) { m_certificateDataHasBeenSet = true; m_certificateData = std::move(value); }

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline void SetCertificateData(const char* value) { m_certificateDataHasBeenSet = true; m_certificateData.assign(value); }

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateData(const Aws::String& value) { SetCertificateData(value); return *this;}

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateData(Aws::String&& value) { SetCertificateData(std::move(value)); return *this;}

    /**
     * <p>The base64 encoded PEM certificate data generated for managed endpoint.</p>
     */
    inline Certificate& WithCertificateData(const char* value) { SetCertificateData(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateData;
    bool m_certificateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
