/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glue/Glue_EXPORTS.h>
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
  class AWS_GLUE_API GetClassifierResult
  {
  public:
    GetClassifierResult();
    GetClassifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetClassifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested classifier.</p>
     */
    inline const Classifier& GetClassifier() const{ return m_classifier; }

    /**
     * <p>The requested classifier.</p>
     */
    inline void SetClassifier(const Classifier& value) { m_classifier = value; }

    /**
     * <p>The requested classifier.</p>
     */
    inline void SetClassifier(Classifier&& value) { m_classifier = std::move(value); }

    /**
     * <p>The requested classifier.</p>
     */
    inline GetClassifierResult& WithClassifier(const Classifier& value) { SetClassifier(value); return *this;}

    /**
     * <p>The requested classifier.</p>
     */
    inline GetClassifierResult& WithClassifier(Classifier&& value) { SetClassifier(std::move(value)); return *this;}

  private:

    Classifier m_classifier;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
