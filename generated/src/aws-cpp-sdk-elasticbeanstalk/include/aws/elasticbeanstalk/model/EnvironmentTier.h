/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EnvironmentTier
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentTier();
    AWS_ELASTICBEANSTALK_API EnvironmentTier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentTier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>WebServer</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>Worker</code> </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentTier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentTier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentTier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this environment tier.</p> <p>Valid values:</p> <ul> <li> <p>For
     * <i>Web server tier</i> – <code>Standard</code> </p> </li> <li> <p>For <i>Worker
     * tier</i> – <code>SQS/HTTP</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline EnvironmentTier& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline EnvironmentTier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline EnvironmentTier& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this environment tier. When you don't set a value to it,
     * Elastic Beanstalk uses the latest compatible worker tier version.</p> 
     * <p>This member is deprecated. Any specific version that you set may become out
     * of date. We recommend leaving it unspecified.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline EnvironmentTier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline EnvironmentTier& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline EnvironmentTier& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
