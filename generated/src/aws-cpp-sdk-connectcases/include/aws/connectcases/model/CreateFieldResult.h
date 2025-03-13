/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateFieldResult
  {
  public:
    AWS_CONNECTCASES_API CreateFieldResult() = default;
    AWS_CONNECTCASES_API CreateFieldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateFieldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the field.</p>
     */
    inline const Aws::String& GetFieldArn() const { return m_fieldArn; }
    template<typename FieldArnT = Aws::String>
    void SetFieldArn(FieldArnT&& value) { m_fieldArnHasBeenSet = true; m_fieldArn = std::forward<FieldArnT>(value); }
    template<typename FieldArnT = Aws::String>
    CreateFieldResult& WithFieldArn(FieldArnT&& value) { SetFieldArn(std::forward<FieldArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    CreateFieldResult& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFieldResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldArn;
    bool m_fieldArnHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
