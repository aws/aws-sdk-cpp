/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlock.h>
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
namespace AppStream
{
namespace Model
{
  class CreateAppBlockResult
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockResult();
    AWS_APPSTREAM_API CreateAppBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateAppBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The app block.</p>
     */
    inline const AppBlock& GetAppBlock() const{ return m_appBlock; }

    /**
     * <p>The app block.</p>
     */
    inline void SetAppBlock(const AppBlock& value) { m_appBlock = value; }

    /**
     * <p>The app block.</p>
     */
    inline void SetAppBlock(AppBlock&& value) { m_appBlock = std::move(value); }

    /**
     * <p>The app block.</p>
     */
    inline CreateAppBlockResult& WithAppBlock(const AppBlock& value) { SetAppBlock(value); return *this;}

    /**
     * <p>The app block.</p>
     */
    inline CreateAppBlockResult& WithAppBlock(AppBlock&& value) { SetAppBlock(std::move(value)); return *this;}

  private:

    AppBlock m_appBlock;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
