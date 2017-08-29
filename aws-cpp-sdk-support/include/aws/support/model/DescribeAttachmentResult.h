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
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/Attachment.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The content and file name of the attachment returned by the
   * <a>DescribeAttachment</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachmentResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API DescribeAttachmentResult
  {
  public:
    DescribeAttachmentResult();
    DescribeAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attachment content and file name.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The attachment content and file name.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachment = value; }

    /**
     * <p>The attachment content and file name.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachment = std::move(value); }

    /**
     * <p>The attachment content and file name.</p>
     */
    inline DescribeAttachmentResult& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The attachment content and file name.</p>
     */
    inline DescribeAttachmentResult& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}

  private:

    Attachment m_attachment;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
