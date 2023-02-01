/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  private:

    EntityRecognizerProperties m_entityRecognizerProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
