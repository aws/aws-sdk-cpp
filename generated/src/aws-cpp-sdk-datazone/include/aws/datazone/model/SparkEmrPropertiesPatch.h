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
   * <p>The Spark EMR properties patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkEmrPropertiesPatch">AWS
   * API Reference</a></p>
   */
  class SparkEmrPropertiesPatch
  {
  public:
    AWS_DATAZONE_API SparkEmrPropertiesPatch();
    AWS_DATAZONE_API SparkEmrPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkEmrPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute ARN in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    inline void SetComputeArn(const Aws::String& value) { m_computeArnHasBeenSet = true; m_computeArn = value; }
    inline void SetComputeArn(Aws::String&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::move(value); }
    inline void SetComputeArn(const char* value) { m_computeArnHasBeenSet = true; m_computeArn.assign(value); }
    inline SparkEmrPropertiesPatch& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}
    inline SparkEmrPropertiesPatch& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline SparkEmrPropertiesPatch& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline SparkEmrPropertiesPatch& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java virtual evn in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const{ return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    inline void SetJavaVirtualEnv(const Aws::String& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = value; }
    inline void SetJavaVirtualEnv(Aws::String&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::move(value); }
    inline void SetJavaVirtualEnv(const char* value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv.assign(value); }
    inline SparkEmrPropertiesPatch& WithJavaVirtualEnv(const Aws::String& value) { SetJavaVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesPatch& WithJavaVirtualEnv(Aws::String&& value) { SetJavaVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithJavaVirtualEnv(const char* value) { SetJavaVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log URI in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline SparkEmrPropertiesPatch& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline SparkEmrPropertiesPatch& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const{ return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    inline void SetPythonVirtualEnv(const Aws::String& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = value; }
    inline void SetPythonVirtualEnv(Aws::String&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::move(value); }
    inline void SetPythonVirtualEnv(const char* value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv.assign(value); }
    inline SparkEmrPropertiesPatch& WithPythonVirtualEnv(const Aws::String& value) { SetPythonVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesPatch& WithPythonVirtualEnv(Aws::String&& value) { SetPythonVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithPythonVirtualEnv(const char* value) { SetPythonVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime role in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetRuntimeRole() const{ return m_runtimeRole; }
    inline bool RuntimeRoleHasBeenSet() const { return m_runtimeRoleHasBeenSet; }
    inline void SetRuntimeRole(const Aws::String& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = value; }
    inline void SetRuntimeRole(Aws::String&& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = std::move(value); }
    inline void SetRuntimeRole(const char* value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole.assign(value); }
    inline SparkEmrPropertiesPatch& WithRuntimeRole(const Aws::String& value) { SetRuntimeRole(value); return *this;}
    inline SparkEmrPropertiesPatch& WithRuntimeRole(Aws::String&& value) { SetRuntimeRole(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithRuntimeRole(const char* value) { SetRuntimeRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trusted certificates S3 URI in the Spark EMR properties patch.</p>
     */
    inline const Aws::String& GetTrustedCertificatesS3Uri() const{ return m_trustedCertificatesS3Uri; }
    inline bool TrustedCertificatesS3UriHasBeenSet() const { return m_trustedCertificatesS3UriHasBeenSet; }
    inline void SetTrustedCertificatesS3Uri(const Aws::String& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = value; }
    inline void SetTrustedCertificatesS3Uri(Aws::String&& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = std::move(value); }
    inline void SetTrustedCertificatesS3Uri(const char* value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri.assign(value); }
    inline SparkEmrPropertiesPatch& WithTrustedCertificatesS3Uri(const Aws::String& value) { SetTrustedCertificatesS3Uri(value); return *this;}
    inline SparkEmrPropertiesPatch& WithTrustedCertificatesS3Uri(Aws::String&& value) { SetTrustedCertificatesS3Uri(std::move(value)); return *this;}
    inline SparkEmrPropertiesPatch& WithTrustedCertificatesS3Uri(const char* value) { SetTrustedCertificatesS3Uri(value); return *this;}
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
