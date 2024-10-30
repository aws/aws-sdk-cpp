/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class CreateTypeResult
  {
  public:
    AWS_KEYSPACES_API CreateTypeResult();
    AWS_KEYSPACES_API CreateTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API CreateTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of the keyspace that contains the new type in the
     * format of an Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetKeyspaceArn() const{ return m_keyspaceArn; }
    inline void SetKeyspaceArn(const Aws::String& value) { m_keyspaceArn = value; }
    inline void SetKeyspaceArn(Aws::String&& value) { m_keyspaceArn = std::move(value); }
    inline void SetKeyspaceArn(const char* value) { m_keyspaceArn.assign(value); }
    inline CreateTypeResult& WithKeyspaceArn(const Aws::String& value) { SetKeyspaceArn(value); return *this;}
    inline CreateTypeResult& WithKeyspaceArn(Aws::String&& value) { SetKeyspaceArn(std::move(value)); return *this;}
    inline CreateTypeResult& WithKeyspaceArn(const char* value) { SetKeyspaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The formatted name of the user-defined type that was created. Note that
     * Amazon Keyspaces requires the formatted name of the type for other operations,
     * for example <code>GetType</code>. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }
    inline CreateTypeResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline CreateTypeResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline CreateTypeResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceArn;

    Aws::String m_typeName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
