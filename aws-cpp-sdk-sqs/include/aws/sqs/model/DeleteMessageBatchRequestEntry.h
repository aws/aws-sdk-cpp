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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{

  /**
   * <p>Encloses a receipt handle and an identifier for it.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatchRequestEntry">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API DeleteMessageBatchRequestEntry
  {
  public:
    DeleteMessageBatchRequestEntry();
    DeleteMessageBatchRequestEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeleteMessageBatchRequestEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline DeleteMessageBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline DeleteMessageBatchRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier for this particular receipt handle. This is used to communicate
     * the result.</p> <note> <p>The <code>Id</code>s of a batch request need to be
     * unique within a request</p> </note>
     */
    inline DeleteMessageBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A receipt handle.</p>
     */
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    /**
     * <p>A receipt handle.</p>
     */
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }

    /**
     * <p>A receipt handle.</p>
     */
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>A receipt handle.</p>
     */
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }

    /**
     * <p>A receipt handle.</p>
     */
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    /**
     * <p>A receipt handle.</p>
     */
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>A receipt handle.</p>
     */
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}

    /**
     * <p>A receipt handle.</p>
     */
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
