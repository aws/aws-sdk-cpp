/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/KeyPhrasesDetectionJobProperties.h>
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
  class DescribeKeyPhrasesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult();
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline const KeyPhrasesDetectionJobProperties& GetKeyPhrasesDetectionJobProperties() const{ return m_keyPhrasesDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline void SetKeyPhrasesDetectionJobProperties(const KeyPhrasesDetectionJobProperties& value) { m_keyPhrasesDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline void SetKeyPhrasesDetectionJobProperties(KeyPhrasesDetectionJobProperties&& value) { m_keyPhrasesDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline DescribeKeyPhrasesDetectionJobResult& WithKeyPhrasesDetectionJobProperties(const KeyPhrasesDetectionJobProperties& value) { SetKeyPhrasesDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a key phrases
     * detection job. </p>
     */
    inline DescribeKeyPhrasesDetectionJobResult& WithKeyPhrasesDetectionJobProperties(KeyPhrasesDetectionJobProperties&& value) { SetKeyPhrasesDetectionJobProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKeyPhrasesDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKeyPhrasesDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKeyPhrasesDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KeyPhrasesDetectionJobProperties m_keyPhrasesDetectionJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
