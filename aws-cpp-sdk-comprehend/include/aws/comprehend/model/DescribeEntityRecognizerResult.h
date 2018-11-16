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
  class AWS_COMPREHEND_API DescribeEntityRecognizerResult
  {
  public:
    DescribeEntityRecognizerResult();
    DescribeEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline const EntityRecognizerProperties& GetEntityRecognizerProperties() const{ return m_entityRecognizerProperties; }

    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline void SetEntityRecognizerProperties(const EntityRecognizerProperties& value) { m_entityRecognizerProperties = value; }

    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline void SetEntityRecognizerProperties(EntityRecognizerProperties&& value) { m_entityRecognizerProperties = std::move(value); }

    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline DescribeEntityRecognizerResult& WithEntityRecognizerProperties(const EntityRecognizerProperties& value) { SetEntityRecognizerProperties(value); return *this;}

    /**
     * <p>Describes information associated with an entity recognizer.</p>
     */
    inline DescribeEntityRecognizerResult& WithEntityRecognizerProperties(EntityRecognizerProperties&& value) { SetEntityRecognizerProperties(std::move(value)); return *this;}

  private:

    EntityRecognizerProperties m_entityRecognizerProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
