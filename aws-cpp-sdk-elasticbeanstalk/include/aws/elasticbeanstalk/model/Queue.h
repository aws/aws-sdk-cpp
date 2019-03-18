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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes a queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Queue">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API Queue
  {
  public:
    Queue();
    Queue(const Aws::Utils::Xml::XmlNode& xmlNode);
    Queue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL of the queue.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }

    /**
     * <p>The URL of the queue.</p>
     */
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }

    /**
     * <p>The URL of the queue.</p>
     */
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }

    /**
     * <p>The URL of the queue.</p>
     */
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }

    /**
     * <p>The URL of the queue.</p>
     */
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }

    /**
     * <p>The URL of the queue.</p>
     */
    inline Queue& WithURL(const Aws::String& value) { SetURL(value); return *this;}

    /**
     * <p>The URL of the queue.</p>
     */
    inline Queue& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}

    /**
     * <p>The URL of the queue.</p>
     */
    inline Queue& WithURL(const char* value) { SetURL(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
