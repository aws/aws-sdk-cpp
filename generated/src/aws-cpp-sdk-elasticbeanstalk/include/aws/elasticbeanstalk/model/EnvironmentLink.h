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
   * <p>A link to another environment, defined in the environment's manifest. Links
   * provide connection information in system properties that can be used to connect
   * to another environment in the same group. See <a
   * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
   * Manifest (env.yaml)</a> for details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentLink">AWS
   * API Reference</a></p>
   */
  class EnvironmentLink
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentLink();
    AWS_ELASTICBEANSTALK_API EnvironmentLink(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentLink& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of the link.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline EnvironmentLink& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline EnvironmentLink& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline EnvironmentLink& WithLinkName(const char* value) { SetLinkName(value); return *this;}


    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline EnvironmentLink& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline EnvironmentLink& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the linked environment (the dependency).</p>
     */
    inline EnvironmentLink& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
