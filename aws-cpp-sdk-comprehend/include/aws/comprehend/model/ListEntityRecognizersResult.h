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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntityRecognizerProperties.h>
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
  class AWS_COMPREHEND_API ListEntityRecognizersResult
  {
  public:
    ListEntityRecognizersResult();
    ListEntityRecognizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEntityRecognizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline const Aws::Vector<EntityRecognizerProperties>& GetEntityRecognizerPropertiesList() const{ return m_entityRecognizerPropertiesList; }

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline void SetEntityRecognizerPropertiesList(const Aws::Vector<EntityRecognizerProperties>& value) { m_entityRecognizerPropertiesList = value; }

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline void SetEntityRecognizerPropertiesList(Aws::Vector<EntityRecognizerProperties>&& value) { m_entityRecognizerPropertiesList = std::move(value); }

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline ListEntityRecognizersResult& WithEntityRecognizerPropertiesList(const Aws::Vector<EntityRecognizerProperties>& value) { SetEntityRecognizerPropertiesList(value); return *this;}

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline ListEntityRecognizersResult& WithEntityRecognizerPropertiesList(Aws::Vector<EntityRecognizerProperties>&& value) { SetEntityRecognizerPropertiesList(std::move(value)); return *this;}

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline ListEntityRecognizersResult& AddEntityRecognizerPropertiesList(const EntityRecognizerProperties& value) { m_entityRecognizerPropertiesList.push_back(value); return *this; }

    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline ListEntityRecognizersResult& AddEntityRecognizerPropertiesList(EntityRecognizerProperties&& value) { m_entityRecognizerPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntityRecognizerProperties> m_entityRecognizerPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
