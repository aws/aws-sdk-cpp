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
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API DeleteCollectionResult
  {
  public:
    DeleteCollectionResult();
    DeleteCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline DeleteCollectionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    int m_statusCode;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
