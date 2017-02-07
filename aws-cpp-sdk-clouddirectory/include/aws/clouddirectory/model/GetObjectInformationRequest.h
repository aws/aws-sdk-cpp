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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API GetObjectInformationRequest : public CloudDirectoryRequest
  {
  public:
    GetObjectInformationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline GetObjectInformationRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline GetObjectInformationRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory being retrieved.</p>
     */
    inline GetObjectInformationRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>A reference to the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>A reference to the object.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object.</p>
     */
    inline GetObjectInformationRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>A reference to the object.</p>
     */
    inline GetObjectInformationRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(value); return *this;}

    /**
     * <p>The consistency level at which to retrieve the object information.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>The consistency level at which to retrieve the object information.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>The consistency level at which to retrieve the object information.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>The consistency level at which to retrieve the object information.</p>
     */
    inline GetObjectInformationRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>The consistency level at which to retrieve the object information.</p>
     */
    inline GetObjectInformationRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;
    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
