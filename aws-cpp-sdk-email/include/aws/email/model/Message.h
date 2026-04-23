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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/Content.h>
#include <aws/email/model/Body.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>Represents the message to be sent, composed of a subject and a
   * body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Message">AWS API
   * Reference</a></p>
   */
  class AWS_SES_API Message
  {
  public:
    Message();
    Message(const Aws::Utils::Xml::XmlNode& xmlNode);
    Message& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline const Content& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline void SetSubject(const Content& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline void SetSubject(Content&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline Message& WithSubject(const Content& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject of the message: A short summary of the content, which will appear
     * in the recipient's inbox.</p>
     */
    inline Message& WithSubject(Content&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * <p>The message body.</p>
     */
    inline const Body& GetBody() const{ return m_body; }

    /**
     * <p>The message body.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The message body.</p>
     */
    inline void SetBody(const Body& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The message body.</p>
     */
    inline void SetBody(Body&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The message body.</p>
     */
    inline Message& WithBody(const Body& value) { SetBody(value); return *this;}

    /**
     * <p>The message body.</p>
     */
    inline Message& WithBody(Body&& value) { SetBody(std::move(value)); return *this;}

  private:

    Content m_subject;
    bool m_subjectHasBeenSet;

    Body m_body;
    bool m_bodyHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
