/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntityRecognizerProperties.h>
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
  class DescribeEntityRecognizerResult
  {
  public:
    AWS_COMPREHEND_API DescribeEntityRecognizerResult();
    AWS_COMPREHEND_API DescribeEntityRecognizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEntityRecognizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEntityRecognizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEntityRecognizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEntityRecognizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EntityRecognizerProperties m_entityRecognizerProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
