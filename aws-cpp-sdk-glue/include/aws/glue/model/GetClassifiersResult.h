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
  class AWS_GLUE_API GetClassifiersResult
  {
  public:
    GetClassifiersResult();
    GetClassifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetClassifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline const Aws::Vector<Classifier>& GetClassifiers() const{ return m_classifiers; }

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline void SetClassifiers(const Aws::Vector<Classifier>& value) { m_classifiers = value; }

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline void SetClassifiers(Aws::Vector<Classifier>&& value) { m_classifiers = std::move(value); }

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline GetClassifiersResult& WithClassifiers(const Aws::Vector<Classifier>& value) { SetClassifiers(value); return *this;}

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline GetClassifiersResult& WithClassifiers(Aws::Vector<Classifier>&& value) { SetClassifiers(std::move(value)); return *this;}

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline GetClassifiersResult& AddClassifiers(const Classifier& value) { m_classifiers.push_back(value); return *this; }

    /**
     * <p>The requested list of classifier objects.</p>
     */
    inline GetClassifiersResult& AddClassifiers(Classifier&& value) { m_classifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token.</p>
     */
    inline GetClassifiersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token.</p>
     */
    inline GetClassifiersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token.</p>
     */
    inline GetClassifiersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Classifier> m_classifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
