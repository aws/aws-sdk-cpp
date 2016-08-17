/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an AWS OpsWorks service error.</p>
   */
  class AWS_OPSWORKS_API ServiceError
  {
  public:
    ServiceError();
    ServiceError(const Aws::Utils::Json::JsonValue& jsonValue);
    ServiceError& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The error ID.</p>
     */
    inline const Aws::String& GetServiceErrorId() const{ return m_serviceErrorId; }

    /**
     * <p>The error ID.</p>
     */
    inline void SetServiceErrorId(const Aws::String& value) { m_serviceErrorIdHasBeenSet = true; m_serviceErrorId = value; }

    /**
     * <p>The error ID.</p>
     */
    inline void SetServiceErrorId(Aws::String&& value) { m_serviceErrorIdHasBeenSet = true; m_serviceErrorId = value; }

    /**
     * <p>The error ID.</p>
     */
    inline void SetServiceErrorId(const char* value) { m_serviceErrorIdHasBeenSet = true; m_serviceErrorId.assign(value); }

    /**
     * <p>The error ID.</p>
     */
    inline ServiceError& WithServiceErrorId(const Aws::String& value) { SetServiceErrorId(value); return *this;}

    /**
     * <p>The error ID.</p>
     */
    inline ServiceError& WithServiceErrorId(Aws::String&& value) { SetServiceErrorId(value); return *this;}

    /**
     * <p>The error ID.</p>
     */
    inline ServiceError& WithServiceErrorId(const char* value) { SetServiceErrorId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline ServiceError& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline ServiceError& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline ServiceError& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline ServiceError& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline ServiceError& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline ServiceError& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The error type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The error type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The error type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The error type.</p>
     */
    inline ServiceError& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline ServiceError& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline ServiceError& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that describes the error.</p>
     */
    inline ServiceError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline ServiceError& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline ServiceError& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>When the error occurred.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the error occurred.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the error occurred.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the error occurred.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>When the error occurred.</p>
     */
    inline ServiceError& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the error occurred.</p>
     */
    inline ServiceError& WithCreatedAt(Aws::String&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the error occurred.</p>
     */
    inline ServiceError& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}

  private:
    Aws::String m_serviceErrorId;
    bool m_serviceErrorIdHasBeenSet;
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
