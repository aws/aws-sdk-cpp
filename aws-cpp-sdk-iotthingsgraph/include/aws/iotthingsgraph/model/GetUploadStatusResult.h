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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/UploadStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API GetUploadStatusResult
  {
  public:
    GetUploadStatusResult();
    GetUploadStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUploadStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The ID of the upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p>The ID of the upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p>The ID of the upload.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p>The ID of the upload.</p>
     */
    inline GetUploadStatusResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The ID of the upload.</p>
     */
    inline GetUploadStatusResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the upload.</p>
     */
    inline GetUploadStatusResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The status of the upload. The initial status is <code>IN_PROGRESS</code>. The
     * response show all validation failures if the upload fails.</p>
     */
    inline const UploadStatus& GetUploadStatus() const{ return m_uploadStatus; }

    /**
     * <p>The status of the upload. The initial status is <code>IN_PROGRESS</code>. The
     * response show all validation failures if the upload fails.</p>
     */
    inline void SetUploadStatus(const UploadStatus& value) { m_uploadStatus = value; }

    /**
     * <p>The status of the upload. The initial status is <code>IN_PROGRESS</code>. The
     * response show all validation failures if the upload fails.</p>
     */
    inline void SetUploadStatus(UploadStatus&& value) { m_uploadStatus = std::move(value); }

    /**
     * <p>The status of the upload. The initial status is <code>IN_PROGRESS</code>. The
     * response show all validation failures if the upload fails.</p>
     */
    inline GetUploadStatusResult& WithUploadStatus(const UploadStatus& value) { SetUploadStatus(value); return *this;}

    /**
     * <p>The status of the upload. The initial status is <code>IN_PROGRESS</code>. The
     * response show all validation failures if the upload fails.</p>
     */
    inline GetUploadStatusResult& WithUploadStatus(UploadStatus&& value) { SetUploadStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the upload.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The ARN of the upload.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArn = value; }

    /**
     * <p>The ARN of the upload.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArn = std::move(value); }

    /**
     * <p>The ARN of the upload.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArn.assign(value); }

    /**
     * <p>The ARN of the upload.</p>
     */
    inline GetUploadStatusResult& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The ARN of the upload.</p>
     */
    inline GetUploadStatusResult& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the upload.</p>
     */
    inline GetUploadStatusResult& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceName = value; }

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceName = std::move(value); }

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceName.assign(value); }

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline GetUploadStatusResult& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline GetUploadStatusResult& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the upload's namespace.</p>
     */
    inline GetUploadStatusResult& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline long long GetNamespaceVersion() const{ return m_namespaceVersion; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline void SetNamespaceVersion(long long value) { m_namespaceVersion = value; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline GetUploadStatusResult& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}


    /**
     * <p>The reason for an upload failure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline void SetFailureReason(const Aws::Vector<Aws::String>& value) { m_failureReason = value; }

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline void SetFailureReason(Aws::Vector<Aws::String>&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline GetUploadStatusResult& WithFailureReason(const Aws::Vector<Aws::String>& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline GetUploadStatusResult& WithFailureReason(Aws::Vector<Aws::String>&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline GetUploadStatusResult& AddFailureReason(const Aws::String& value) { m_failureReason.push_back(value); return *this; }

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline GetUploadStatusResult& AddFailureReason(Aws::String&& value) { m_failureReason.push_back(std::move(value)); return *this; }

    /**
     * <p>The reason for an upload failure.</p>
     */
    inline GetUploadStatusResult& AddFailureReason(const char* value) { m_failureReason.push_back(value); return *this; }


    /**
     * <p>The date at which the upload was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date at which the upload was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date at which the upload was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date at which the upload was created.</p>
     */
    inline GetUploadStatusResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date at which the upload was created.</p>
     */
    inline GetUploadStatusResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_uploadId;

    UploadStatus m_uploadStatus;

    Aws::String m_namespaceArn;

    Aws::String m_namespaceName;

    long long m_namespaceVersion;

    Aws::Vector<Aws::String> m_failureReason;

    Aws::Utils::DateTime m_createdDate;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
