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
#include <aws/comprehend/model/KeyPhrasesDetectionJobProperties.h>
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
  class AWS_COMPREHEND_API DescribeKeyPhrasesDetectionJobResult
  {
  public:
    DescribeKeyPhrasesDetectionJobResult();
    DescribeKeyPhrasesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeKeyPhrasesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    KeyPhrasesDetectionJobProperties m_keyPhrasesDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
