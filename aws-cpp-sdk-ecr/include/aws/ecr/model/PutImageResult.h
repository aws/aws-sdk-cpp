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
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/Image.h>
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
namespace ECR
{
namespace Model
{
  class AWS_ECR_API PutImageResult
  {
  public:
    PutImageResult();
    PutImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the image uploaded.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>Details of the image uploaded.</p>
     */
    inline void SetImage(const Image& value) { m_image = value; }

    /**
     * <p>Details of the image uploaded.</p>
     */
    inline void SetImage(Image&& value) { m_image = std::move(value); }

    /**
     * <p>Details of the image uploaded.</p>
     */
    inline PutImageResult& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>Details of the image uploaded.</p>
     */
    inline PutImageResult& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}

  private:

    Image m_image;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
