/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/Image.h>
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
namespace ECR
{
namespace Model
{
  class PutImageResult
  {
  public:
    AWS_ECR_API PutImageResult();
    AWS_ECR_API PutImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the image uploaded.</p>
     */
    inline const Image& GetImage() const{ return m_image; }
    inline void SetImage(const Image& value) { m_image = value; }
    inline void SetImage(Image&& value) { m_image = std::move(value); }
    inline PutImageResult& WithImage(const Image& value) { SetImage(value); return *this;}
    inline PutImageResult& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Image m_image;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
