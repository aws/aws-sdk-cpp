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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a get blob operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API GetBlobResult
  {
  public:
    GetBlobResult();
    GetBlobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBlobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }

    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_content = value; }

    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_content = std::move(value); }

    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline GetBlobResult& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline GetBlobResult& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_content;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
