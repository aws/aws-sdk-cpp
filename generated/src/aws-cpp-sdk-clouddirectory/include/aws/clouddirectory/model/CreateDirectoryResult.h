﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudDirectory
{
namespace Model
{
  class CreateDirectoryResult
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult();
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }
    inline CreateDirectoryResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline CreateDirectoryResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline CreateDirectoryResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateDirectoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDirectoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDirectoryResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root object node of the created directory.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = std::move(value); }
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }
    inline CreateDirectoryResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}
    inline CreateDirectoryResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}
    inline CreateDirectoryResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const{ return m_appliedSchemaArn; }
    inline void SetAppliedSchemaArn(const Aws::String& value) { m_appliedSchemaArn = value; }
    inline void SetAppliedSchemaArn(Aws::String&& value) { m_appliedSchemaArn = std::move(value); }
    inline void SetAppliedSchemaArn(const char* value) { m_appliedSchemaArn.assign(value); }
    inline CreateDirectoryResult& WithAppliedSchemaArn(const Aws::String& value) { SetAppliedSchemaArn(value); return *this;}
    inline CreateDirectoryResult& WithAppliedSchemaArn(Aws::String&& value) { SetAppliedSchemaArn(std::move(value)); return *this;}
    inline CreateDirectoryResult& WithAppliedSchemaArn(const char* value) { SetAppliedSchemaArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;

    Aws::String m_name;

    Aws::String m_objectIdentifier;

    Aws::String m_appliedSchemaArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
