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
   * <p>A programming language supported by the platform.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformProgrammingLanguage">AWS
   * API Reference</a></p>
   */
  class PlatformProgrammingLanguage
  {
  public:
    AWS_ELASTICBEANSTALK_API PlatformProgrammingLanguage();
    AWS_ELASTICBEANSTALK_API PlatformProgrammingLanguage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformProgrammingLanguage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the programming language.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the programming language.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the programming language.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the programming language.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the programming language.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the programming language.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the programming language.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the programming language.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the programming language.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the programming language.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the programming language.</p>
     */
    inline PlatformProgrammingLanguage& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
