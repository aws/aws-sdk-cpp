/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/signer/model/SigningStatus.h>
#include <aws/signer/model/SignedObject.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace signer
{
namespace Model
{
  class AWS_SIGNER_API DescribeSigningJobResult
  {
  public:
    DescribeSigningJobResult();
    DescribeSigningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSigningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline DescribeSigningJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline DescribeSigningJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline DescribeSigningJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline void SetSource(const Source& value) { m_source = value; }

    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline void SetSource(Source&& value) { m_source = std::move(value); }

    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline DescribeSigningJobResult& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline DescribeSigningJobResult& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterial = value; }

    /**
     * <p>Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterial = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline DescribeSigningJobResult& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline DescribeSigningJobResult& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformId = value; }

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformId = std::move(value); }

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformId.assign(value); }

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline DescribeSigningJobResult& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline DescribeSigningJobResult& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline DescribeSigningJobResult& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileName = value; }

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileName = std::move(value); }

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline void SetProfileName(const char* value) { m_profileName.assign(value); }

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline DescribeSigningJobResult& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline DescribeSigningJobResult& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline DescribeSigningJobResult& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const{ return m_overrides; }

    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline void SetOverrides(const SigningPlatformOverrides& value) { m_overrides = value; }

    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline void SetOverrides(SigningPlatformOverrides&& value) { m_overrides = std::move(value); }

    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline DescribeSigningJobResult& WithOverrides(const SigningPlatformOverrides& value) { SetOverrides(value); return *this;}

    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline DescribeSigningJobResult& WithOverrides(SigningPlatformOverrides&& value) { SetOverrides(std::move(value)); return *this;}


    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParameters = value; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParameters = std::move(value); }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParameters.emplace(key, value); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline DescribeSigningJobResult& AddSigningParameters(const char* key, const char* value) { m_signingParameters.emplace(key, value); return *this; }


    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline DescribeSigningJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline DescribeSigningJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAt = value; }

    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAt = std::move(value); }

    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline DescribeSigningJobResult& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline DescribeSigningJobResult& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline const Aws::String& GetRequestedBy() const{ return m_requestedBy; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const Aws::String& value) { m_requestedBy = value; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(Aws::String&& value) { m_requestedBy = std::move(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const char* value) { m_requestedBy.assign(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline DescribeSigningJobResult& WithRequestedBy(const Aws::String& value) { SetRequestedBy(value); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline DescribeSigningJobResult& WithRequestedBy(Aws::String&& value) { SetRequestedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline DescribeSigningJobResult& WithRequestedBy(const char* value) { SetRequestedBy(value); return *this;}


    /**
     * <p>Status of the signing job.</p>
     */
    inline const SigningStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the signing job.</p>
     */
    inline void SetStatus(const SigningStatus& value) { m_status = value; }

    /**
     * <p>Status of the signing job.</p>
     */
    inline void SetStatus(SigningStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the signing job.</p>
     */
    inline DescribeSigningJobResult& WithStatus(const SigningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the signing job.</p>
     */
    inline DescribeSigningJobResult& WithStatus(SigningStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>String value that contains the status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline DescribeSigningJobResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline DescribeSigningJobResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>String value that contains the status reason.</p>
     */
    inline DescribeSigningJobResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline const SignedObject& GetSignedObject() const{ return m_signedObject; }

    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline void SetSignedObject(const SignedObject& value) { m_signedObject = value; }

    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline void SetSignedObject(SignedObject&& value) { m_signedObject = std::move(value); }

    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline DescribeSigningJobResult& WithSignedObject(const SignedObject& value) { SetSignedObject(value); return *this;}

    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline DescribeSigningJobResult& WithSignedObject(SignedObject&& value) { SetSignedObject(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    Source m_source;

    SigningMaterial m_signingMaterial;

    Aws::String m_platformId;

    Aws::String m_profileName;

    SigningPlatformOverrides m_overrides;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_completedAt;

    Aws::String m_requestedBy;

    SigningStatus m_status;

    Aws::String m_statusReason;

    SignedObject m_signedObject;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
