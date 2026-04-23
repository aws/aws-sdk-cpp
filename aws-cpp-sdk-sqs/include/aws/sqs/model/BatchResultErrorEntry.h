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
   * <p>Gives a detailed description of the result of an action on each entry in the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/BatchResultErrorEntry">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API BatchResultErrorEntry
  {
  public:
    BatchResultErrorEntry();
    BatchResultErrorEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    BatchResultErrorEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline BatchResultErrorEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline BatchResultErrorEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline BatchResultErrorEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether the error happened due to the producer.</p>
     */
    inline bool GetSenderFault() const{ return m_senderFault; }

    /**
     * <p>Specifies whether the error happened due to the producer.</p>
     */
    inline bool SenderFaultHasBeenSet() const { return m_senderFaultHasBeenSet; }

    /**
     * <p>Specifies whether the error happened due to the producer.</p>
     */
    inline void SetSenderFault(bool value) { m_senderFaultHasBeenSet = true; m_senderFault = value; }

    /**
     * <p>Specifies whether the error happened due to the producer.</p>
     */
    inline BatchResultErrorEntry& WithSenderFault(bool value) { SetSenderFault(value); return *this;}


    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>An error code representing why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message explaining why the action failed on this entry.</p>
     */
    inline BatchResultErrorEntry& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_senderFault;
    bool m_senderFaultHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
