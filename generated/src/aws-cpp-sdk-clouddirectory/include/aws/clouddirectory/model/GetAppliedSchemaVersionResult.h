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
  class GetAppliedSchemaVersionResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult() = default;
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const { return m_appliedSchemaArn; }
    template<typename AppliedSchemaArnT = Aws::String>
    void SetAppliedSchemaArn(AppliedSchemaArnT&& value) { m_appliedSchemaArnHasBeenSet = true; m_appliedSchemaArn = std::forward<AppliedSchemaArnT>(value); }
    template<typename AppliedSchemaArnT = Aws::String>
    GetAppliedSchemaVersionResult& WithAppliedSchemaArn(AppliedSchemaArnT&& value) { SetAppliedSchemaArn(std::forward<AppliedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppliedSchemaVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appliedSchemaArn;
    bool m_appliedSchemaArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
