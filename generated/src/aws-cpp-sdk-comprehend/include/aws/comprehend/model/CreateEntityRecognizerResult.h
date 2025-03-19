/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{
  class CreateEntityRecognizerResult
  {
  public:
    AWS_COMPREHEND_API CreateEntityRecognizerResult() = default;
    AWS_COMPREHEND_API CreateEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const { return m_entityRecognizerArn; }
    template<typename EntityRecognizerArnT = Aws::String>
    void SetEntityRecognizerArn(EntityRecognizerArnT&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::forward<EntityRecognizerArnT>(value); }
    template<typename EntityRecognizerArnT = Aws::String>
    CreateEntityRecognizerResult& WithEntityRecognizerArn(EntityRecognizerArnT&& value) { SetEntityRecognizerArn(std::forward<EntityRecognizerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEntityRecognizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
