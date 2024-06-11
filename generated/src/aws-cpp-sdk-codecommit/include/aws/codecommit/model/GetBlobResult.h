﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a get blob operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlobOutput">AWS
   * API Reference</a></p>
   */
  class GetBlobResult
  {
  public:
    AWS_CODECOMMIT_API GetBlobResult();
    AWS_CODECOMMIT_API GetBlobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetBlobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content of the blob, usually a file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_content = value; }
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_content = std::move(value); }
    inline GetBlobResult& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}
    inline GetBlobResult& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBlobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBlobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBlobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
