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
    AWS_COMPREHEND_API CreateEntityRecognizerResult();
    AWS_COMPREHEND_API CreateEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
