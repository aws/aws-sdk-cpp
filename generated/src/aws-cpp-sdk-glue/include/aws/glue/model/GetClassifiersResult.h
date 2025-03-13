/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Classifier.h>
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
namespace Glue
{
namespace Model
{
  class GetClassifiersResult
  {
  public:
    AWS_GLUE_API GetClassifiersResult() = default;
    AWS_GLUE_API GetClassifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetClassifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline const Aws::Vector<Classifier>& GetClassifiers() const { return m_classifiers; }
    template<typename ClassifiersT = Aws::Vector<Classifier>>
    void SetClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::forward<ClassifiersT>(value); }
    template<typename ClassifiersT = Aws::Vector<Classifier>>
    GetClassifiersResult& WithClassifiers(ClassifiersT&& value) { SetClassifiers(std::forward<ClassifiersT>(value)); return *this;}
    template<typename ClassifiersT = Classifier>
    GetClassifiersResult& AddClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers.emplace_back(std::forward<ClassifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetClassifiersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetClassifiersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Classifier> m_classifiers;
    bool m_classifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
