/**
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
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult() = default;
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API CreateDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    CreateDirectoryResult& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDirectoryResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root object node of the created directory.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    CreateDirectoryResult& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const { return m_appliedSchemaArn; }
    template<typename AppliedSchemaArnT = Aws::String>
    void SetAppliedSchemaArn(AppliedSchemaArnT&& value) { m_appliedSchemaArnHasBeenSet = true; m_appliedSchemaArn = std::forward<AppliedSchemaArnT>(value); }
    template<typename AppliedSchemaArnT = Aws::String>
    CreateDirectoryResult& WithAppliedSchemaArn(AppliedSchemaArnT&& value) { SetAppliedSchemaArn(std::forward<AppliedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_appliedSchemaArn;
    bool m_appliedSchemaArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
