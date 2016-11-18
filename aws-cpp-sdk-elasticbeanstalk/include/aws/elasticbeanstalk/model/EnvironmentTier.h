/*
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes the properties of an environment tier</p>
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
     * <p>The name of this environment tier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this environment tier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this environment tier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this environment tier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this environment tier.</p>
     */
    inline EnvironmentTier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this environment tier.</p>
     */
    inline EnvironmentTier& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of this environment tier.</p>
     */
    inline EnvironmentTier& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The type of this environment tier.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of this environment tier.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this environment tier.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this environment tier.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of this environment tier.</p>
     */
    inline EnvironmentTier& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of this environment tier.</p>
     */
    inline EnvironmentTier& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of this environment tier.</p>
     */
    inline EnvironmentTier& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The version of this environment tier.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this environment tier.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this environment tier.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this environment tier.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this environment tier.</p>
     */
    inline EnvironmentTier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this environment tier.</p>
     */
    inline EnvironmentTier& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this environment tier.</p>
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
