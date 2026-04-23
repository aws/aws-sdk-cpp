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
   * <p>Describes the properties of an environment tier</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentTier">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API EnvironmentTier
  {
  public:
    EnvironmentTier();
    EnvironmentTier(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnvironmentTier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline EnvironmentTier& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline EnvironmentTier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline EnvironmentTier& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> <note>
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> </note>
     */
    inline EnvironmentTier& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
