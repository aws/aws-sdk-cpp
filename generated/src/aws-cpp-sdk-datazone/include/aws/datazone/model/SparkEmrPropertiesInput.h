/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Spark EMR properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkEmrPropertiesInput">AWS
   * API Reference</a></p>
   */
  class SparkEmrPropertiesInput
  {
  public:
    AWS_DATAZONE_API SparkEmrPropertiesInput();
    AWS_DATAZONE_API SparkEmrPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkEmrPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute ARN of Spark EMR.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    inline void SetComputeArn(const Aws::String& value) { m_computeArnHasBeenSet = true; m_computeArn = value; }
    inline void SetComputeArn(Aws::String&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::move(value); }
    inline void SetComputeArn(const char* value) { m_computeArnHasBeenSet = true; m_computeArn.assign(value); }
    inline SparkEmrPropertiesInput& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}
    inline SparkEmrPropertiesInput& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN of Spark EMR.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline SparkEmrPropertiesInput& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline SparkEmrPropertiesInput& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The java virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const{ return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    inline void SetJavaVirtualEnv(const Aws::String& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = value; }
    inline void SetJavaVirtualEnv(Aws::String&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::move(value); }
    inline void SetJavaVirtualEnv(const char* value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv.assign(value); }
    inline SparkEmrPropertiesInput& WithJavaVirtualEnv(const Aws::String& value) { SetJavaVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesInput& WithJavaVirtualEnv(Aws::String&& value) { SetJavaVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithJavaVirtualEnv(const char* value) { SetJavaVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log URI of the Spark EMR.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline SparkEmrPropertiesInput& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline SparkEmrPropertiesInput& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const{ return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    inline void SetPythonVirtualEnv(const Aws::String& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = value; }
    inline void SetPythonVirtualEnv(Aws::String&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::move(value); }
    inline void SetPythonVirtualEnv(const char* value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv.assign(value); }
    inline SparkEmrPropertiesInput& WithPythonVirtualEnv(const Aws::String& value) { SetPythonVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesInput& WithPythonVirtualEnv(Aws::String&& value) { SetPythonVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithPythonVirtualEnv(const char* value) { SetPythonVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime role of the Spark EMR.</p>
     */
    inline const Aws::String& GetRuntimeRole() const{ return m_runtimeRole; }
    inline bool RuntimeRoleHasBeenSet() const { return m_runtimeRoleHasBeenSet; }
    inline void SetRuntimeRole(const Aws::String& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = value; }
    inline void SetRuntimeRole(Aws::String&& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = std::move(value); }
    inline void SetRuntimeRole(const char* value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole.assign(value); }
    inline SparkEmrPropertiesInput& WithRuntimeRole(const Aws::String& value) { SetRuntimeRole(value); return *this;}
    inline SparkEmrPropertiesInput& WithRuntimeRole(Aws::String&& value) { SetRuntimeRole(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithRuntimeRole(const char* value) { SetRuntimeRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificates S3 URI of the Spark EMR.</p>
     */
    inline const Aws::String& GetTrustedCertificatesS3Uri() const{ return m_trustedCertificatesS3Uri; }
    inline bool TrustedCertificatesS3UriHasBeenSet() const { return m_trustedCertificatesS3UriHasBeenSet; }
    inline void SetTrustedCertificatesS3Uri(const Aws::String& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = value; }
    inline void SetTrustedCertificatesS3Uri(Aws::String&& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = std::move(value); }
    inline void SetTrustedCertificatesS3Uri(const char* value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri.assign(value); }
    inline SparkEmrPropertiesInput& WithTrustedCertificatesS3Uri(const Aws::String& value) { SetTrustedCertificatesS3Uri(value); return *this;}
    inline SparkEmrPropertiesInput& WithTrustedCertificatesS3Uri(Aws::String&& value) { SetTrustedCertificatesS3Uri(std::move(value)); return *this;}
    inline SparkEmrPropertiesInput& WithTrustedCertificatesS3Uri(const char* value) { SetTrustedCertificatesS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_computeArn;
    bool m_computeArnHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_javaVirtualEnv;
    bool m_javaVirtualEnvHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_pythonVirtualEnv;
    bool m_pythonVirtualEnvHasBeenSet = false;

    Aws::String m_runtimeRole;
    bool m_runtimeRoleHasBeenSet = false;

    Aws::String m_trustedCertificatesS3Uri;
    bool m_trustedCertificatesS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
