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
  class AWS_COMPREHEND_API CreateEntityRecognizerResult
  {
  public:
    CreateEntityRecognizerResult();
    CreateEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const{ return m_entityRecognizerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline void SetEntityRecognizerArn(const Aws::String& value) { m_entityRecognizerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline void SetEntityRecognizerArn(Aws::String&& value) { m_entityRecognizerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline void SetEntityRecognizerArn(const char* value) { m_entityRecognizerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline CreateEntityRecognizerResult& WithEntityRecognizerArn(const Aws::String& value) { SetEntityRecognizerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline CreateEntityRecognizerResult& WithEntityRecognizerArn(Aws::String&& value) { SetEntityRecognizerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline CreateEntityRecognizerResult& WithEntityRecognizerArn(const char* value) { SetEntityRecognizerArn(value); return *this;}

  private:

    Aws::String m_entityRecognizerArn;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
