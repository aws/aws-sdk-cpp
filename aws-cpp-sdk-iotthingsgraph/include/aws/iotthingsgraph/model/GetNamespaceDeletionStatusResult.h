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
#include <aws/iotthingsgraph/model/NamespaceDeletionStatus.h>
#include <aws/iotthingsgraph/model/NamespaceDeletionStatusErrorCodes.h>
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
  class AWS_IOTTHINGSGRAPH_API GetNamespaceDeletionStatusResult
  {
  public:
    GetNamespaceDeletionStatusResult();
    GetNamespaceDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNamespaceDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArn = value; }

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArn = std::move(value); }

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArn.assign(value); }

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceName = value; }

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace that is being deleted.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The status of the deletion request.</p>
     */
    inline const NamespaceDeletionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deletion request.</p>
     */
    inline void SetStatus(const NamespaceDeletionStatus& value) { m_status = value; }

    /**
     * <p>The status of the deletion request.</p>
     */
    inline void SetStatus(NamespaceDeletionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deletion request.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithStatus(const NamespaceDeletionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deletion request.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithStatus(NamespaceDeletionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline const NamespaceDeletionStatusErrorCodes& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline void SetErrorCode(const NamespaceDeletionStatusErrorCodes& value) { m_errorCode = value; }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline void SetErrorCode(NamespaceDeletionStatusErrorCodes&& value) { m_errorCode = std::move(value); }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithErrorCode(const NamespaceDeletionStatusErrorCodes& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithErrorCode(NamespaceDeletionStatusErrorCodes&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error code returned by the namespace deletion task.</p>
     */
    inline GetNamespaceDeletionStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_namespaceArn;

    Aws::String m_namespaceName;

    NamespaceDeletionStatus m_status;

    NamespaceDeletionStatusErrorCodes m_errorCode;

    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
