﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more association documents on the instance. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceAssociation
  {
  public:
    InstanceAssociation();
    InstanceAssociation(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceAssociation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

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
    inline InstanceAssociation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceAssociation& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceAssociation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline InstanceAssociation& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline InstanceAssociation& WithContent(Aws::String&& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the association document for the instance(s).</p>
     */
    inline InstanceAssociation& WithContent(const char* value) { SetContent(value); return *this;}

  private:
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
