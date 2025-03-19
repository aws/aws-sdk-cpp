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
  class ApplySchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ApplySchemaResult() = default;
    AWS_CLOUDDIRECTORY_API ApplySchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ApplySchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const { return m_appliedSchemaArn; }
    template<typename AppliedSchemaArnT = Aws::String>
    void SetAppliedSchemaArn(AppliedSchemaArnT&& value) { m_appliedSchemaArnHasBeenSet = true; m_appliedSchemaArn = std::forward<AppliedSchemaArnT>(value); }
    template<typename AppliedSchemaArnT = Aws::String>
    ApplySchemaResult& WithAppliedSchemaArn(AppliedSchemaArnT&& value) { SetAppliedSchemaArn(std::forward<AppliedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    ApplySchemaResult& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ApplySchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appliedSchemaArn;
    bool m_appliedSchemaArnHasBeenSet = false;

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
