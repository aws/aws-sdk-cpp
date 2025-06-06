﻿/**
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
    AWS_KEYSPACES_API CreateTypeResult() = default;
    AWS_KEYSPACES_API CreateTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API CreateTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of the keyspace that contains the new type in the
     * format of an Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetKeyspaceArn() const { return m_keyspaceArn; }
    template<typename KeyspaceArnT = Aws::String>
    void SetKeyspaceArn(KeyspaceArnT&& value) { m_keyspaceArnHasBeenSet = true; m_keyspaceArn = std::forward<KeyspaceArnT>(value); }
    template<typename KeyspaceArnT = Aws::String>
    CreateTypeResult& WithKeyspaceArn(KeyspaceArnT&& value) { SetKeyspaceArn(std::forward<KeyspaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The formatted name of the user-defined type that was created. Note that
     * Amazon Keyspaces requires the formatted name of the type for other operations,
     * for example <code>GetType</code>. </p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    CreateTypeResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceArn;
    bool m_keyspaceArnHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
