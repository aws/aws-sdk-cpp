﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/greengrassv2/model/CloudComponentStatus.h>
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
namespace GreengrassV2
{
namespace Model
{
  class CreateComponentVersionResult
  {
  public:
    AWS_GREENGRASSV2_API CreateComponentVersionResult();
    AWS_GREENGRASSV2_API CreateComponentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API CreateComponentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateComponentVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateComponentVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateComponentVersionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline void SetComponentName(const Aws::String& value) { m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentName.assign(value); }
    inline CreateComponentVersionResult& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline CreateComponentVersionResult& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline CreateComponentVersionResult& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersion = value; }
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersion = std::move(value); }
    inline void SetComponentVersion(const char* value) { m_componentVersion.assign(value); }
    inline CreateComponentVersionResult& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}
    inline CreateComponentVersionResult& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}
    inline CreateComponentVersionResult& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }
    inline CreateComponentVersionResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline CreateComponentVersionResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline const CloudComponentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CloudComponentStatus& value) { m_status = value; }
    inline void SetStatus(CloudComponentStatus&& value) { m_status = std::move(value); }
    inline CreateComponentVersionResult& WithStatus(const CloudComponentStatus& value) { SetStatus(value); return *this;}
    inline CreateComponentVersionResult& WithStatus(CloudComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateComponentVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateComponentVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateComponentVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_componentName;

    Aws::String m_componentVersion;

    Aws::Utils::DateTime m_creationTimestamp;

    CloudComponentStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
