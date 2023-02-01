/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/Image.h>
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
namespace ECRPublic
{
namespace Model
{
  class PutImageResult
  {
  public:
    AWS_ECRPUBLIC_API PutImageResult();
    AWS_ECRPUBLIC_API PutImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API PutImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace ECRPublic
} // namespace Aws
