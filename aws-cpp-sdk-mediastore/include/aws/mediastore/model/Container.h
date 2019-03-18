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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediastore/model/ContainerStatus.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>This section describes operations that you can perform on an AWS Elemental
   * MediaStore container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/Container">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIASTORE_API Container
  {
  public:
    Container();
    Container(Aws::Utils::Json::JsonView jsonValue);
    Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline Container& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline Container& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The DNS endpoint of the container. Use the endpoint to identify the specific
     * container when sending requests to the data plane. The service assigns this
     * value when the container is created. Once the value has been assigned, it does
     * not change.</p>
     */
    inline Container& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Unix timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Unix timestamp.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Unix timestamp.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Unix timestamp.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Unix timestamp.</p>
     */
    inline Container& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Unix timestamp.</p>
     */
    inline Container& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline Container& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline Container& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container. The ARN has the following
     * format:</p> <p>arn:aws:&lt;region&gt;:&lt;account that owns this
     * container&gt;:container/&lt;name of container&gt; </p> <p>For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     */
    inline Container& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline const ContainerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(const ContainerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(ContainerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline Container& WithStatus(const ContainerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of container creation or deletion. The status is one of the
     * following: <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.
     * While the service is creating the container, the status is
     * <code>CREATING</code>. When the endpoint is available, the status changes to
     * <code>ACTIVE</code>.</p>
     */
    inline Container& WithStatus(ContainerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The state of access logging on the container. This value is
     * <code>false</code> by default, indicating that AWS Elemental MediaStore does not
     * send access logs to Amazon CloudWatch Logs. When you enable access logging on
     * the container, MediaStore changes this value to <code>true</code>, indicating
     * that the service delivers access logs for objects stored in that container to
     * CloudWatch Logs.</p>
     */
    inline bool GetAccessLoggingEnabled() const{ return m_accessLoggingEnabled; }

    /**
     * <p>The state of access logging on the container. This value is
     * <code>false</code> by default, indicating that AWS Elemental MediaStore does not
     * send access logs to Amazon CloudWatch Logs. When you enable access logging on
     * the container, MediaStore changes this value to <code>true</code>, indicating
     * that the service delivers access logs for objects stored in that container to
     * CloudWatch Logs.</p>
     */
    inline bool AccessLoggingEnabledHasBeenSet() const { return m_accessLoggingEnabledHasBeenSet; }

    /**
     * <p>The state of access logging on the container. This value is
     * <code>false</code> by default, indicating that AWS Elemental MediaStore does not
     * send access logs to Amazon CloudWatch Logs. When you enable access logging on
     * the container, MediaStore changes this value to <code>true</code>, indicating
     * that the service delivers access logs for objects stored in that container to
     * CloudWatch Logs.</p>
     */
    inline void SetAccessLoggingEnabled(bool value) { m_accessLoggingEnabledHasBeenSet = true; m_accessLoggingEnabled = value; }

    /**
     * <p>The state of access logging on the container. This value is
     * <code>false</code> by default, indicating that AWS Elemental MediaStore does not
     * send access logs to Amazon CloudWatch Logs. When you enable access logging on
     * the container, MediaStore changes this value to <code>true</code>, indicating
     * that the service delivers access logs for objects stored in that container to
     * CloudWatch Logs.</p>
     */
    inline Container& WithAccessLoggingEnabled(bool value) { SetAccessLoggingEnabled(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ContainerStatus m_status;
    bool m_statusHasBeenSet;

    bool m_accessLoggingEnabled;
    bool m_accessLoggingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
