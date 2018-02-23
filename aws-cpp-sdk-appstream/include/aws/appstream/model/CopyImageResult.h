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
  class AWS_APPSTREAM_API CopyImageResult
  {
  public:
    CopyImageResult();
    CopyImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CopyImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_destinationImageName;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
