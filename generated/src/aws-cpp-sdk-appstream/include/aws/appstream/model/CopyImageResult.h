/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{
  class CopyImageResult
  {
  public:
    AWS_APPSTREAM_API CopyImageResult();
    AWS_APPSTREAM_API CopyImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CopyImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the destination image.</p>
     */
    inline const Aws::String& GetDestinationImageName() const{ return m_destinationImageName; }

    /**
     * <p>The name of the destination image.</p>
     */
    inline void SetDestinationImageName(const Aws::String& value) { m_destinationImageName = value; }

    /**
     * <p>The name of the destination image.</p>
     */
    inline void SetDestinationImageName(Aws::String&& value) { m_destinationImageName = std::move(value); }

    /**
     * <p>The name of the destination image.</p>
     */
    inline void SetDestinationImageName(const char* value) { m_destinationImageName.assign(value); }

    /**
     * <p>The name of the destination image.</p>
     */
    inline CopyImageResult& WithDestinationImageName(const Aws::String& value) { SetDestinationImageName(value); return *this;}

    /**
     * <p>The name of the destination image.</p>
     */
    inline CopyImageResult& WithDestinationImageName(Aws::String&& value) { SetDestinationImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination image.</p>
     */
    inline CopyImageResult& WithDestinationImageName(const char* value) { SetDestinationImageName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_destinationImageName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
