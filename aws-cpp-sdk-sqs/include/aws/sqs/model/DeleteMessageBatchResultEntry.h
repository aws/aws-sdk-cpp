﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Encloses the id an entry in <a>DeleteMessageBatch</a>.</p>
   */
  class AWS_SQS_API DeleteMessageBatchResultEntry
  {
  public:
    DeleteMessageBatchResultEntry();
    DeleteMessageBatchResultEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeleteMessageBatchResultEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline DeleteMessageBatchResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline DeleteMessageBatchResultEntry& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>Represents a successfully deleted message.</p>
     */
    inline DeleteMessageBatchResultEntry& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
