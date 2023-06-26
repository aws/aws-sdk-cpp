/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/EnvironmentStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace finspace
{
namespace Model
{
  class CreateKxEnvironmentResult
  {
  public:
    AWS_FINSPACE_API CreateKxEnvironmentResult();
    AWS_FINSPACE_API CreateKxEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateKxEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the kdb environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the kdb environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A description for the kdb environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline CreateKxEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArn = value; }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArn = std::move(value); }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArn.assign(value); }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline CreateKxEnvironmentResult& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateKxEnvironmentResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateKxEnvironmentResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateKxEnvironmentResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace.</p>
     */
    inline CreateKxEnvironmentResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace.</p>
     */
    inline CreateKxEnvironmentResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKxEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKxEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKxEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    EnvironmentStatus m_status;

    Aws::String m_environmentId;

    Aws::String m_description;

    Aws::String m_environmentArn;

    Aws::String m_kmsKeyId;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
